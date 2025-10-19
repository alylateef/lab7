#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int sheet1[]={1,2,3,4,5,6,7,8,9,10,11,12,13};
	int sheet2[]={51,52,53,54,55,56,57,58,59,60,61};
	int new_sheet[50]={};
	int i,j=0,len1=sizeof(sheet1)/sizeof(sheet1[0]),len2=sizeof(sheet2)/sizeof(sheet2[0]);
	for(i=0;i<len1;i++){
		new_sheet[j]=sheet1[i];
		j++;
	}	
	for(i=0;i<(len2);i++){
		new_sheet[j]=sheet2[i];
		j++;
	}
	for(i=0;i<(len1+len2);i++){
		printf(" %d \n",new_sheet[i]);
	}
	return 0;
}
