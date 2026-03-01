#include<stdio.h>
#include<stdlib.h>
int main()
{
    int iNum,i,j,k,iaArr[10],iTemp;
    printf("\nPROGRAM TO IMPLEMENT BUBBLE SORT\n");
    printf("ENTER THE NO OF ELEMENTS:");
    scanf("%d",&iNum);
    printf("enter the elements:");
    for(i=0;i<iNum;i++)
    {
        scanf("%d",&iaArr[i]);
    }
    getchar();
    for(k=0;k<iNum;k++)
    {
        printf("%d\t",iaArr[k]);
    }
    for(i=0;i<iNum-1;i++)
    {
        for(j=0;j<iNum-i-1;j++)
        {
            printf("\n\nIterationi=%d,j=%d\t now comparing %d and %d \n",i,j,iaArr[j],iaArr[j+1]);
            if(iaArr[j]>iaArr[j+1])
            {
                iTemp=iaArr[j];
                iaArr[j]=iaArr[j+1];
                iaArr[j+1]=iTemp;
            }
            for(k=0;k<iNum;k++)
            {
                printf("%d\t",iaArr[k]);
            }
            getchar();
        }
    }
    printf("\n The Sorted Array is:\n");
    for(i=0;i<iNum;i++)
    {
        printf("%d\t",iaArr[i]);
    }
    printf("\n");
    return 0;


}

