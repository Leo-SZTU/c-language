#include<stdio.h>
#include<stdlib.h>

long long fib(int n){

	if(n<=2){
		return 1;
	}
	long long a = 1;
    long long b = 1;
    long long c;
    
    for (int i = 3; i <= n; i++) {
        c = a + b;    
        a = b;   
        b = c;    
	}
	return b;
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
