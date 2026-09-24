#include <iostream>
#include <ostream>
int main() {
    // what is asked of us?
    /*
     * To make a profit, the prices of the items sold in a furniture store are
     * marked up by 80%. After marking up the prices, each item is put on sale
     * at a discount of 10%.
     * Design an algorithm to find the selling price of an
     * item sold at the furniture store. What information do you need to find
     * the selling price?
     */
    // so the main question is how i can find the selling price of an item.
    // the percentage is 80%, but its sold at a 10% discount.
    //
    // so the first percentage we have is 80%, we have to increase the price of
    // the product by 80% so first, we will try to get the users input into a
    // var and start from there
    double price; // we chose double for the sake of fractional multiplication
                  // its easier to handle and is more precise

    std::cout << "Enter price of furniture: $";
    std::cin >> price; // grabs the input

    std::cout << "\n$" << price << std::endl;

    // after getting the input, now we need a way to figure the acutal price of
    // the product.
    // we can do that by multiplying the product price with the percentage.
    // the percentage, as we discovered is 80%

    double percentage = 80.0 / 100.0; // 80%

    double result = price + (price * (percentage));

    // after this, we get the price increased by 80%, now there is
    // a discount on it, of 10%
    // that would be as follows

    percentage = 10.0 / 100.0; // overwriting the pervious value

    // subtract because a discount reduces the marked-up price
    double final = result - (result * (percentage));

    // explicit type cast. for the sake of consistency
    std::cout << "\n$" << (double) final << std::endl;

    return 0;
}
