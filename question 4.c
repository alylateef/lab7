#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int products[]={001,002,001,001,004,004,004,004,004,003,003,004,003,003,002,002,002};
	int size=sizeof(products)/sizeof(products[0]);
	int i,p1=0,p2=0,p3=0,p4=0;
	for(i=0;i<size;i++){
		if(products[i]==001){
			p1++;
		}
		else if(products[i]==002){
			p2++;
		}
		else if(products[i]==003){
			p3++;
		}
		else if(products[i]==004){
			p4++;
		}
	}
	if(p1>p2&& p1>p3 && p1>p4)
		printf("001 : product is the most frequent product \n");
	else if(p2>p1&& p2>p3 && p2>p4)
		printf("002 : product is the most frequent product \n");
	else if(p3>p1&& p3>p2 && p3>p4)
		printf("003 : product is the most frequent product \n");
	else if(p4>p1&& p4>p2 && p4>p3)
		printf("004 : product is the most frequent product \n");
	
	
	return 0;
}
