#include <iostream>
int main() {
    /* Suppose that the cost of sending an international fax is calculated as
     * follows:
     * the service charge is $3.00, $0.20 per page for the first 10
     * pages, and $0.10 for each additional page.
     * Design an algorithm that asks the user to
     * enter the number of pages to be faxed. The algorithm then
     * uses the number of pages to be faxed to calculate the amount due
     */
    int noOfPages = 0;

    std::cout << "Enter No. of pages: ";
    std::cin >> noOfPages;

    double totalBill = 0;

    totalBill += 3.0; // adding 3$ as a onetime service fee

    // We count pages, and pages are numbered 1, 2, 3…,
    //  so i starts at 1
    // and represents the current page number.
    for (int i = 1; i <= noOfPages; i++) {
        if (i <= 10) {
            totalBill += 0.20; // per page for first 10 pages
        } else {
            totalBill += 0.10;
        }
    }
    std::cout << "Total Bill: $" << totalBill << std::endl;
    return 0;
}
