#include <stdio.h>
void reverseArray(int ary[], int n){
	for(int i=0; i<n/2; i++){
	    int daonguoc=ary[i];
	    ary[i]=ary[n-i-1];
	    ary[n-i-1]=daonguoc;
	}
	printf("\nMang dao nguoc la: ");
	for(int i=0; i<n; i++){
		printf("%d ",ary[i]);
	}
	
}
void xuatmang(int ary[], int length){
	for(int i=0; i<length; i++){
		printf("%d ",ary[i]);
	}
}
int main(){
	int n;
	printf("Nhap kich thuoc mang: ");
	scanf("%d",&n);
	int ary[n];
	for(int i=0; i<n; i++){
		printf("ary[%d] = ",i);
		scanf("%d",&ary[i]);
	}
	printf("Mang vua nhap la: ");
	xuatmang(ary,n);
	reverseArray(ary,n);
}
