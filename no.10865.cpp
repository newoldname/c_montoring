#include<stdio.h>

int out(int a, int b){
	printf("%d\n",a+b);
	printf("%d\n",a-b);	
	printf("%d\n",a*b);
	printf("%d\n",a/b);
	printf("%d\n",a%b);
}

int main(){
	int a, b;
	scanf("%d %d",&a,&b);
	out(a,b);	
}
