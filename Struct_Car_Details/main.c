#include<stdio.h>
#include<stdint.h>

struct carModel{
	uint32_t carNumber;
	uint32_t carPrice;
	uint32_t carMaxSpeed;
	float carWeight;
};

int main()
{
	struct carModel carBMW = {9668,15000,220,1220};
	struct carModel carFord = {.carWeight=1800,.carNumber=1234,.carMaxSpeed=200,.carPrice=5000};

	printf("Details of the BMW \n");
	printf("Car Number= %u \n",carBMW.carNumber);
	printf("Car Price= %u \n",carBMW.carPrice);
	printf("Car Maximum Speed= %u \n",carBMW.carMaxSpeed);
	printf("Car Weight= %f \n",carBMW.carWeight);

	printf("\n");

	printf("Details of the Ford \n");
	printf("Car Number= %u \n",carFord.carNumber);
	printf("Car Price= %u \n",carFord.carPrice);
	printf("Car Maximum Speed= %u \n",carFord.carMaxSpeed);
	printf("Car Weight= %f \n",carFord.carWeight);

	return 0;

}

