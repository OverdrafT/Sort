#include <time.h>
#include "Sort.h"
#include "menu.h"
#include "Array.h"
extern int arr[P][M][N];
clock_t Sort_By_Direct_Selection_With_Vector()//сортування методом прямого вибору з використанням додаткового масиву
{
clock_t time_start,time_finish;
time_start=clock();//початок відліку
int Min,imin,i,k,j,a,size=M*N;
int Vect[size];
for(k=0;k<P;k++)
    {
        i=0;j=0;
        for (a=0; a<size;   a++ )//переписування двовимірного масиву в одновимірний
        {
         Vect[a]=arr[k][i][j];
            if ( j<M-1 ) j++;
            else { j=0; i++;}
        }
    for(i=0;i<size;i++)//сортування
        {
            Min=Vect[i];
            imin=i;
            for(j=i+1;j<size;j++)
            {
                if(Vect[j]<Min)
                    {
                    Min=Vect[j];
                    imin=j;
                    }
            }
            Vect[imin]=Vect[i];
            Vect[i]=Min;
        }
        j=0;i=0;
        for ( a=0; a<size; a++ )//переписування одновимірного масиву в двовимірний
        {
            arr[k][i][j]=Vect[a];
            if ( j<M-1 ) j++;
            else { j=0; i++;}
        }
    }
    time_finish=clock();//кінець відліку
int res=time_finish-time_start;
return res;
}
clock_t Sort_By_Direct_Selection_Without_Vector()//сортування методом прямого вибору з перетворенням індексів
{
    clock_t time_start,time_finish;
    time_start=clock();//початок відліку
    int  Min,imin,i,k,j, size=M*N;
    for ( k=0; k<P; k++ )
    {
        for ( i=0; i<size; i++ )
        {
            /*перетворення індексу уявного ветору розміром [M*N] на індекси елементів тривимірного масиву А [K][M][N]*/
            Min=arr[k][i/N][i-(i/N)*N];
            imin= i;
            for( j=i+1; j<size; j++ )
                if(arr[k][j/N][j-(j/N)*N]<Min)
                {
                    Min=arr[k][j/N][j-(j/N)*N];
                    imin=j;
                }
            arr[k][imin/N][imin-(imin/N)*N]=arr[k][i/N][i-(i/N)*N];
            arr[k][i/N][i-(i/N)*N]=Min;

        }
    }
    time_finish=clock();//кінець відліку
int res=time_finish-time_start;
return res;
}
clock_t Sort_By_Direct_Selection_1()//сортування методом прямого вибору безпосередньо в масиві
{
clock_t time_start,time_finish;
time_start=clock();//початок відліку
int Min,i,n,m,s,j,imin,jmin,k;
for(k=0;k<P;k++)
    {
    for (i=0;i<M;i++)
        {
        for (j=0;j<N;j++)
            {
            if ((j == N-1) && (i == M-1))
            {
                break;
            }
            Min = arr[k][i][j];
            imin = i; jmin = j;
            n=j+1;
            for (m=i;m<M;m++)
                {
                for (s=n;s<N;s++)
                    {
                    if (arr[k][m][s]<Min)
                        {
                        Min = arr[k][m][s];
                        imin = m;
                        jmin = s;
                        }
                    }
                n = 0;
                }
            arr[k][imin][jmin] = arr[k][i][j];
            arr[k][i][j] = Min;
            }
        }
    }
time_finish=clock();//кінець відліку
int res=time_finish-time_start;
return res;
}
