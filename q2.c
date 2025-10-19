#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int p1q=50,p2q=10,p3q=20,p4q=8;
int main(int argc, char *argv[]) {
	char name[20];int cnic;int pc,pamt;float t_bill=0,discount;
	printf("enter your name here : \n");
	scanf(" %s",&name);
	printf("enter your CNIC number here : \n");
	scanf(" %d",&cnic);
//	printf("name : %s",name);
	while(1){
	
	printf("product 001 - stock: %d \n",p1q);
	printf("product 002 - stock: %d \n",p2q);
	printf("product 003 - stock: %d \n",p3q);
	printf("product 004 - stock: %d \n",p4q);
	printf("Enter the product code and amount you want to purchase \n");
	printf("press 0 to exit-move to bill \n");
	scanf("%d %d",&pc,&pamt);
	if(pc==0 && pamt==0) break ;
	if(pc==001){
		if(pamt>p1q){
			printf("product is out of stock!\n");
		}
		else {
		t_bill=pamt*100 + t_bill;
		p1q-=pamt;
		}
		
	}
	else if(pc==002){
		if(pamt>p2q){
			printf("product is out of stock!\n");
		}
		else {
		t_bill=pamt*200 + t_bill;
		p2q-=pamt;}
		
	}
	else if(pc==003){
		if(pamt>p3q){
			printf("product is out of stock!\n");
		}
		else {
		t_bill=pamt*300 + t_bill;
		p3q-=pamt;}
	}
	else if(pc==004){
		if(pamt>p4q){
			printf("product is out of stock!\n");
		}
		else {
		t_bill=pamt*150 + t_bill;
		p4q-=pamt;}
	}
		system("cls");
	printf("your current bill : %.3f\n",t_bill);
	}
	int dis;
	printf("enter the discount coupen if u have any (press 0 if no)\n");
	scanf(" %d",&dis);
	if(dis==1234){
		t_bill=t_bill*0.80;
		printf("your total bill : %.2f",t_bill);
	}
	printf("\t\t\tAcount details\t\t\t");
	printf("name : %s",name);
	printf("CNIC : %d",cnic);
	printf("your total bill : %.2f",t_bill);
	
	
	return 0;
}
