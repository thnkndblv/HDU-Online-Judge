#include <stdio.h>
#include <memory.h>

char grid[ 15 ][ 15 ];
int step[ 15 ][ 15 ];
int mov[][2] = {{-1,0},{1,0},{0,1},{0,-1}};

int dir(char d)
{
    if ( d == 'N' ) return 0;
    if ( d == 'S' ) return 1;
    if ( d == 'E' ) return 2;
    if ( d == 'W' ) return 3;
    return 0;
}

int main()
{
    int R, C, Ci;
    
    while ( scanf("%d %d %d\n",&R,&C,&Ci), R || C )
    {
        for (int i=0; i<R; i++) gets( grid[ i ] );
        
        memset( step, -1, sizeof step );
        
        int r = 0;
        int c = Ci-1;
        int stepNum = 0;
        while ( true )
        {
            step[ r ][ c ] = stepNum++;
            int nr = r + mov[ dir( grid[r][c] ) ][ 0 ];
            int nc = c + mov[ dir( grid[r][c] ) ][ 1 ];
            r = nr; c = nc;
            if ( r>=0 && r<R && c>=0 && c<C )
            {
                if ( step[r][c] != -1 )
                {
                    printf("%d step(s) before a loop of %d step(s)\n",step[r][c],stepNum-step[r][c]);
                    break;
                }
            }
            else
            {
                printf("%d step(s) to exit\n",stepNum);
                break;
            }
        }
    }
    
    return 0;
}
