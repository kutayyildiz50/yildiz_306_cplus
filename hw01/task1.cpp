#include <iostream>
#include <cmath>
#include <algorithm> 

bool isPrime(int num) {
    if (num < 2) return false; 
    for (int i = 2; i <= std::sqrt(num); ++i) { 
        if (num % i == 0) return false; 
    }
    return true;
}

int sumOfDigits(int num) {
    int sum = 0;
    while (num > 0) {
        sum += num % 10; 
        num /= 10;       
    }
    return sum;
}
int hw01(int start, int end) {
    
    if (start < 10  end < 10 || end > 99) {
        return -1; 
    }

    if (start > end) {
        std::swap(start, end); 
    }

    int totalSum = 0;


    for (int i = start; i <= end; ++i) {
        if (isPrime(i)) { 
            totalSum += sumOfDigits(i); 
        }
    }

    return totalSum;
}
int main() {
    
    std::cout << "hw01(2, 5): " << hw01(2, 5) << std::endl; 
    std::cout << "hw01(11, 15): " << hw01(11, 15) << std::endl;    
    std::cout << "hw01(2, 11): " << hw01(2, 11) << std::endl;      
    std::cout << "hw01(10, 40): " << hw01(10, 40) << std::endl; 
    std::cout << "hw01(40, 10): " << hw01(40, 10) << std::endl;   
    

    return 0;
}
