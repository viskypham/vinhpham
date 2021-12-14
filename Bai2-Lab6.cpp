#include <stdio.h>
int main(){
	int n, S=1;
	printf("n = ");
	scanf("%d",&n);
	if(n<0){
		printf("Khong hop le!");
	}else{
		for(int i=1; i<=n; i++){
		S *= i;
		}
		printf("n! = %d",S);
	}
	
}
