#include <stdio.h>
int chuvi(int a, int b, int c){
	int s = 0;
	s = a + b + c;
	printf("%d",s);
}
int main(){
	int a,b,c;
	printf("Nhap a = ");
	scanf("%d",&a);
	printf("Nhap b = ");
	scanf("%d",&b);
	printf("Nhap c = ");
	scanf("%d",&c);
	printf("Chu vi cua tam giac la: ");
	chuvi(a,b,c);
}
