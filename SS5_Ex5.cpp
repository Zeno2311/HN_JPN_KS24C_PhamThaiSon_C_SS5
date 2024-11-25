#include <stdio.h>

int main(){
	int bcc,tich;
	
	for(bcc=1;bcc<10;bcc++){
		printf("Bang cuu chuong %d\n",bcc);
		for(int i=1;i<=10;i++){
			tich = bcc*i;
			printf("%d x %d = %d\n",bcc,i,tich);
		}
	}
	return 0;
}
