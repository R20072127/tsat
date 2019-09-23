#include<stdio.h>
#include<stdlib.h>


int main(void){
	int a,b,c,sum;//宣告整數變數 a,b,c,sum; 
	a = 1;//a=指定數字 
	b = 2;//b=指定數字 
	c = 3;//c=指定數字 
	sum=a+b+c;//sum等於a+b+c 
	printf("%d\n",sum);//輸出(取代整數 ,/n換行) 
	printf("%d",sum);//輸出(取代整數) sum是廢物 
	return 0;//(回傳值) 
}
