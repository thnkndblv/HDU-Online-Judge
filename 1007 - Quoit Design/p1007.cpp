#include <stdio.h>
#include <utility>
#include <set>
#include <algorithm>
#include <math.h>

using namespace std;

#define X second
#define Y first
#define sqr(x) ((x)*(x))
#define dist( a, b ) sqrt( sqr( (a).X - (b).X ) + sqr( (a).Y - (b).Y ) )
#define mp make_pair

typedef pair<double,double> point;

int cmpx(point a, point b)
{
  return a.X < b.X;
}

double closestPair(point p[], int n)
{
  double ans = 1500000000;
  int left = 0;
  set< point > box;

  sort( p, p+n, cmpx );
  box.insert( p[0] );
  for (int i=1; i<n; i++)
  {
    while ( left<i && (p[i].X-p[left].X)>ans ) box.erase( p[ left++ ] );
    set< point > :: iterator it;
    for (it=box.lower_bound( mp( p[i].Y-ans, p[i].X-ans ) ); it != box.end() && p[i].Y+ans>=(*it).Y; it++)
      ans = min( ans, dist( p[i], *it ) );
    box.insert( p[i] );
  }
  return ans;
}

point p[ 100005 ];

int main()
{
  int n;

  while ( scanf("%d",&n), n )
  {
    for (int i=0; i<n; i++) scanf("%lf %lf",&p[i].X,&p[i].Y);
    printf("%.2lf\n",closestPair( p, n ) / 2.0);
  }

  return 0;
}
