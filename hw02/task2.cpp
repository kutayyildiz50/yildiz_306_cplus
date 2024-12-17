
#include <string>
#include <iostream>

std::string hw02(std::string str) {
    for (size_t i = 0; i < str.size(); ++i) {
        for (size_t j = i + 1; j < str.size(); ) {
            if (str[i] == str[j]) {
                str.erase(j, 1); 
            } else {
                ++j; 
            }
        }
    }
    return str;
}

int main() {
    
    std::cout << hw02("Hello") << std::endl;        
    std::cout << hw02("AABBCC") << std::endl;      
    std::cout << hw02("!HHWW02COMPLLETEE!") << std::endl; 
    return 0;
}