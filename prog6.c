#include <stdio.h>
#include <stdlib.h>
int main()
{
    int i,num,arr[100];
    printf("enter number of elements:");
    scanf("%d",&num);
    printf("Enter the elements:");
    for(i=0;i<num;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<100;i++)
    {
         if(i!=arr[i])
             {
                 printf("The smallest positive integer which is not in the array is %d",i);
                 return 0;
             }
    }




}
