#include<stdio.h>
#include<string>
#include <stdlib.h>

int main(){
	system("chcp 65001");
	int age=18;
	float price=3.5;
	char letter='b';
	std::string banana="bananas";
	
	printf("我今年%d岁\n",age);
	printf("价格是%f\n",price);
	printf("字母是%c\n",letter);
	printf("我爱吃%s\n",banana.c_str());
	
	getchar();
	return 0;	
}