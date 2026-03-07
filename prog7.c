#include<stdio.h>
#include<stdlib.h>
int main()
{
    int i,m,n,a[100],b[100],result[100];
    float sum=0;
    float median;
    printf("Enter the array size:");
    scanf("%d",&m);
    printf("Enter the elements:");
    for(i=0;i<m;i++){
        scanf("%d",&a[i]);
    }
    printf("Enter the another array size:");
    scanf("%d",&n);
    printf("Enter the elements:");
    for(i=0;i<n;i++){
        scanf("%d",&b[i]);
    }
    printf("........");
    for(i=0;i<m;i++)
    {
        result[i]=a[i];
    }
    for(i=0;i<n;i++)
    {
        result[m+i]=b[i];
    }
    for(i=0;i<m+n;i++){
        printf("%d",result[i]);
        return 0;
    }
    for(i=0;i<m+n;i++){
        sum+=result[i];
    }
    printf("The Sum of Concatenated array is : %.2f",sum);
    median=sum/(m+n);
    printf("The Median is : %.2f",median);


}
