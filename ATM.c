#include <stdio.h>
#include <stdlib.h>
int withdraw(int savingCash , int Amount);
int deposite(int savingCash , int Amount);
int Balance(int savingCash);

int main()
{
      int ch,savingCash=0,Amount;
      printf("*****Welcome to AIR bank.com*****\n");
      do
      {
            printf("\nFor Withdraw press 1");
            printf("\nFor Deposite press 2");
            printf("\nFor Check Balance press 3\n");
            scanf("%d",&ch);
            switch(ch)
            {
            case 1:
                   withdraw(savingCash , Amount);
                  break;


            case 2:
                   deposite( savingCash ,  Amount);
                  break;


            case 3:
                   Balance( savingCash);
                  break;

            }

         }while(1);

    return 0;
}
 int withdraw(int savingCash , int Amount)
{
     printf("withdraw option is only\n savings");
                  printf("\nEnter Amount");
                  scanf("%d",&Amount);
                  {
                        if(savingCash=0)
                              printf("No Money");
                        if else(savingCash < Amount)
                              printf("not sufficient balance!");
                        else
                              savingCash=savingCash-Amount;
                  }

}
 int deposite(int savingCash , int Amount)
{
                  printf("Enter Amount");
                  scanf("%d",&Amount);
                  {
                        if(savingCash=0)
                              savingCash=Amount;
                        else
                              savingCash=savingCash+Amount;
                  }

}
int Balance(int savingCash)
{
       printf("Balance %d",savingCash);

}
