#include<stdio.h>
#include<stdlib.h>
int main()
{
    int i,j,num,target;
    printf("Enter the number of elements:");
    scanf("%d",&num);
    int arr[num];
    printf("Enter the elements:");
    for(i=0;i<num;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Please enter the target:");
    scanf("%d",&target);
    for(i=0;i<num;i++)
    {
        for(j=i+1;j<num;j++)
        {
           if(arr[i]+arr[j]==target)
           {
             printf("target found at indices:%d,%d",i,j);
             return 0;
           }
        }
    }
    printf("Pair not found:\n");
    return 0;
}
