#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int p_price[]={100,300,400,600,800,1000,200,150,300,100,110,500,2000,3400,450,190,10,1000,300,700,850,130,70};
	int len=sizeof(p_price)/sizeof(p_price[0]),i,j,budget,cnt=0;
	printf("enter your budget : \n");
	scanf(" %d",&budget);
	for(i=0;i<len;i++){
		for(j=0;j<len;j++){
			if(j==i) continue;
			else if(p_price[i]+p_price[j]==budget){
				printf("FOUND PRODUCT : %d and %d --- these two products are the sum of your budget \n ",p_price[i],p_price[j]);
				cnt++;
				}
		}
	}
	if(cnt==0){
		printf("Sorry! we dont have any products according to your budget");
	}
	
	return 0;
}
