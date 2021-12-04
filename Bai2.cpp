#include <stdio.h>
#include <math.h>

int main(){
	int n;
	int SoNghichDao=0;
	printf("So Nguyen Duong n:");
	scanf(" %d",&n);
	if(n<0){ //Khong la so nguyen am
		printf("Nhap lai so nguyen duong!\n");
	}else{
		if(n<9999){ 
			SoNghichDao = SoNghichDao * 10 + n % 10; 
			n = n / 10;							
		}
		if(n>0){
			SoNghichDao = SoNghichDao * 10 + n % 10;
			n = n / 10;
		}
		if(n>0){
			SoNghichDao = SoNghichDao * 10 + n % 10;
			n = n / 10;
		}
		if(n>0){
			SoNghichDao = SoNghichDao * 10 + n % 10;
		}
		printf("So Nghich Dao la: %d",SoNghichDao);
	}
		

}
