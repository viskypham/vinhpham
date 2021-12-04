#include <stdio.h>
#include <math.h>

int main(){
	int n;
	int SoNghichDao=0;
	printf("So Nguyen Duong n:");
	scanf("%d",&n);
	if(n<0){ //Khong la so nguyen am
		printf("Nhap lai so nguyen duong!\n");
	}else{
		if(n<9999){ //Khong qua 5 chu so.
			SoNghichDao = SoNghichDao * 10 + n % 10; //Lay so cuoi 1
			n = n / 10;								 //Con 3 chu so
			SoNghichDao = SoNghichDao * 10 + n % 10; //Lay so cuoi 2
			n = n / 10;								 //Con 2 chu so
			SoNghichDao = SoNghichDao * 10 + n % 10; //Lay so cuoi 3
			n = n / 10;							     //Con 1 chu so
			SoNghichDao = SoNghichDao * 10 + n % 10; //Lay so cuoi 4
			printf("So Nghich Dao la: %d\n",SoNghichDao);
		}else{
			printf("Khong hop le!"); 
		}
		
	}
		

}
