#include<stdio.h>
#include<stdlib.h>
int Menu();
void Bus();
void Cycle();
void Riksha();
void Delete();
void DeleteCycle();
void DeleteRiksha();
void DeleteBus();
void ShowDetail();
int nor=0, nob=0, noc=0;
int amount=0, count=0;
void main()
{
printf("1. Enter bus:\n");
printf("2. Enter Cycle:\n");
printf("3. Enter Riksha:\n");
printf("4. Delete bus:\n");
printf("5. Delete Cycle:\n");
printf("6. Delete Riksha:\n");
printf("7. Delete data:\n");
printf("8. Show status:\n");
printf("9. Exit:\n");
while(1)
{
   switch(Menu())
{
case 1:
    Bus();
    break;
case 2:
    Cycle();
    break;
case 3:
    Riksha();
    break;
case 4:
    DeleteBus();
    break;
case 5:
    DeleteCycle();
    break;
case 6:
    DeleteRiksha();
    break;
case 7:
    Delete();
    break;
case 8:
    ShowDetail();
    break;
case 9:
    exit(0);
default:
    printf("\n Invalid choice");
}
}
//getch();
}
int Menu()
{
int ch;
printf("\n Enter your choice:");
scanf("%d",&ch);
return(ch);
}
void Delete()
{
nob=0;
noc=0;
nor=0;
amount=0;
count=0;
}
void ShowDetail()
{
printf("\nNo. of Bus = %d",nob);
printf("\nNo. of Cycle = %d",noc);
printf("\nNo. of Riksha = %d",nor);
printf("\nTotal no of vechicle = %d",count);
printf("\nTotal Amount = %d",amount);
}
void Riksha()
{
nor++;
amount=amount+50;
count++;
printf("\nEntry successfully completed.");
}
void Cycle()
{
noc++;
amount=amount+20;
count++;
printf("\nEntry successfully completed.");
}
void Bus()
{
nob++;
amount=amount+100;
count++;
printf("\nEntry successfully completed.");
}
void DeleteRiksha()
{
nor--;
count--;
printf("\nExit successfully completed.");
}
void DeleteCycle()
{
noc--;
count--;
printf("\nExit successfully completed.");
}
void DeleteBus()
{
nob--;
count--;
printf("\nExit successfully completed.");
}
