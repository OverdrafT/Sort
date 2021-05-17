#include <stdio.h>
#include <stdlib.h>
#include "Array.h"
#include "menu.h"
extern int arr[P][M][N];
int i,k,j;

void BackSortArray()//заповнення обернено впорядкового масиву
{
    int num=P*N*M;
    for(k=0;k<P;k++)
    {
        for(i=0;i<M;i++)
        {
            for(j=0;j<N;j++)
            {
                arr[k][i][j]=num;
                num--;
            }
        }
    }
}
void SortArray( )// заповнення впорядкованого масиву
{
    int num=1;
    for(k=0;k<P;k++)
    {
        for(i=0;i<M;i++)
        {
            for(j=0;j<N;j++)
            {
                arr[k][i][j]=num;
                num++;
            }
        }
    }
}
void RandArray()// заповнення впадкового масиву
{
    srand(time(NULL));
    int T = M*N;
    for(k=0;k<P;k++)
    {
        for(i=0;i<M;i++)
        {
            for(j=0;j<N;j++)
            {
                arr[k][i][j]=rand()%T;
            }
        }
    }
}
void OutArray()// вивід масиву
{
    for(k=0;k<P;k++)
    {
        for(i=0;i<M;i++)
        {
            for(j=0;j<N;j++)
            {
                printf("%d ",arr[k][i][j]);
            }
            printf("|\n");
        }
        printf("\n");
    }
}
