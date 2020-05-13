#include <stdio.h>
void main()
{
    int choice;
    printf("  Name of item\tCost\n1.Pizza      \tRs 239\n2.Burger      \tRs 129\n3.Pasta       \tRs 179\n4.French Fries\tRs 99\n5.Sandwitch   \tRs 149");
    printf("\nselect the food you want");
    scanf("%d",&choice);
    switch(choice)
    {
        case 1:
            printf("your order is \nFood item-Pizza\nPrice-Rs 239\n");
            break;
        case 2:
            printf("your order is \nFood item-Burger\nPrice-Rs 129\n");
            break;
        case 3:
            printf("your order is \nFood item-Pasta\nPrice-Rs 179\n");
            break;
        case 4:
            printf("your order is \nFood item-French Fries\nPrice-Rs 99\n");
            break;
        case 5:
            printf("your order is \nFood item-Sandwitch\nPrice-Rs 149\n");
            break;
        default :
            printf("you have selected wrong option");

    }
}
