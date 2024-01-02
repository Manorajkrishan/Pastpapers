#include<stdio.h>
int main()
{
	float cost;
	int type,n;
	char size;
	
	

	printf("enter the pizza type :");
	scanf("%d",&type);
	switch(type){
		case 1:
			printf("choose the size :");
			scanf(" %c",&size);
			switch(size){
				case 'M':
					printf("number of pizza :");
					scanf("%d",&n);
					cost=975.00*n;
					printf("the total bill is : %.2f",cost);
					break;
				case 'L':
				    printf("number of pizza :");
					scanf("%d",&n);
					cost=1720.00*n;
					printf("the total bill is : %.2f",cost);
					break;
				default :
				    printf("invalid size");
		           					
			}
		case 2:
		        printf("choose the size :");
			    scanf(" %c",&size);
			switch(size){
			
				case 'M':
					printf("number of pizza :");
					scanf("%d",&n);
					cost=1000.00*n;
					printf("the total bill is : %.2f",cost);
					break;
				case 'L':
				    printf("number of pizza :");
					scanf("%d",&n);
					cost=1820.00*n;
					printf("the total bill is : %.2f",cost);
					break;
				default :
				    printf("invalid size");
				   
			}
				
		default :
			printf("invalid pizza type");}
	
	
	return 0;
}