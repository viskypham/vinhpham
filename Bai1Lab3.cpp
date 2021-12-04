#include <stdio.h>
#include <math.h>
int main(){
	float a=4000;
	float tien;
	printf("Gui tiet kiem $4,000 o Aptech \n");
	tien=a*8/100; //Lai nam 1
	a+=tien;
	tien=a*8/100; //Lai nam 2
	a+=tien;
	tien=a*8/100; //Lai nam 3
	a+=tien;
	tien=a*8/100; //Lai nam 4
	a+=tien;
	printf("Lai sau 4 nam gui tiet kiem la: %f",a);
}
