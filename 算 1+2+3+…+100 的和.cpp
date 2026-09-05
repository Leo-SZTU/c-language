#include<stdio.h>
#include<stdlib.h>

int main(){
	system("chcp 65001");
	int sum=0;
	int banana=1;
	while(banana<=100){
		sum=sum+banana;
		banana=banana+1;
		}
printf("1到100相加为%d",sum);		
getchar();
return 0;
	
}