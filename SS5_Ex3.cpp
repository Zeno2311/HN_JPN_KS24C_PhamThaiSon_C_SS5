#include <stdio.h>

int main(){
	int n,sum;
	
	printf("Moi ban nhap so nguyen : ");
	scanf("%d",&n);
	
	for(int i=1;i<=n;i++){
		sum+=i; // tuong duong voi sum = sum + i
	}
	printf("Ket qua tinh tong tu 1 den %d bang %d ",n,sum);
	return 0;
}
