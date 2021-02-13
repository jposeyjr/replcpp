#include <iostream>
#include <cmath> // for sqrt() function


int generateID()
{
    static int s_itemID{ 0 };
    return s_itemID++; // makes copy of s_itemID, increments the real s_itemID, then returns the value in the copy
}
int main() {
 std::cout << generateID() << "\n"; 
 std::cout << generateID() << "\n"; 
     double x{};
tryAgain: // this is a statement label
    std::cout << "Enter a non-negative number: "; 
    std::cin >> x;
 
    if (x < 0.0)
        goto tryAgain; // this is the goto statement
 
    std::cout << "The square root of " << x << " is " << sqrt(x) << '\n';
    return 0;

}