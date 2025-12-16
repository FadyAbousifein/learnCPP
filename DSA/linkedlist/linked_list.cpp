#include <filesystem>
#include <iostream> 

template <typename type> 
struct node {
    type data; 
    node* next; 
};

template <typename type> 
node<type>* create_linkedList() {
    std::cout << "How many nodes do you want: "; 
    int num_node {}; 
    std::cin >> num_node;
    std::cout << "Enter your first value: "; 
    type f_value {}; 
    std::cin >> f_value; 
    
    node<type>* head  = new node<type> {f_value, nullptr}; 
    for (int i = 0; i < num_node; i++) {
        std::cout << "Enter next value: "; 
        std::cin >> f_value; 
        head->next = new node<type> {f_value, nullptr}; 
    }
    return head; 
}

template <typename type> 
void print_list(node<type>* head) {
    while (head) {
        std::cout << head->data << " -> "; 
        head = head->next; 
    }
}


int main (int argc, char *argv[]) {
    print_list(create_linkedList<int>()); 
    return 0;
}
