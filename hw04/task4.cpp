#include <iostream>
#include <cstddef> 

int hw04(const int* input_array, std::size_t elem_count) {
    
    if (!input_array || elem_count == 0) {
        return 0;
    }

    int* out_data = new int[elem_count]; 
    int sum = 0;                        

    for (std::size_t i = 0; i < elem_count; ++i) {
        if (input_array[i] < 0) {
            break; 
        }
        
        out_data[out_size++] = input_array[i];
        
        sum += input_array[i];
    }

    
    delete[] out_data;
    
    return sum;
}
int main() {
    int arr[] = {1, 2, 3, -1, 5};
    std::size_t size = sizeof(arr) / sizeof(arr[0]);

    int result = hw04(arr, size);
    std::cout << "Pozitif sayıların toplamı: " << result << std::endl;

    return 0;
}
