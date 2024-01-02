#include<stdio.h>
int main()
{
	int day,room;
	char type,pay;
	float total,dis;
	printf("enter the room type:");
	scanf(" %c",&type);
	printf("enter the number of rooms:");
	scanf("%d",&room);
	printf("number of nights:");
	scanf("%d",&day);
	printf("enter the paying type:");
	scanf(" %c",&pay);
	if(type=='D'&&pay=='C'){
		printf("u are having a dis");
		total=31000.00*day*room*10/100.00;
		
	}else if(type=='D'&&pay=='M'){
		total=31000.00*day*room;
	}else if(type=='S'&&pay=='C'){
		total=35000.00*day*room*10/100.00;
	}else if(type=='S'&&pay=='M'){
		total=35000.00*day*room;
	}else if(type=='C'&&pay=='C'){
		total=50000.00*day*room*10/100.00;
	}else if(type=='C'&&pay=='M'){
		total=50000.00*day*room;
	}else if(type=='E'&&pay=='C'){
		total=75000.00*day*room*10/100.00;
	}else if(type=='E'&&pay=='M'){
		total=75000.00*day*room;
	}else if(type=='P'&&pay=='C'){
		total=100000.00*day*room*10/100.00;
	}else if(type=='P'&&pay=='M'){
		total=100000.00*day*room;
	}else{
		printf("invalid");
	}
	printf("total is%.2f",total);
	printf("\ndo u want to continue :");
	char m;
	scanf(" %c",&m);
	if(m=='Y'||m=='y'){
		return 0;
	}else if(m=='N'||m=='n'){
		return -1;
	}
	
	
}
