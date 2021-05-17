#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <windows.h>
#include "menu.h"
#include "Array.h"
#include "Sort.h"
#include "Table.h"
int arr[P][M][N];
void menu()//початкове меню
{
    int value =0;
    system("cls");
    printf("Select an action:\n");
    printf("1- Sort by direct selection with a vector(1)\n");
    printf("2- Sort by direct selection without a vector(1) \n");
    printf("3- Sort by direct selection(1)\n");
    printf("4- Table\n");
    printf("5- Exit\n");
    scanf("%d",&value);
    switch(value)//вибір алгоритму сортування
    {
    case 1:
        Menu_Algoritms(1);
        break;
    case 2:
        Menu_Algoritms(2);
        break;
    case 3:
        Menu_Algoritms(3);
        break;
    case 4:
        Results();
    case 5:
        break;
    default:
        fflush(stdin);
        menu();
    }
}
void Menu_Algoritms(int algoritm)//меню вибора масиву
{
    int value;
    system("cls");
    printf("Select an array:\n");
    printf("1-Rand array\n");
    printf("2-Sort array\n");
    printf("3-Back sort array\n");
    scanf("%d",&value);
    switch(value)//вибір виду масиву
    {
    case 1:
        RandArray();
        break;
    case 2:
        SortArray();
        break;
    case 3:
        BackSortArray();
        break;
    default:
        fflush(stdin);
        Menu_Algoritms(algoritm);
    }
    printf("Out Array:\n");
    OutArray();
    switch (algoritm)//сортування вибраного масиву вибраним методом
    {
    case 1:
        Sort_By_Direct_Selection_With_Vector();
        break;
    case 2:
        Sort_By_Direct_Selection_Without_Vector();
        break;
    case 3:
        Sort_By_Direct_Selection_1();
        break;
    default:
        Menu_Algoritms(algoritm);
        break;
    }
    printf("\nOut Sort Array:\n");
    OutArray();
    printf("\nYour next step:\n");
    printf("1- return to menu.\n");
    printf("2- return to choice an array\n");
    printf("3-exit\n");
    scanf("%d",&value);
    switch(value)
    {
    case 1:
        menu();
        break;
    case 2:
        Menu_Algoritms(algoritm);
        break;
    case 3:

        exit(1);
        break;
    }
}
