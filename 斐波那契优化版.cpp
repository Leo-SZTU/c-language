#include<stdio.h>
#include<stdlib.h>

long long memo[100];

long long fib(int n){
	if(n<=2){
		return 1;
	}	
	if(memo[n]!=0){
		return memo[n];
	}
	memo[n]=fib(n-1)+fib(n-2);
	return memo[n];
}
int main(){
	system("chcp 65001");
	int x=0;
	printf("输入要用斐波那契数列的数：\n");
	scanf("%d",&x);
	long long banana=fib(x);
	printf("结果为：%lld",banana);
	
getchar();
return 0;
}