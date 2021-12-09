#include <stdio.h>
int main(){
	int n = 200, S = 0, i = 1;
	while(i%2==1 && i<=n){
		S += i;
		i += 2;
	}
	printf("S = %d",S);
}
