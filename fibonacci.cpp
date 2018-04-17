#include <iostream>
#include <time.h>

int fib(int n){
    if (n <= 1) return n;
    return fib(n - 1) + fib(n - 2);
}

int main(){
    int n;
    std::cin >> n;
    clock_t start = clock();
    std::cout << fib(n) << std::endl;
    clock_t end = clock();
    std::cout << "time = " << (double)(end - start) << std::endl; 
}