#include<stdio.h>
#include<stdlib.h>

int fib(int n){
	if(n<=2){
		return 1;
	}
	return fib(n-1)+fib(n-2);
}

int main(){
	system("chcp 65001");
	int x=0;
	printf("输入要用斐波那契数列的数：\n");
	scanf("%d",&x);
	int banana=fib(x);
	printf("结果为：%d",banana);
	
getchar();
return 0;
	
}