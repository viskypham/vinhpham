#include <stdio.h>
int ucln(int a, int b){
	if(a==0 || b==0){
		return a+b;
	}
	while(a!=b){
		if(a>b){
			a -= b;
		}else{
			b -= a;
		}
	}
	return a;
}
int bcnn(int a, int b){
	int s = ucln(a,b);
	int p;
	p = a*b / s;
	printf("%d",p);
}
int main(){
	int a,b;
	printf("Nhap a = ");
	scanf("%d",&a);
	printf("Nhap b = ");
	scanf("%d",&b);
	printf("Boi chung nho nhat cua a va b la: ");
	bcnn(a,b);
}
