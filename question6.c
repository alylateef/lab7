#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int pro_ids[]={1,2,3,4,2,1,2,3,4,5,6,7,8,8,9,5,4,2,2,3,4,5,5,6,6,7,8,8,3,2,3,4,5,6,6,6,6,2,2,3,4,1,6,7,8,4};
	int new_ids[50];int i,d_c,j;
	printf("enter the defective product code : \n ");
	scanf(" %d",&d_c);
	for(i=0,j=0;i<(sizeof(pro_ids)/sizeof(pro_ids[0]));i++){
		if(pro_ids[i]!=d_c){
			new_ids[j]=pro_ids[i];
			j++;
		}
		else continue;
	}
	for(i=0;i<j;i++){
		printf(" %d\n",new_ids[i]);
	}
	return 0;
}
