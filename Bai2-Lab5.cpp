#include <stdio.h>
int main(){
	int a,b;
	printf("Nhap a = ");
	scanf("%d",&a);
	printf("Nhap b = ");
	scanf("%d",&b);
	
	if(a>=0 && b>=0){
		if(a==0 && b==0){
			printf("Khong ton tai UCLN, BCNN");
		}else if(a==0 || b==0){
			printf("Khong co BCNN!");
		}else{
			int bc =a*b;
			while(a!=b){
				if(a>b){
					a=a-b;
				}else{
					b=b-a;
				}
			}
			printf("UCLN = %d\n",a);
			printf("BCNN = %d",bc/a);
		}
	}else{
	}
	return 0;
}
