#include<stdio.h>


int main(){
	int c;
	printf("Enter your choice:");
	scanf("%d",&c);
	switch(c){
		case 1:
			printf("\nFood Item-Pizza\n\nPrice-Rs239");
			break;
		case 2:
			printf("\nFood Item-Burger\n\nPrice-Rs129");
			break;
		case 3:
			printf("\nFood Item-Pasta\n\nPrice-Rs179");
			break;
		case 4:
			printf("\nFood Item-French Fries\n\nPrice-Rs99");
			break;
		case 5:
			printf("\nFood Item-Sandwich\n\nPrice-Rs149");
			break;
		default:
			printf("You have given a wrong option!\nPlease enter numbers from 1 - 5.");
	}
	return 0;
}
