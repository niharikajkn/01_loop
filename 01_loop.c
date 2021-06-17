#include <stdio.h>

int main()
{
    int i,j;
    int x=01;
    for(i=0;i<5;++i)
    {
        for(j=0;j<=i;++j)
        {
            printf("0%d",x);
        }
        printf("\n");
    }

    return 0;
}
