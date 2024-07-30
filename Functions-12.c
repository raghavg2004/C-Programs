/*                    Functions 
   program to find the type and area of a triangle  */
#include<stdio.h>
#include<conio.h>
#include<math.h>
void type(float a,float b,float c);
void area(float a,float b,float c);
main()
{
    float a,b,c;
    printf(" Enter First side : ");
    scanf("%f",&a);
    printf(" Enter Second side : ");
    scanf("%f",&b); 
    printf(" Enter Third side : ");
    scanf("%f",&c);
    if(a<b+c && b<c+a && c<a+b)
     {
       type(a,b,c);
       area(a,b,c);
     }
    else 
     printf(" No Triangle possible with these sides\n");
 getch();
}
void type(float a,float b,float c)
{
 if((a*a)+(b*b)==(c*c) || (b*b)+(c*c)==(a*a) || (c*c)+(a*a)==(b*b))
    printf(" The Triangle is right angled Triangle\n");
 if(a==b && b==c)
    printf(" The Triangle is Equilateral\n");
 else if (a==b || b==c || c==a)
    printf(" The Triangle is Isosceles\n");
 else
    printf(" The Triangle is Scalene\n");
}
void area(float a,float b,float c)
{
  float s,areaoftriangle;
  s=(a+b+c)/2;
  areaoftriangle=sqrt(s*(s-a)*(s-b)*(s-c));
  printf(" The AREA of Triangle = %.2f\n",areaoftriangle);
}
