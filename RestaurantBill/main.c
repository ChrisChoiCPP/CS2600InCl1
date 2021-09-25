/*
For this assignment (Restaurant Bill) We will need to 
compute the tax and tip of a restaurant bill.
Some important details include:
    - the tax and tip are given by the user as a percentage.
    - This program will display:
        - Meal cost
        - Tax amount
        - Tip amount
        - Total cost of bill
    - The meal cost will be choosen randomly between these four:
        - Salad: $9.95
        - Soup: $4.55
        - Sandwich: $13.25
        - Pizza: $22.35

Steps:
1.) declare variables double tax and tip.
2.) get users input for tax and tip.
3.) create random number generator that generates a number 1 - 4 inclusive for
selecting random meal cost.
4.) find total cost
5.) display everything.
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int mealChoice();
double tipAmt(double meal);
double taxAmt(double meal);

int main() {
    double tax, tip;
    double mealCost;
    double totalCost;
    double taxAmount;
    double tipAmount;
    int mealItem;

    mealItem = mealChoice();

    if (mealItem == 0) {
        mealCost = 9.95;
    } else if(mealItem == 1) {
        mealCost = 4.55;
    } else if(mealItem == 2) {
        mealCost = 13.25;
    } else {
        mealCost = 22.35;
    }

    taxAmount = taxAmt(mealCost);
    tipAmount = tipAmt(mealCost);

    totalCost = mealCost + taxAmount + tipAmount;
    printf("Your total cost of the bill comes to: %lf", totalCost);
}

//Method that will be used to choose meal cost.
int mealChoice() {
    int randNum;
    time_t t;

    srand((unsigned) time(&t));
    randNum = rand() % 4;

    return randNum;
}

//gets tip amount
double tipAmt(double meal) {
    double tip;
    double tipTotal;
    
    printf("Enter a tip percentage: ");
    scanf("%lf", &tip);

    tipTotal = meal * (tip/100);
    
    return tipTotal;
}

//gets tax amount
double taxAmt(double meal) {
    double tax;
    double taxTotal;

    printf("Enter a tax percentage: ");
    scanf("%lf", &tax);

    taxTotal = meal * (tax/100);

    return taxTotal;
}