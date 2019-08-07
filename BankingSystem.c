#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
void Deposite();
void Withdraw();
void Transfer();
void CheckDetail();
int list();
void last();
int TotalAmount=1000;
int Amount,Amo,Tr;
int TotalDeposite=0;
int TotalWithdraw=0;
int TotalTransfer=0;
long long Acc;
char name[50];
int list()
{
    int ch;
    printf("\n1.Deposite Amount");
    printf("\n2.Withdraw Amount");
    printf("\n3.Transfer Amount");
    printf("\n4.Check Detail");
    printf("\n5.Exit");
    printf("\n\nEnter Your Choice : ");
    scanf("%d",&ch);
    return ch;
}

void Deposite()
{
    printf("\nEnter your Amount You Want To Deposite : Rs. ");
    scanf("%d",&Amount);
    TotalAmount += Amount;
}

void Withdraw()
{
    printf("\nEnter Your Amount You Want to Withdraw : Rs. ");
    scanf("%d",&Amo);
    if(Amo <= TotalAmount)
        TotalAmount -= Amo;
    else
        printf("Insufficient Balance");
}

void Transfer()
{
    printf("\nEnter your Amount you Want to Transfer : Rs. ");
    scanf("%d",&Tr);
    if(Tr<TotalAmount)
        TotalAmount -= Tr;
    else
        printf("Insufficient Balance");
}

void CheckDetail()
{
   printf("\nTotal Amount : %d",TotalAmount);
   printf("\nTotal Deposite : %d",TotalDeposite);
   printf("\nTotal Withdraw : %d",TotalWithdraw);
   printf("\nTotal Transfer : %d\n",TotalTransfer);
}

void last()
{
    printf("\n*********************DETAIL***********************************\n");
    printf("\nYour Name : %s",name);
    printf("\nYour Account Number : %lld",Acc);
    printf("\nTotal Amount : %d",TotalAmount);
    printf("\nTotal Deposite : %d",TotalDeposite);
    printf("\nTotal Withdraw : %d",TotalWithdraw);
    printf("\nTotal Transfer : %d",TotalTransfer);
    printf("\n\n***************THANKS*********************");
}

int main()
{
    printf("Enter Your Name : ");
    gets(name);
    printf("Enter Your Account Number : ");
    scanf("%lld",&Acc);
    while(1)
    {
        system("cls");
        switch(list())
        {
        case 1:
            Deposite();
            TotalDeposite += Amount;
            break;

        case 2:
            Withdraw();
            if(Amo <= TotalAmount)
                TotalWithdraw += Amo;
            break;

        case 3:
            Transfer();
            if(Tr <= TotalAmount)
                TotalTransfer += Tr;
            break;

        case 4:
            CheckDetail();
            break;

        case 5:
            system("cls");
            last();
            getch();
            exit(0);

        default :
            printf("\nYou Have Entered Wrong Choice");
        }
        getch();


    }
    return 0;
}
