#include<stdio.h>
#include<conio.h>

int main()
{
    int arr[20];
    int i,j,target,no;
    printf("How many Integers do u want in ur array?\n");
    scanf("%d",&no);

    for(i=0;i<no;i++)
    {
        printf("Enter Number %d\n:",(i+1));
        scanf("%d", &arr[i]);
    }
    printf("Enter The Sum of two integers:\n");
    scanf("%d",&target);
    printf("The compatible pairs are ");
    if(1)
    {
    
        for(i=0;i<no;i++)
        {
            int temp = arr[i];
            for(j=0;j<no;j++)
            {
                if((temp+arr[j])==target)
                {
                    printf("[%d,%d]\t",temp,arr[j]);
                }
            }
        }
    }
    return 0;
}    
    
