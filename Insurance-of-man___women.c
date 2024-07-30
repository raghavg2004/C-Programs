/* Insurance */
#include<stdio.h>
#include<conio.h>

int main()
{
    int age ;
    char h,l,g;
    float amount,pre;
    
    printf(" Enter age of the person : ");
    scanf("%d",&age);

	if(age>=25 && age<=35)
    {
        fflush(stdin);      
        printf(" Enter Health e for excellent p for poor : ");
        scanf("%c",&h);
        fflush(stdin);
        printf(" Enter live c for city v for village : ");
        scanf("%c",&l);
        fflush(stdin);
        printf(" Enter gender m for male f for female : ");
        scanf("%c",&g);
        
        if(h=='e' && l=='c' && g=='m')
        {
              printf(" Enter Amount : ");
              scanf("%f",&amount);
        
              if(amount>0 && amount<=200000)
              {
                  pre=(amount*4)/1000;
                  printf(" Premium = %f",pre);        
              }
              else
              {
                  printf(" Not Applicable");
              }
        }
        else if(h=='e' && l=='c' && g=='f')
        {
              printf(" Enter Amount : ");
              scanf("%f",&amount);
        
              if(amount>0 && amount<=100000)
              {
                  pre=(amount*3)/1000;
                  printf(" Premium = %f",pre);        
              }
              else
              {
                  printf(" Not Applicable");
              }
        }    
        else if(h=='p' && l=='v' && g=='m')
        {
              printf(" Enter Amount : ");
              scanf("%f",&amount);
        
              if(amount>0 && amount<=10,000)
              {
                  pre=(amount*6)/1000;
                  printf(" Premium = %f",pre);        
              }
              else
              {
                  printf(" Not Applicable");
              }              
        }
        else
        {
            printf(" Not Applicable");      
        }
    }
    else
    {
       printf("Not Applicable");      
    }

    getch();

}
