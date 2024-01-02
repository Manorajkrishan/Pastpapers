#include<stdio.h>
#include<string.h>
//#define 
int main()
{
	int i,rate[3][4],j;
	float max;
	int xmax;
	for(i=0;i<3;i++){
		for(j=0;j<4;j++){
			scanf("%d",&rate[i][j]);
			}
	}
	
	for(i=0;i<3;i++){
		for(j=0;j<4;j++){
			printf("%d",rate[i][j]);
			}
			printf("\n");
	}
	for(i=0;i<3;i++){
		printf("movie num%d :",i+1);
		printf("\nratings:");
		for(j=0;j<4;j++){
			printf("%d\t",rate[i][j]);
			}
			printf("\n");
	}
	for(i=0;i<3;i++){
		int total=0;
		printf("movie %d :",i+1);
		for(j=0;j<4;j++){
			
			total=total+rate[i][j];
			
			}
			float avg;
			max=avg;
			
			 avg=total/4.0;
			if(max<avg){
				max=avg;
				 xmax=i+1;
			}
			printf("%.2f",avg);
			printf("\n");
	}
	printf("max avg %.2f:",max);
	printf("\nhigh movie avg is%d",xmax);
	
	return 0;
	
}
