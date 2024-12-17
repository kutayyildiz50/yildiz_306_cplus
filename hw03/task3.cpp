
#include <cstring>
#include <iostream>

void hw03(char* str, const char* pattern) {
    
    if (!str || !pattern) {
        return;
    }
    
    if (*str == '\0' || *pattern == '\0') {
        return;
    }
    size_t pattern_length = std::strlen(pattern);
    char* start = str;
    
    while (*start != '\0') {
        char* current = start;
        const char* pat = pattern;

        while (*current != '\0' && *pat != '\0' && *current == *pat) {
            ++current;
            ++pat;
        }

        if (*pat == '\0') {
            std::memmove(start, current, std::strlen(current) + 1); 
            return;
        }

        ++start;
    }
}

int main() {
    char str1[] = "Hello_World";
    hw03(str1, "World");
    std::cout << str1 << std::endl; 

    char str2[] = "START_TEXT_END";
    hw03(str2, "TEXT");
    std::cout << str2 << std::endl; 

    char str3[] = "START_TEXT_END";
    hw03(str3, "BEGIN");
    std::cout << str3 << std::endl; 

    char str4[] = "";
    hw03(str4, "aabbcc");
    std::cout << str4 << std::endl; 

    char str5[] = "A";
    hw03(str5, "A");
    std::cout << str5 << std::endl; 

    return 0;
}
