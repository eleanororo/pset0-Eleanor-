#include <iostream>

int fibonacci (int n) {
    if (n==0) {
        return 0;
    }
    else if (n==1) {
        return 1;
    }
    else {
        return fibonacci(n-1) + fibonacci(n-2);
    }
}

int main () {
    int numberOne=5;
    int numberTwo=9;

    std::cout << "The" << numberOne << "th numbr of the Fibonacci sequence is " << fibonacci (numberOne)<< std::endl;
    std::cout << "The" << numberTwo << "th numbr of the Fibonacci sequence is " << fibonacci (numberTwo)<< std::endl;
}