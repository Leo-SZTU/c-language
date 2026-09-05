#include<stdio.h>
#include<stdlib.h>

int main(){
	system("chcp 65001");
	int sum=0;
	for(int i=1;i<=100;i++){
		sum=sum+i;
	}
	for(int j=1;j<=100;j++){
		if(j%7==0){
			printf("%d ", j);
		}
	}
	printf("1到100加起来是%d",sum);
	getchar();
	return 0;
	
}