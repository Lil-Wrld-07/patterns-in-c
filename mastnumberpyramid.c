#include<stdio.h>
void main(){
    int i,j,k,n;
    printf("Enter the number of lines :");
    scanf("%d",&n);
    for (i = 1; i <= n; i++)
    {
        int a=i-1;
        for (j = 1; j <= n-i; j++)
        {
            printf(" ");
        }
        for ( k =1; k <= i; k++)
        {
          printf("%d ",k);
        }
        for (int m = 1; m <= i-1; m++)
        {
            printf("%d ",a);
             a--;
        }
        
        printf("\n");
        
    }
    
}