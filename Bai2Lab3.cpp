#include <stdio.h>
int main(){
	int n;
	printf("Nhap n = ");
	scanf("%d",&n);
	if(n>1 && n<9){
		if(n==8){
			printf("Day la chu nhat");
		}else{
			printf("Day la thu: %d",n);
		}
	}else{
		printf("Khong phai ngay trong tuan!");
	}
}
