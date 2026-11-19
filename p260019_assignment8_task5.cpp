#include <stdio.h>
void show_balance(float *balance)
{
    printf("Balance: Rs %.2f\n",*balance);
}
void deposit(float *balance, float amount)
{
    if(amount<=0)
    {
        printf("Invalid amount.\n");
    }
    else
    {
        *balance=*balance+amount;
        printf("Deposited.\n");
    }
}

int withdraw(float *balance, float amount)
{
    if(amount>0&&*balance>=amount)
    {
        *balance=*balance-amount;
        return 1;
    }
    return 0;
}
int main()
{
    float balance = 5000.0,amount;
    int choice;
    do
    {
        printf("\n----- BANK ACCOUNT -----\n");
        printf("1. Balance\n");
        printf("2. Deposit\n");
        printf("3. Withdraw\n");
        printf("4. Exit\n");
        printf("Choice: ");
        scanf("%d", &choice);
        switch (choice)
        {
            case 1:
                show_balance(&balance);
                break;
            case 2:
                printf("Amount: ");
                scanf("%f", &amount);
                deposit(&balance, amount);
                break;
            case 3:
                printf("Amount: ");
                scanf("%f", &amount);
                if (withdraw(&balance, amount)==1)
                {
                    printf("Withdrawn.\n");
                }
                else
                {
                    printf("Insufficient balance.\n");
                }
                break;
            case 4:
                printf("Goodbye!\n");
                break;
            default:
                printf("Invalid choice.\n");
        }
    } while (choice!=4);
    return 0;
}