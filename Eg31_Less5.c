// Menu driven program using infinite loop and switch
#include<stdio.h>
#include<conio.h>
main()
{ 
  int c;
  while(1)
  {
          system("cls");
            printf(" 1. Create Database\n");
            printf(" 2. Insert new record\n");
            printf(" 3. Modify a record\n");
            printf(" 4. Delete a record\n");
            printf(" 5. Display all record\n");
            printf(" 6. Exit\n");
            printf("\n Enter your choice : ");
            scanf("%d",&c);
      switch(c)
            {
                case 1:
                printf(" Database Create ......\n\n");
                break;
                case 2:
                printf(" Record inserted ......\n\n");
                break;
                case 3:
                printf(" Record modify ......\n\n");
                break;
                case 4:
                printf(" Record deleted ......\n\n");
                break;
                case 5:
                printf(" Records displayed ......\n\n");
                break;
                case 6:
                     exit(1);
           default:
                printf(" Wrong Choice\n");
    }
  }
 getch();
}
