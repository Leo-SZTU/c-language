#include<stdio.h>
#include<stdlib.h>

int jiecheng(int n){
	int result=1;
	for(int i=1;i<=n;i++){
		result=result*i;
	}
	return result;
}

int main(){
	system("chcp 65001");
	printf("输入一个数，获取它的阶乘：\n");
	int x=0;
	scanf("%d",&x);
	int banana=jiecheng(x);
	printf("所得数为：%d\n",banana);
	
	getchar();
	return 0;
}