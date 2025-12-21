#include <iostream> 

template <typename type> 
struct DynamicArray {
    type* data; 
    int size {}; 
    int capacity {5}; 
}; 

template <typename type> 
void create_dynamic_array(DynamicArray<type>*& head) {
    head =  new DynamicArray<type> {}; 
    head->data = new type[head->capacity]; 
}

template <typename type> 
void push_back(DynamicArray<type>* head, type value) {
    if (head->capacity == head->size) {
        head->capacity *=2; 
        head->data[head->size] = value; 
        head->size++; 
    } else {
        head->data[head->size] = value; 
        head->size++;
    }
}

template <typename type> 
void print_dynamic_array(DynamicArray<type>* head) {
    for (int i = 0; i < head->size; i++) {
        std::cout << head->data[i] << " -> ";  
    } std::cout << std::endl;
}

int main (int argc, char *argv[]) {
   
    DynamicArray<int>* head; 
    create_dynamic_array(head);

    push_back(head, 4); 
    push_back(head, 5); 
    push_back(head, 6);

    print_dynamic_array(head); 


    return 0;
}
