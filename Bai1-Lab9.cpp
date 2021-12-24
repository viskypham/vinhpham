#include <stdio.h>
bool kiemtra(int n){
	int count=0;
	for(int i=2; i<n; i++){
		if(n%i==0){
			count++;
		}
	}
	if(count==1){
		return true;
	}else{
		return false;
	}
}
int snt(int n){
	int i=n+1;
	while(kiemtra(i)==false){
		i++;
	}
	printf("%d",i);
}
int main(){
	int n;
	printf("Nhap n = ");
	scanf("%d",&n);
	printf("So nguyen to tiep theo cua n la: ");
	snt(n);
}
