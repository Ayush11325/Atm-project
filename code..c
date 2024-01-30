#include <stdio.h>
#include <stdlib.h>

unsigned long amount=1000, deposit, withdraw;
int choice, pin, k;
char transaction ='y';

int main()
{
	while (pin != 1132)
	{
		printf("ENTER YOUR SECRET PIN NUMBER:");
		scanf("%d", &pin);
		if (pin != 1132)
			printf("PLEASE ENTER VALID PASSWORD\n");
	}
	do
	{
		printf("***Welcome to ATM Service*****\n");
		printf("1. Check Balance\n");
		printf("2. Withdraw Cash\n");
		printf("3. Deposit Cash\n");
		printf("4. Quit\n");
		printf("Enter your choice: ");
		scanf("%d", &choice);
		switch (choice)
		{
		case 1:
			printf("\n YOUR BALANCE IN Rs : %lu\n", amount);
			break;
		case 2:
			printf("\n ENTER THE AMOUNT TO WITHDRAW: ");
			scanf("%lu", &withdraw);
			if (withdraw % 100 != 0)
			{
				printf("\n PLEASE ENTER THE AMOUNT IN MULTIPLES OF 100\n");
			}
			else if (withdraw >(amount - 500))
			{
				printf("\n INSUFFICENT BALANCE\n");
			}
			else
			{
				amount = amount - withdraw;
				printf("\n PLEASE COLLECT CASH\n");
				printf(" YOUR CURRENT BALANCE IS: %lu\n", amount);
			}
			break;
		case 3:
			printf("\n ENTER THE AMOUNT TO DEPOSIT: ");
			scanf("%lu", &deposit);
			amount = amount + deposit;
			printf("YOUR BALANCE IS %lu\n", amount);
			break;
		case 4:
			printf("\n THANK U USING ATM\n");
			printf("MAKED BY AYUSH KUMAR\nBCA 'A'\nENDROLLEMENT NUMBER=LNCCBCA11027\n");
			break;
		default:
			printf("\n INVALID CHOICE\n");
		}
		printf("\n\n\n DO U WANT TO HAVE ANOTHER TRANSCATION?(y/n): ");
		scanf(" %c", &transaction);
	} while (transaction == 'y' || transaction == 'Y');
	return 0;
}

