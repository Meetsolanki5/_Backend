#include<stdio.h>
#include<conio.h>

int main() {
    int choice, quantity;
    int moreOrders;
    float totalBill = 0.0;

    printf("*************** Welcome to Food Billing System ***************\n");

    do {
        printf("\nMenu:\n");
        printf("1. Pizza      - 150 Rupees\n");
        printf("2. Burger     - 100 Rupees\n");
        printf("3. Sandwich   - 80 Rupees\n");
        printf("4. French Fries - 70 Rupees\n");
        printf("5. Cold Drink - 50 Rupees\n");

        printf("\nEnter your choice (1-5): ");
        scanf("%d", &choice);

        printf("Enter quantity Of Food: ");
        scanf("%d", &quantity);

        switch(choice) {
            case 1:
                totalBill += 150 * quantity;
                break;
            case 2:
                totalBill += 100 * quantity;
                break;
            case 3:
                totalBill += 80 * quantity;
                break;
            case 4:
                totalBill += 70 * quantity;
                break;
            case 5:
                totalBill += 50 * quantity;
                break;
            default:
                printf("Invalid choice. Please select again.\n");
                continue;
        }
        printf("Do you want to order more?(Yes=1 || No=2): ");
        scanf(" %d", &moreOrders);

    } while (moreOrders != 2);

    printf("\n*************** Final Bill ***************\n");
    printf("Total Amount to Pay: Rupees%.2f\n", totalBill);
    printf("Thank you for your order!\n");

    return 0;
}
