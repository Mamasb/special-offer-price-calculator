#include <stdio.h>

/**
 * calculate_special_offer_price - Calculate the special offer price
 * @cost_price: The cost price of the item
 * @profit_margin: The profit margin (in percentage)
 * @discount_rate: The discount rate for the special offer (in percentage)
 * 
 * Return: The special offer price
 */
float calculate_special_offer_price(float cost_price, float profit_margin, float discount_rate) {
  
    float selling_price = cost_price * (1 + profit_margin / 100);

  
    float special_offer_price = selling_price * (1 - discount_rate / 100);

    return special_offer_price;
}

int main() {
    float cost_price;
    float profit_margin;
    float discount_rate;
    float special_offer_price;

    printf("Enter the cost price of the item: ");
    scanf("%f", &cost_price);

    printf("Enter the profit margin (in percentage): ");
    scanf("%f", &profit_margin);

    printf("Enter the discount rate for the special offer (in percentage): ");
    scanf("%f", &discount_rate);

    special_offer_price = calculate_special_offer_price(cost_price, profit_margin, discount_rate);

    printf("The special offer price is: %.2f\n", special_offer_price);

    return 0;
}

