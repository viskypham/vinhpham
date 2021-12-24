#include <stdio.h>
int tinhtong(int n){
	int s=0;
	int sotachra;
	while(n!=0){
		sotachra = n%10;
		s += sotachra;
		n /= 10;
	}
	printf("%d",s);
}
	
int main(){
	int n;
	printf("Nhap n = ");
	scanf("%d",&n);
	printf("Tong cac chu so cua n la: ");
	tinhtong(n);
}
