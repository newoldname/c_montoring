#include <stdio.h>

int main(){
	int a;
	printf("연도를 입력하시오");
	scanf("%d",&a);
	
	if(a%4 == 0 && (a%100 != 0 || a%400 == 0))	printf("1");
	else	printf("0");	
}
