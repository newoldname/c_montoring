#include <stdio.h>

int main(){
	int arr[5] = {0};
	
	for(int j = 0;j<5;j++){
		printf("�迭�� %d��° �ε���:",j);
		scanf("%d",&arr[j]);		
	}
	
	int sub = 0;
	for(int j = 0;j<5;j++){
		sub+=arr[j];
	}
	
	printf("�Էµ� ��ü �迭: ");
	for(int j = 0;j<5;j++){
		printf("%d ",arr[j]);		
	}
	
	printf("\n���� ��� ���: %d",sub);
	
}
