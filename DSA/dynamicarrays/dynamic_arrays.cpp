#include <iostream> 

template <typename type> 
struct Vector {
    type* data {}; 
    std::size_t size {}; 
    std::size_t capacity {2}; 
}; 

template <typename type> 
void push_back(Vector<type>& vector, type item) {
    if (vector.size == vector.capacity) {
        vector.capacity *= 2; 
        type* old_data {vector.data}; 
        vector.data = new type[vector.capacity]; 
        for (std::size_t i {}; i < vector.size; i++) {
            vector.data[i] = old_data[i];  
        }
        vector.data[vector.size++] = item; 
        delete[] old_data;
    } else if (!vector.data) {
        vector.data = new type[vector.capacity];
        vector.data[vector.size++] = item; 
    } else {
        vector.data[vector.size++] = item; 
    }
}

template <typename type> 
void print_vector(Vector<type> vector) {
    for (std::size_t i {}; i < vector.size; i++) {
        std::cout << vector.data[i] << " -> ";  
    } std::cout << std::endl; 
}

// onbviously add edge cases this was done just a quick implementation
template <typename type> 
void pop_vector(Vector<type>& vector) {
    vector.size--;  
}

int main (int argc, char *argv[]) {
    Vector<int> vec1 {};
    push_back(vec1, 900);
    push_back(vec1, 900); 
    push_back(vec1, 900); 
    print_vector(vec1); 
    pop_vector(vec1); 
    print_vector(vec1); 

    return 0;
}
