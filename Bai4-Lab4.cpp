#include <stdio.h>
int main(){
	int n, i = 2;
	printf("Nhap n = ");
	scanf("%d",&n);
	if(n>1){
		while(i<n){
			if(n%i==0){
				printf("n khong phai la so nguyen to!");
				return 0;
			}
			i++;
		}
		printf("n la so nguyen to!");
	}else{
		printf("n khong phai la so nguyen to!");	
	}
}
