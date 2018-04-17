#include <iostream>
#include <time.h>
#define MAX_N 40

int memo[MAX_N + 1];

int fib(int n){
    if (n <= 1) return n;
    if (memo[n] != 0) return memo[n];
    return memo[n] = fib(n - 1) + fib(n - 2);
}

int main(){
    int n;
    std::cin >> n;
    clock_t start = clock();
    if(n > MAX_N){
        std::cout << "Please enter a number less than 40\n";
        exit(0);
    }
    std::cout << fib(n) << std::endl;
    clock_t end = clock();
    std::cout << "time = " << (double)(end - start) << std::endl;
}