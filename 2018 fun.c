#include<stdio.h>
#include<assert.h>
float caldiscount(int,float);
void testcaldiscount();
void diplaygift(float);
int main()
{
	int time ;
	float totAmount,dis,finaltot;
	printf("enter the time :");
	scanf("%d",&time);
	printf("enter the amount:");
	scanf("%f",&totAmount);
	dis=caldiscount(time,totAmount);
	printf("discount is:%.2f",dis);
	testcaldiscount();
	finaltot=totAmount-dis;
	 printf("ur total is :%.2f",finaltot);
     diplaygift(finaltot);
	
	return 0;
}
float caldiscount(int time,float totAmount)
{

	float dis;
   if(time>=16&&time<20){
   	if(totAmount>=5000){
   		dis=totAmount*10/100.00;
   		
	   }else if(totAmount>=2500 &&totAmount<5000){
	   	dis=totAmount*7/100.00;
	   }}
	else if(time>=20 &&time<=22){
		if(totAmount>=5000){
   		dis=totAmount*12/100.00;
   		
	   }else if(totAmount>=2500 &&totAmount<5000){
	   	dis=totAmount*9/100.00;
	   }
	   
	}   
   
	return dis;
}
void testcaldiscount()
{
	assert(caldiscount(21,2500.0)==225);
	assert(caldiscount(16,5500.0)==550);
	printf("caldiscount() unit passed");
}
void diplaygift(float finaltot)
{
	if(finaltot>=7000){
		printf("your gift is pack of 6 eggs");
	}else if(finaltot<7000&&finaltot>=5000){
		printf("ur gift is 1kg sugar pack");
	}else if(finaltot<5000&&finaltot>=3000){
		printf("ur gift is pack of milk");
	}
	
}

