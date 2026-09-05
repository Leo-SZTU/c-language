#include<stdio.h>
#include<stdlib.h>

int main(){
	system("chcp 65001");
	int a[5];
	int temp=0;
	
	printf("请输入五个数字:\n");
	scanf("%d %d %d %d %d",&a[0],&a[1],&a[2],&a[3],&a[4]);
	
	
	for(int i=0;i<4;i++){
		for(int j=0;j<4-i;j++){
			if(a[j]>a[j+1]){
				int temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;			}
		}
	}
	
	
printf("排序如下：%d %d %d %d %d\n",a[0],a[1],a[2],a[3],a[4]);
getchar();
return 0;
}