#include "stdio.h"

int main()
{
    int x;

    for (x = 1; x <= 100; x++)
    {
        if (x % 8 != 0)
        {
            continue;
        }
        printf("%d\n", x);
    }
    /*
        x = 1 ;
        while( x <= 100){
        if(x % 8 != 0)}
            continue;
        }
        printf("%d\n", x);
        x++;
    }
    */
    return 0;
}