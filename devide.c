#include<stdio.h>
int main(){
	int n1 = 0;
	int n2 = 0;

	printf("please enter the first number");
	scanf(" %d",&n1);

	printf("please enter the second  number ");
	scanf(" %d",&n2);

	if(n1%n2 == 0){
		printf("the number 1 can devide in number 2\n");
	}else if(n2%n1==0){
		printf("the number 2 can devide in number 1\n");}
	else{
		printf("the operands cant devide each other\n");
	}
}
