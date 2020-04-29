#include<stdio.h>

void arry(int *arry, int* size)
{
    for(int i = 0;i< (*size);i++)
    {
        printf("%d",arry[i]);
    }
    printf("\n");
}

int main()
{
    int arry1[]={1,2,4};
    int arry2[]={1,2,9};
    int arry3[]={9,9,9};
}