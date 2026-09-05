#include<stdlib.h>
#include<stdio.h>
#include<time.h>

int main(){
	system("chcp 65001");
	srand(time(NULL));
	int secret=rand()%100+1;

int guess;
int count=0;

while(1){
	printf("猜一个 1~100 的数:");
	scanf("%d",&guess);
	
	if(guess>secret){printf("太大了\n");}
	else if(guess<secret){printf("太小了\n");}
	else{printf("答对了\n");
	break;
	}
}



getchar();
return 0;
}