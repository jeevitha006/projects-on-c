/* program to have a order from the customer using switch statement */
#include<stdio.h>
void main()
{
char name[30];
int order;
printf("Enter your name: ");
scanf("%s",&name);
printf("choose your item \n1.Pizza \n2.Berger \n3.Pasta \n4.Frenchfries \n5.Sandwich");
printf("\nEnter your order: ");
scanf("%d",&order);
switch(order)
{
case 1: printf("Pizza costs 239");
break;
case 2: printf("Berger costs 129");
break;
case 3: printf("Pasta costs 179");
break;
case 4: printf("Frenchfries costs 99");
break;
case 5: printf(" Sandwich costs 149");
break;
default:
printf("Invalid choice");
}
printf("\nHave a nice day");
}


 
