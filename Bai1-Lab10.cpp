#include <stdio.h>
#include <string.h>
int main(){
	char chuoi[100];
	printf("Nhap chuoi: ");
	scanf("%s",chuoi);
	int nguyenam=0, phuam=0, i=0;
	while(chuoi[i]!='\0'){
		if(chuoi[i]=='a'|| chuoi[i]=='e' || chuoi[i]=='u' || chuoi[i]=='o' || chuoi[i]=='i'){
			nguyenam++;
		}else{
			phuam++;
		}
		i++;
	}
	printf("So luong nguyen am trong chuoi la: %d\n",nguyenam);
	printf("So luong phu am trong chuoi la: %d\n",phuam);
}
