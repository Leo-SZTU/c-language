#include<stdio.h>
#include<stdlib.h>

int jiecheng(int n){
	if(n<=1){
		return 1;
	}
	return n*jiecheng(n-1);
}

int main(){
	system("chcp 65001");
	int n=0;
	printf("输入要阶乘的数：\n");
	scanf("%d",&n);
	int banana=jiecheng(n);
	printf("结果为：%d\n",banana);
	
getchar();
return 0;	
	
}