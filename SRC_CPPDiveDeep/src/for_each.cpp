#include <iostream>
#include <vector>
#include <algorithm>
#include <functional>
 
void printSquare(int x) {
    std::cout << "called :" << x << std::endl;
    std::cout << x * x << std::endl;
}
 
int for_eachCheck() {
    std::vector<int> numbers = {1, 2, 3, 4, 5};

    std::function <void(int)> funcprintSquare = printSquare;
 
    // Using std::for_each to print squares of each element
    std::for_each(numbers.begin(), numbers.end(), printSquare);
    std::for_each(numbers.begin(), numbers.end(), funcprintSquare);

    std::for_each(numbers.begin(), numbers.end(), [](int x) { 
        std::cout << "called:" << x << std::endl;
        std::cout << x * x << std::endl; });
 
    return 0;
}