//   CALCULATOR
#include<stdio.h>
#include<conio.h>
void main()
{    
  int ch,a,b,c,n=1;
  float f;
  while(n==1)
  {

    while(1)
{
    system("cls");
    printf("\n\n1. Add\n2. Subtrate\n3. Multiply\n4. Divide\n5. Exit\nEnter choice : ");
 
     scanf("%d",&ch);

        switch (ch)
    {

        case 1 : printf("Enter 2 no.s :");
                 scanf("%d%d",&a,&b);
                 c = a+b;
                 printf("Sum = %d",c);
                 break;

        case 2 : printf("Enter 2 no.s :");
                 scanf("%d%d",&a,&b);
                 c = a-b;
                 printf("Difference = %d",c);
                 break;
             
        case 3 : printf("Enter 2 no.s :");
                 scanf("%d%d",&a,&b);
                 c = a*b;
                 printf("Product = %d",c);
                 break;
                 
        case 4 : printf("Enter 2 no.s :");
                 scanf("%d%d",&a,&b);
                 f = (float)a/b;
                 printf("Division = %f",f);
                 break;
                 
        case 5 : return;
     printf(" Do You want to continue press 1 else 0 ? ");
    scanf("%d",&n);    
  }
    }
    }
}
