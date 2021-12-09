#include <stdio.h>
int main(){
	int n, i = 0;
	printf("Nhap n = ");
	scanf("%d",&n);
	printf("Cac so chan nho hon n la: ");
	while(i < n){
		if(i %2 == 0){
			printf(" %d",i);
		}
		i++;
	}
}
