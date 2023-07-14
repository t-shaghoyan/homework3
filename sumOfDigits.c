#include<stdio.h>
int main(){
	int num=0;
	int result=0;
		
		printf("please enter the number");
		scanf(" %d",&num);
	
		while(num){
			result+=num%10;
			num = num/10;
		
			
		}
		printf("here is the result %d\n",result);
		


}
