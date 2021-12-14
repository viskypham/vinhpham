#include <stdio.h>
int main(){
	int n, S=0, j=0;
	printf("n = ");
	scanf("%d",&n);
	if(n<0){
		printf("Khong hop le!");
	}else{
		while(n>0){
		j = n%10;
		S = S*10 + j;
		n = n/10;
		}
		printf("So nghich dao cua n la: %d",S);
	}
	
	
}
