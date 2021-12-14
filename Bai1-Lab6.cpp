#include <stdio.h>
int main(){
	int n, i, S=0;
	printf("n = ");
	scanf("%d",&n);
	while(n!=0){
		i = n%10;
		S += i;
		n /= 10;
	}
	printf("S = %d",S);
}
