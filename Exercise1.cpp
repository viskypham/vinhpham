#include <stdio.h>
#include <math.h>
int main(){
	int n;
	float s=0;
	printf("Nhap n = ");
	scanf("%d",&n);
	if(n<1){
		printf("Error!");
		return 0;
	}
	for(int i=1; i<=n; i++){
		s += (float)1/i;
	}
	printf("S(%d) = %f",n,s);
}
