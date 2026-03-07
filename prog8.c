//longest substring without repeating characters //incomplete
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num,i,count=0;
    char words[100];
    printf("Enter the number of words:");
    scanf("%d",&num);
    printf("Enter the words:");
    scanf("%s",&words);
    for(i=0;i<num;i++)
    {
        scanf("%s",&words[i]);

    }
    for(i=0;i<num;i++)
    {
        if(words[i]!=words[i])
        {
            count++;
        }
    }
    printf("\n%d duplicates elements in this Array:",count);
    return 0;

}
