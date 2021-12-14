#include <stdio.h>
int main(){
	int n;
	printf("n = ");
	scanf("%d",&n);
	int x1=1, x2=1, x3=2;
	for(int i=4;i<=n;i++){
		x1=x2;
		x2=x3;
		x3=x1+x2;
	}
	printf("n dung vi tri thu %d trong day Fibonacy",x3);
}
