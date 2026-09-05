#include<stdio.h>
#include<stdlib.h>

int main(){
	system("chcp 65001");
	int sum=0;
	int score[5];
	
	for(int i=0;i<5;i++){
		printf("依次输入5个成绩：%d\n",i+1);
		scanf("%d",&score[i]);
	}
	
	
	
int max=score[0];
for(int j=0;j<5;j++){
	sum=sum+score[j];
	if(score[j]>max){
		max=score[j];
	}
}
	
printf("总分：%d\n", sum);	
printf("最大值为：%d\n",max);

	
getchar();
return 0;	
}