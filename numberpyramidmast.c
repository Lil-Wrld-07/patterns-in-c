#include<stdio.h>
void main()
{
    int i,j,k,n;
    printf("Enter the number of lines :");
    scanf("%d",&n);
    int nsp=1;
    int nst=n;
    for ( int m = 1; m<=2*n+1; m++)
    {
        printf("%d",m);
    }
    printf("\n");
    
    for (i = 1; i <=n; i++)
    {
        int a=1;
       for (j = 1; j <=nst ;j++)
        {
           
         printf("%d",a);
         a++;
        }
        for ( k= 1; k<= nsp ; k++)
        {
            printf(" ");
        }
         for (j = 1; j <=nst ;j++)
        {
            //int b=5;
         printf("%d",a);
            a+=2;
        }
        nsp+=2;
        nst--;
    
      printf("\n");
    }
 
    
        
    
    
    
}
