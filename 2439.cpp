#include <stdio.h>

int main(){
	int a;
	printf("�� ������ �Է��Ͻÿ�");
	scanf("%d",&a);
	
	for(int j = 1;j<=a;j++){
		int space = 1, star = 1;
		while(space <= a-j){
			printf(" ");
			space++;
		}
		while(star<=j){
			printf("*");
			star++;
		}
		printf("\n");		
	}
}
