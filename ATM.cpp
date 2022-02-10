#include<stdio.h>
#include<windows.h>
#include<time.h>
/*
SHAGOR KUMAR DAS
GREEN UNIVERSITY OF BANGLADESH
EMAIL:shagorkumardas@gmail.com
*/
int main()
{
    system("color 3F");

    int pin=1234;
    int option,enteredpin,count=0,amount;
    float balance=500;
    int continuetransection=1;

    time_t now;
    time(&now);
    printf("\n");
    printf("\t\t\t\t\t\t\t %s",ctime(&now));
    printf("\t\t\t\t\t============ WELCOME TO DBBL ATM SYSTEM ============\n");
    while(pin!=enteredpin)
    {
        printf("\t\t\t\t\tEnter Your Pin: ");
        scanf("%d",&enteredpin);
        if(enteredpin!=pin)
        {

            Beep(610,800);
            printf("\t\t\t\t\t!!Invalid Pin!!\n");

        }
        count++;
        if(count==3 && pin !=enteredpin)
        {
            exit(0);
        }
    }
    while(continuetransection!=0)
    {
        printf("\n");
        printf("\t\t\t\t\t*****************************************\n ");
        printf("\t\t\t\t\t1.Withdraw\n ");
        printf("\t\t\t\t\t2.Deposit\n ");
        printf("\t\t\t\t\t3.Check Balance\n");
        printf("\t\t\t\t\t*****************************************\n");
        printf("\t\t\t\t\tEnter Your Choice : ");
        scanf("%d",&option);Beep(610,800);
        printf("\t\t\t\t\t*****************************************\n");
        printf("\t\t\t\t\t==========================================\n");
        switch(option)
        {
        case 1:
            while(amount%500!=0)
            {
                printf("\t\t\t\t\tEnter the amount: ");
                scanf("%d",&amount);
                if("amount%500!=0")
                {
                    printf("\n\t\t\t\t\t The amount should be multiple of 500\n");
                    Beep(610,800);

                }
                if(balance<amount)
                {
                    printf("\n\t\t\t\t\t Sorry !! Insufficient Balance\n");
                    Beep(610,800);
                    //amount=1;
                    break;

                }
                else
                {
                    balance =balance- amount;
                    printf("\n\t\t\t\t\t You have withdraw %d TK .Your new balance is %0.2f TK\n",amount,balance);
                    Beep(610,800);
                    //amount=1;
                    break;
                }
            }
        case 2:
            printf("\t\t\t\t\tPlease Enter The Amount : ");
            scanf("%d",&amount);
            balance +=amount;
            Beep(610,800);
            //amount=1;
            printf("\t\t\t\t\tYou have deposit %d TK. Your new balance is %0.2f TK\n",amount,balance);
            Beep(610,800);
            printf("\t\t\t\t\tThank You For Being With Us\n");
            break;

        case 3:
            printf("\t\t\t\t\tYou balance is  %0.2f TK \n",balance);
            Beep(610,800);
            break;
        default:
            printf("\t\t\t\t\t!! Invalid Input!!\n");
            Beep(610,800);

        }
    }
    printf("\t\t\t\t\t***********************************************************\n");
    printf("\t\t\t\t\tDo you wish to perform another transction ? 1[Yes] 0[No]\n");
    printf("\t\t\t\t\t***********************************************************\n");
    scanf("%d",&continuetransection);
}


