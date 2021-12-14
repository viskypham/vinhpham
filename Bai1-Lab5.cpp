#include <stdio.h>
int main(){
	int n;
	int S=0;
	do{
		printf("Nhap n = ");
		scanf("%d",&n);
	}while(n<=0);
	printf("Cac uoc cua n la: ");
	for(int i=1; i<=n ; i++){
		if(n%i==0){
			printf(" %d",i);
			S += i;
		}
	}
	printf("\nTong cac uoc cua n la: %d",S);
	
}

	
