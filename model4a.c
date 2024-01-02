#include<stdio.h>
int main()
{
	FILE*cfPtr;
	int i;
	char phoneNumber[20];
	float  localCharges,interCharges,roamingCharges,total;
	cfPtr=fopen("chargers.dat","w");
	if(cfPtr==NULL)
	{
		printf("File cannot be craeted ");
		return -1;
	}
	for(i=1;i<=3;i++)
	{
		printf("Enter the phone number :  ");
		scanf("%s",&phoneNumber);
		printf("Enter the local charges :  ");
		scanf("%f",&localCharges);
		printf("Enter the international charges :  ");
		scanf("%f",&interCharges);
		printf("Enter the roaming charges :  ");
		scanf("%f",&roamingCharges);
		fprintf(cfPtr,"%s %.2f %.2f %.2f \n",phoneNumber,localCharges,interCharges,roamingCharges);
	}
	/*fscanf(cfPtr,"%s %.2f %.2f %.2f \n",&phoneNumber,&localCharges,&interCharges,&roamingCharges);
	while(!feof,cfPtr)
	{
		total=localCharges+interCharges+roamingCharges;
		fprintf(cfPtr,"%s %.2f",phoneNumber,total);
		fscanf(cfPtr,"%s %.2f %.2f %.2f \n",&phoneNumber,&localCharges,&interCharges,&roamingCharges);	
	}*/
	fclose(cfPtr);
	return 0;	
	
}
