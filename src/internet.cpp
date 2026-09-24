#include <iostream>
#include <ostream>
int main() {
    // what is asked of us?

    /* Jason typically uses the Internet to buy various items.
     * If the total cost of the items ordered,
     * at one time, is $200 or more, then the shipping and
     * handling is free; otherwise, the shipping and handling is $10 per item.
     * Design an algorithm that prompts Jason to enter the number of items
     * ordered and the price of each item.
     * The algorithm then outputs the total billing amount.
     */

    // starting off, getting the user input.
    int noOfItems = 0;
    std::cout << "Enter No. of items: ";
    std::cin >> noOfItems;

    double itemsTotalPrice = 0;

    // now, that we know how many items there are. we have to ask Jason,
    // the price of each item. so we will loop through to ask about each item.
    for (int i = 1; i <= noOfItems; i++) {
        double currentItemPrice = 0.0;

        std::cout << "Price for Item No." << i << ": $";
        std::cin >> currentItemPrice;

        itemsTotalPrice += currentItemPrice;
    }

    double shippingPrice;
    if (itemsTotalPrice < 200) {
        // a $10 fine is applied to all items
        shippingPrice = 10 * noOfItems;
    } else {
        shippingPrice = 0;
    }
    // a final result var, where total bill will be saved
    double result = itemsTotalPrice + shippingPrice;

    std::cout << "Final Bill: $" << result << std::endl;
    return 0;
}
