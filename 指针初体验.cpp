#include<stdio.h>
#include<stdlib.h>

int main(){
	system("chcp 65001");
	int x=10;
	int *p;
	p=&x;
	printf("x的值为%d\n",x);
	printf("*p的值为%d\n",*p);
	*p=20;
	printf("x的值被改为%d\n",x);
	printf("x的地址为：%p\n",(void*)&x);
	printf("p存的地址为%p\n",(void*)p);
	
getchar();
return 0;
	
}