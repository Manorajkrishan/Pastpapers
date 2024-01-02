#include<stdio.h>
#define size 5
#include<string.h>
struct cos{
	int accnum[size];
    char name[size];
	char type[size];
	float ammount[size];
}cus[size];
int main()
{
	int i;
	float wtotal,dtotal,max,min;
	char mname[50],inname[50];
	for(i=0;i<size;i++){
		printf("acount num:");
		scanf("%d",&cus[i].accnum[i]);
		printf("enter the name:");
		scanf("%s",&cus[i].name[i]);
		printf("transsaction type :");
		scanf(" %c",&cus[i].type[i]);
		printf("enter the amount:");
		scanf("%f",&cus[i].ammount[i]);
	}
	max=cus[0].ammount[0];
	min=cus[0].ammount[0];
	for(i=0;i<size;i++){
		if(cus[i].type[i]=='W'||cus[i].type[i]=='w'){
			wtotal=wtotal+cus[i].ammount[i];
			if(min>cus[i].ammount[i]){
			min=cus[i].ammount[i];
			strcpy(inname[50],cus.name);
		}
		}
		else if(cus[i].type[i]=='D'||cus[i].type[i]=='d'){
			dtotal=dtotal+cus[i].ammount[i];
			if(max<cus[i].ammount[i]){
			max=cus[i].ammount[i];
			strcpy(mname[50],cus.name);
		}
		}
		
	/*	if(max<cus[i].ammount[i]){
			max=cus[i].ammount[i];
			mname=cus[i].name[i];
		}
		if(min>cus[i].ammount[i]){
			min=cus[i].ammount[i];
			inname=cus[i].name[i];
		}*/
	}
	printf("the total widrowal ammount:%.2f",wtotal);
	printf("\nthe total diposit ammount:%.2f",dtotal);
	printf("\nthe max disposit cus:%s",mname);
	printf("\n min with %s",inname);
return 0;
}
