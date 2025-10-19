#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	srand(time(NULL));
	int i,num,cnt=0;int list[10];
	printf("helloo\n");
	for (i=0;i<10;i++){
		int random=(rand() % 20) +1;
		list[i]=random;
	}
	printf("enter the number u want to search \n");
	scanf(" %d",&num);
	for(i=0;i<10;i++){
		if(num==list[i]){
			printf("%d has found at the index of %d",num,i);
			cnt++;
			break;
		}
	}
	if(cnt<1){
			printf("%d is not in the list ",num);
		}
	return 0;
}
