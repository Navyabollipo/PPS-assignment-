#include <stdio.h>

int main() {
    float orderAmount, discount = 0, deliveryCharge = 0, finalAmount;
    int membershipType;
    printf("Enter order amount: Rs. ");
    scanf("%f", &orderAmount);
    printf("Enter membership type (1 for Premium, 0 for Regular): ");
    scanf("%d", &membershipType);
    if (orderAmount >= 500)
        deliveryCharge = 0;
    if (membershipType == 1)
        discount = orderAmount * 0.10;
    else
        discount = 0;
    else
        deliveryCharge = 50;
    discount = 0;
    finalAmount = orderAmount - discount + deliveryCharge;
    printf("\n--- Bill Details ---\n");
    printf("Order Amount: Rs. %.2f\n", orderAmount);
    printf("Discount: Rs. %.2f\n", discount);
    printf("Delivery Charge: Rs. %.2f\n", deliveryCharge);
    printf("Final Payable Amount: Rs. %.2f\n", finalAmount);
}
