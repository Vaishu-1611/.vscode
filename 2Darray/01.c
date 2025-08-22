#include<stdio.h>
int main()
{
    int a[3][4]={{1,1,0,0},{1,1,1,0},{1,0,0,0}};
    int maxcount=0;
    int count = 0;
    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 4; j++)
        {
           printf("%d ", a[i][j]);
        }
        printf("\n");
    }
    for(int i = 0; i < 2; i++)
    {
        for(int j = 1; j < 3; j++)
        {
            if(a[i][j]==1)
            count++;
        }
        if(count>maxcount)
        {
            maxcount=count;
        }
    }
    printf("The maximum number of 1s of the 2D array are: %d\n",maxcount);
    return 0;
}