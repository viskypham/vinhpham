#include <stdio.h>
#include <math.h>
float dientich(int a, int b, int c){
	int p1=0;
	p1 = a + b + c;
	int p2=p1/2;
	float s=0;
	s = sqrt(p2*(p2-a)*(p2-b)*(p2-c));
	printf("%f",s);
}
int main(){
	int a,b,c;
	printf("Nhap a = ");
	scanf("%d",&a);
	printf("Nhap b = ");
	scanf("%d",&b);
	printf("Nhap c = ");
	scanf("%d",&c);
	printf("Dien tich tam gia la: ");
	dientich(a,b,c);
}
