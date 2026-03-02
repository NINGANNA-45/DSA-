#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,num,target,arr[100];
    printf("Enter the number of elements:");
    scanf("%d",&num);
    printf("Enter the elements:");
    for(i=0;i<num;i++){
        scanf("%d",&arr[i]);
    }
    printf("Enter the target:");
    scanf("%d",&target);
    for(i=0;i<num;i++){
        if(arr[i]==target){
            printf("target %d found at index %d ",target,i);
            return 0;
        }
    }
    printf("target was not there in array\n");
    for(i=0;i<num;i++){
        if(target>arr[i]&&target<arr[i+1]){
            printf("target elm is to be at index %d",i+1);
            return 0;
        }
       // else{
           // printf("The elem is to be at index -1");
            //return 0;
       // }
    }


}
