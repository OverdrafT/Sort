#include "menu.h"
#include "Table.h"
#include "Measurement.h"
#include "Sort.h"
#include "Array.h"
extern int arr[P][M][N];
void MeasurementTime(int algoritm)//виміри часу для одного алгоритму
{
    int i,Res_N=28;
    int Res[Res_N];
     printf("\n");
        if(algoritm == 1)
        {
                printf("Sort By Direct Selection With Vector\t");
        }else if( algoritm == 2)
        {
                printf("Sort By Direct Selection Without Vector\t");
        }else if( algoritm == 3)
        {
                printf("Sort By Direct Selection(1)\t\t");
        }
    for(i=0;i<Res_N;i++)//рахування масиву часу для відсортованого масиву заданим алгоритмом
    {
        SortArray();
        Res[i]=ArrTable(algoritm);
    }
    MeasurementProcessing(Res_N,Res);
    printf(" %15d",Res[0]);

    for( i=0;i<Res_N;i++)//рахування масиву часу для випадкового масиву заданим алгоритмом
    {
        RandArray();
        Res[i]=ArrTable(algoritm);
    }
    MeasurementProcessing(Res_N,Res);
    printf(" %15d",Res[0]);

    for( i=0;i<Res_N;i++)//рахування масиву часу для обернено відсортованого масиву заданим алгоритмом
    {
        BackSortArray();
        Res[i]=ArrTable(algoritm);
    }
    MeasurementProcessing(Res_N,Res);
    printf(" %15d",Res[0]);

}
void Results() {
    system("cls");
    int value;
    printf("P=%d,M=%d,N=%d\n\t\t\t\t\t\t  Sort array \t Rand array \t Back Sort array\n",P,M,N);
    //виклики финкції для вимірів часу одного алгоритму
    MeasurementTime(1);
    MeasurementTime(2);
    MeasurementTime(3);
    printf("\n");

}
clock_t ArrTable(int algoritm)//час сортування масиву
{
    clock_t Res;
        if(algoritm == 1)
        {

            Res=Sort_By_Direct_Selection_With_Vector();

        }else if( algoritm == 2)
        {
            Res=Sort_By_Direct_Selection_Without_Vector();
        }else if( algoritm == 3)
        {

            Res=Sort_By_Direct_Selection_1();
        }
    return Res;
}


