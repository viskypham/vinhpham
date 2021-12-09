#include <stdio.h>
int main(){
	int n;
	float S = 0, i = 1;
	printf("Nhap n = ");
	scanf("%d",&n);
	while(i <= n){
		S += 1/i;
		i++;
	}
	printf("S = %f",S);
}
