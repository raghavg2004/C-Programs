/*            Functions-30_(problem4)_
   program to convert a decimal no. to roman no.   */
#include<stdio.h>
#include<conio.h>
int roman(int,int,char);
main()
{
  int num,ch=1;
  while(ch==1)
  {
    system("cls");
    printf(" Enter a Number : ");
    scanf("%d",&num);     
    if(num>=1000)
       num=roman(num,1000,'m');
    if(num>=500)
       num=roman(num,500,'d');    
    if(num>=100)
       num=roman(num,100,'c');    
    if(num>=50)
       num=roman(num,50,'l');    
    if(num>=10)
       num=roman(num,10,'x');    
    if(num>=5)
       num=roman(num,5,'v');    
    if(num>=1)
       num=roman(num,1,'i');    
    printf("\n\n");
    printf(" Do You want to continue press 1 else 0 ? ");
    scanf("%d",&ch);    
  }  
  getch();
}

int roman(int n,int k,char c)
{
    if(n==9)
    {
      printf(" ix");
      return 0;
    }
    if(n==4)
    {
      printf(" iv");
      return 0;
    }
    while(n>=k)
    {
      printf(" %c",c);
      n=n-k;
    }
  return n;
}
