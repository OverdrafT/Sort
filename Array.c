#include <stdio.h>
#include <stdlib.h>
#include "Array.h"
#include "menu.h"
extern int arr[P][M][N];
int i,k,j;

void BackSortArray()//���������� �������� ������������ ������
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
void SortArray( )// ���������� �������������� ������
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
void RandArray()// ���������� ���������� ������
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
void OutArray()// ���� ������
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
