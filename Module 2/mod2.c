1.
#include <stdio.h>
#include <stdlib.h>
void BankOperation(int bank)
{
          int type_acc;
           printf("\n*****Welcome to your Dashboard*****");
           printf("\nCheck interest rate for following accounts");
           printf("\n1.Savings Account");
           printf("\n2.Current Account");
           printf("\n3.Demat Account");
           printf("\n4.Thank you!!");
           printf("\nType of account: ");
           scanf("%d",&type_acc);
           if(type_acc==1)
              savings_acc(bank);
           else if(type_acc==2)
              current_acc(bank);
           else if(type_acc==3)
              demat_acc(bank);
           else
              return;
}


void savings_acc(int bank)
{
          printf("You choose Savings Account\n");
            if (bank == 1)
              printf("Interest rate 6.5%%\n");
            else if (bank == 2)
              printf("Interest rate 6.3%%\n");
            else if (bank == 3)
              printf("Interest rate 7.4%%\n");
            else if (bank == 4)
              printf("Interest rate 5.6%%\n");
             else if (bank == 5)
              printf("Interest rate 6.1%%\n");
             else
               printf("Choose valid choice!!!!");
}


void current_acc(int bank)
{
          printf("You choose current account\n");
          if (bank == 1)
            printf("Interest rate 7.5%% \n");
          else if (bank == 2)
            printf("Interest rate 4.3%%\n");
          else if (bank == 3)
            printf("Interest rate 8.6%%\n");
          else if (bank == 4)
            printf("Interest rate 6.7%%\n");
          else if (bank == 5)
            printf("Interest rate 6.25%%\n");
          else
            printf("Choose valid choice!!!!");

}
void demat_acc(int bank)
{
          printf("You choose Demat account\n");
          if (bank == 1)
            printf("Interest rate 6.7%%\n");
          else if (bank == 2)
            printf("Interest rate 6.7%%\n");
          else if (bank == 3)
            printf("Interest rate 6.7%%\n");
          else if (bank == 4)
            printf("Interest rate 6.7%%\n");
          else if (bank == 5)
            printf("Interest rate 6.7%%\n");
          else
            printf("Choose valid choice!!!!");
}


int main()
{
          int ch;
            do
                      {
                          printf("\n****Welcome*****");
                          printf("\n1.Tamilnad Mercantile Bank");
                          printf("\n2.Indian Overseas Bank");
                          printf("\n3.City Union Bank");
                          printf("\n4.ICICI Bank");
                          printf("\n5.Punjab National Bank");
                          printf("\n6.Thank you!");
                          printf("\n***Select your bank***");
                          scanf("%d",&ch);
                          switch(ch)
                          {
                                  case 1:
                                          BankOperation(ch);
                                          break;
                                  case 2:
                                          BankOperation(ch);
                                          break;
                                  case 3:
                                          BankOperation(ch);
                                          break;
                                  case 4:
                                          BankOperation(ch);
                                          break;
                                  case 5:
                                          BankOperation(ch);
                                          break;
                                  case 6:
                                          exit(0);
                                          break;
                                  default:
                                          break;
                          }
                      }while(1);
}

---------------OUTPUT----------------

****Welcome*****
1.Tamilnad Mercantile Bank
2.Indian Overseas Bank
3.City Union Bank
4.ICICI Bank
5.Punjab National Bank
6.Thank you!
***Select your bank***1

*****Welcome to your Dashboard*****
Check interest rate for following accounts
1.Savings Account
2.Current Account
3.Demat Account
4.Thank you!!
Type of account: 1
You choose Savings Account
Interest rate 6.5%

****Welcome*****
1.Tamilnad Mercantile Bank
2.Indian Overseas Bank
3.City Union Bank
4.ICICI Bank
5.Punjab National Bank
6.Thank you!
***Select your bank***2

*****Welcome to your Dashboard*****
Check interest rate for following accounts
1.Savings Account
2.Current Account
3.Demat Account
4.Thank you!!
Type of account: 2
You choose current account
Interest rate 4.3%

****Welcome*****
1.Tamilnad Mercantile Bank
2.Indian Overseas Bank
3.City Union Bank
4.ICICI Bank
5.Punjab National Bank
6.Thank you!
***Select your bank***3

*****Welcome to your Dashboard*****
Check interest rate for following accounts
1.Savings Account
2.Current Account
3.Demat Account
4.Thank you!!
Type of account: 3
You choose Demat account
Interest rate 6.7%

****Welcome*****
1.Tamilnad Mercantile Bank
2.Indian Overseas Bank
3.City Union Bank
4.ICICI Bank
5.Punjab National Bank
6.Thank you!
***Select your bank***6


2.
#include <stdlib.h>
#include <stdio.h>
int main()
{
  int i,j,k,r=7,m,c;
  do
  {
    printf("1 Triangle\n");
    printf("2 Right Angled Triangle\n");
    printf("3 Inverted Triangle\n");
    scanf("%d",&c);
    switch(c)
    {
      case 1:
        m=r;
        for(i=1;i<=r;i++)
        {
          printf("\n");
          for(k=m;k>0;k--)
            printf(" ");
          m--;
          for(j=1;j<i*2;j++)
            printf("*");
        }
        printf("\n");
        break;
      case 2:
        for(i=1;i<=r;i++)
        {
          printf("\n");
          for(j=1;j<=i;j++)
            printf("*");
        }
        printf("\n");
        break;
      case 3:
        for(i=r;i>0;i--)
        {
          printf("\n");
          for(j=i;j>0;j--)
            printf("*");
        }
        printf("\n");
        break;
      case 4:
        exit(0);
      default:
        printf("Bye\n");
        break;
    }
  }while(1);
    return 0;
}

---------------OUTPUT----------------

1 Triangle
2 Right Angled Triangle
3 Inverted Triangle
1

       *
      ***
     *****
    *******
   *********
  ***********
 *************
1 Triangle
2 Right Angled Triangle
3 Inverted Triangle
2

*
**
***
****
*****
******
*******
1 Triangle
2 Right Angled Triangle
3 Inverted Triangle
3

*******
******
*****
****
***
**
*
1 Triangle
2 Right Angled Triangle
3 Inverted Triangle

