#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int seat[]={0,0,0,0,0,0,0,0,0,0};
	int cnt=0,seat_n,i;
	while(cnt<5){
		printf("enter the seat number : (0-9)\n");
		scanf(" %d",&seat_n);
		if(seat_n>-1 && seat_n<10){
			if(seat[seat_n]==0){
				printf("Your seat has been confirmed \n");
				cnt++;
				seat[seat_n]=1;
			}
			
			else{
				printf("this seat has already been booked!\n");
			}
		}
		else {
			printf("Invalid seat !!!\n");
		}
	}
	for(i=0;i<10;i++){
		if(seat[i]==1){
			printf("seat number :%d - has booked\n",i);
		}
		else if(seat[i]==0){
			printf("seat number :%d - has not booked\n",i);
		}
	}
	
	return 0;
}
