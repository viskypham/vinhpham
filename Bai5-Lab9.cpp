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
	printf("%d",a);
}
int main(){
	int a,b;
	printf("Nhap a = ");
	scanf("%d",&a);
	printf("Nhap b = ");
	scanf("%d",&b);
	printf("Uoc chung lon nhat cua a va b la: ");
	ucln(a,b);
}
