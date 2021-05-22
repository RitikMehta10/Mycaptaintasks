#include <stdio.h>
int main()

{
    //Display the menu
    printf("Pick a choice: \n1.Cheese Burger\n2.Farmhouse Pizza\n3.Oreo Milkshake\n4.Chocolatechip Icecream\n");
    //Read the customer choice.
    int pick;
    scanf("%d",&pick);

    //Display their choice.
    switch(pick)
    {
        case 1:
        printf("Your choice-Cheese Burger\n");
        printf("Price-Rs 80\n");
        break;
        case 2:
        printf("Your choice-Farmhouse Pizza\n");
        printf("Price-Rs 300\n");
        break;
        case 3:
        printf("Your choice-Oreo Milkshake\n");
        printf("Price-Rs 70\n");
        break;
        case 4:
        printf("Your choice-Chocolatechip Icecream\n");
        printf("Price-Rs 100\n");
        break;
        default:printf("Invalid Choice\n");
    }
    
}