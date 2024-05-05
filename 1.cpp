#include <iostream>

int fib(int n) {
    if (n == 0) {
        return 0;
    } else if (n == 1) {
        return 1;
    }

    int prev = 0;
    int current = 1;
    int result;

    for (int i = 2; i <= n; ++i) {
        result = prev + current;
        prev = current;
        current = result;
    }

    return prev; 
}


int main () {
    std::cout<< "Hello World" << std::endl;
    int n;
    std:: cout << "n = ";
    std:: cin >> n;
    std:: cout << "Число Фибоначчи для n = " << n << ": "<< fib(n);
    return 0;
}
