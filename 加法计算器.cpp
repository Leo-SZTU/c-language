#include<stdio.h>
#include<stdlib.h>

int main(){
	system("chcp 65001");
	
int inputa;
int inputb;

printf("请输入两个整数（空格隔开）：");
scanf("%d %d",&inputa,&inputb);
printf("加起来等于%d\n",inputa+inputb);

getchar();
return 0;	

}