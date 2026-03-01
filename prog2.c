#include <stdio.h>
#include <stdlib.h>
int main()
{
    int i,j,k,num,target;
    int arr[100];
    printf("Enter the number of elements:");
    scanf("%d",&num);
    printf("Enter the elements:");
    for(i=0;i<num;i++){
        scanf("%d",&arr[i]);
    }
    printf("Enter the target:");
    scanf("%d",&target);
    for(i=0;i<num;i++){
        for(j=i+1;j<num;j++){
            for(k=j+1;j<num;j++){
                if(arr[i]+arr[j]+arr[k]==target){
                    printf("pair found at indices %d %d %d",i,j,k);
                    printf("\nElements %d+%d+%d",arr[i],arr[j],arr[k]);
                    return 0;
                }
            }
        }
    }
    printf("pair not found:");
    return 0;
}
