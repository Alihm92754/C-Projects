#include <stdio.h>

int main()
{
	int income;
	int tax;
	printf("Enter the income: ");
	fflush(stdout);
	scanf("%d",&income);

	if(income <= 9525){
		tax = 0;
		printf("The TAX Payable is $%d\n",tax);
	}
	else if((income >= 9526) && (income <= 38700)){
		tax = income*0.12;
		printf("The TAX Payable is $%d\n",tax);
	}
	else if((income >= 38701 ) && (income <= 82500)){
		tax = income*0.22;
		printf("The TAX Payable is $%d\n",tax);
	}
	else if(income > 82500){
		tax = (income*0.32)+(1000);
		printf("The TAX Payable is $%d\n",tax);
	}

	return 0;
}


