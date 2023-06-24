#include<stdio.h>
void main()
{
    int i,j,k,n;
    printf("Enter odd numbers to  print diamond :");
    scanf("%d",&n);
    int nsp= n/2;
    int nst = 1;
    int ml = n/2+1;
    if (n%2!=0)
    {
      for ( i = 1; i <= n; i++)
      {
        for ( j = 1; j <= nsp; j++)
        {
            printf(" ");
        }
        for (k = 1; k <= nst ; k ++)
        {
            printf("*");
        }
        if (i<ml)
        {
            nsp--;
            nst+=2;
        }
        else
        {
          nsp++;
          nst-=2;

        }
         printf("\n");
      }
   }
    else
    printf(" PLEASE ENTER ODD NUMBER !");
    
}
