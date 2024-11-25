#include <stdio.h>

int main(){
	int bcc,tich;
	
	printf("Moi ban nhap bang cua chuong muon tim kiem : ");
	scanf("%d",&bcc);
	
	for(int i=1;i<=10;i++){
			tich = bcc*i;
			printf("%d x %d = %d\n",bcc,i,tich);
	}
	return 0;
}
