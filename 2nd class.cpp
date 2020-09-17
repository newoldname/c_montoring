#include <stdio.h>

int main(){
	int arr[5] = {0};
	
	for(int j = 0;j<5;j++){
		printf("배열의 %d번째 인덱스:",j);
		scanf("%d",&arr[j]);		
	}
	
	int sub = 0;
	for(int j = 0;j<5;j++){
		sub+=arr[j];
	}
	
	printf("입력된 전체 배열: ");
	for(int j = 0;j<5;j++){
		printf("%d ",arr[j]);		
	}
	
	printf("\n덧셈 결과 출력: %d",sub);
	
}
