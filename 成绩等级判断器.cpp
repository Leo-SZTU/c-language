#include<stdio.h>
#include<stdlib.h>

int main(){
	system("chcp 65001");
int score;
printf("输入你的成绩：\n");
scanf("%d",&score);

if(score>=90){printf("你的成绩很优秀");}
else if(score>=80){printf("你的成绩是良好的");}
else if(score>=60){printf("你的成绩是及格的");}
else{printf("你的成绩是不及格的");}
getchar();
return 0;

}