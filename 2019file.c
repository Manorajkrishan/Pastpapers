#include<stdio.h>
int main()
{
	int n,n2;
	char name[20],name2[20];
	FILE*remo;
	remo=fopen("loyalty.dxt","a+");
	if(remo==NULL){
		printf("can't open the file'");
		return -1;
	}
	printf("enter the num1:");
	scanf("%d",&n);
	printf("enter the name:");
	scanf("%s",&name);
	
	fscanf(remo,"%d %s\n",&n2,&name2);
	int flag=0;
	while(!feof(remo)){
		if(n==n2){
		flag=1;
	}
	fscanf(remo,"%d %s\n",&n2,&name2);
	}
	if(flag==0){
		fprintf(remo,"%d %s",n,name);
	}
	fclose(remo);
	return 0;
}
