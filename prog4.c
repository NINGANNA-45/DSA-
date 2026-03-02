#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,j,num,arr[100];
    printf("Enter the number of elements:");
    scanf("%d",&num);
    printf("Enter the elements:");
    for(i=0;i<num;i++){
        scanf("%d",&arr[i]);
    }
    for(i=0;i<num;i++){
        for(j=i+1;j<num;j++){
            if(arr[i]==arr[j]){
                printf("duplicate elements are %d %d at indices %d %d",arr[i],arr[j],i,j);
                for(i=0;i<num;i++){
                    printf("\n%d\n",arr[i]);
                }
                return 0;
            }
        }
    }
    printf("pair not found:");
    return 0;
}
