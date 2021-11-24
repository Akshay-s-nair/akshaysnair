#include <stdio.h>
#include<stdlib.h>
void withdraw(int,int);
void deposit(int,int);
void balance(int,int);
struct acc
{
    char name[100];
    int accno;
    float balance;
    
}a[100];

int main()
{
    int i,n,choice,m;

    printf("Enter the number of account holders:");
    scanf("%d",&n);
    printf("\nEnter the details of acc holders");
    
    for(i=0;i<n;i++)
    {
        printf("\n\tDetails of %dth acc holder\n",i+1);
        printf("name:");
        scanf("%s", a[i].name);
        printf("account number:");
        scanf("%d",&a[i].accno);
        printf("balance:");
        scanf("%f",&a[i].balance);
    }
    printf("***********************************\n");
     printf("Enter the acc no to proceed: ");
     scanf("%d", &m);   
    do
  {
   printf("\n1-withdraw\n2-deposit\n3-balance\n4-exit\nplease enter the option:");
   scanf("%d",&choice);

   switch(choice)
   {
   case 1: withdraw(m,n);
   break;
   case 2:deposit(m,n);
   break;
   case 3:balance(m,n);
   break;
   case 4:
      printf("\tTHANK YOU FOR USING OUR SERVICE\n");
      exit(0);
   default:
   printf("Invalid choice.");
   break;
   }
   printf("\n");
  }while(choice!=4);
    return 0;
}
void withdraw(int m,int n)
{
  int i;
  float amount;
  printf("Enter the amount:");
  scanf("%f",&amount);
  for(i=0;i<n;i++)
  {
    if(a[i].accno==m)
    {
        if(amount<a[i].balance)
        {
            
        
        a[i].balance=a[i].balance-amount;
        printf("the balance is %f ",a[i].balance);
        
        }
    }
  }
}
void deposit(int m,int n)
{
    int i;
  float amount1;
  printf("Enter the amount:");
  scanf("%f",&amount1);
  for(i=0;i<n;i++)
  {
    if(a[i].accno==m)
    {
        a[i].balance=a[i].balance+amount1;
        printf("the new balance is %f",a[i].balance);
    }
  }
}

void balance(int m,int n)
{
    int i;
for(i=0;i<n;i++)
  {
    if(a[i].accno==m)
    {
        printf("Balance is %f",a[i].balance);
    }
  }
        
}
