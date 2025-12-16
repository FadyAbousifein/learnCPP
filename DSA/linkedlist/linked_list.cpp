#include <iostream> 

struct node {
    int data; 
    node* next; 
}; 

node* create_list() {
    std::cout << "What size of list do you want: "; 
    int size {}; 
    std::cin >> size; 

    std::cout << "Enter your first value: "; 
    int value {}; 
    std::cin >> value; 
    size--; 

    node* head {new node {value, nullptr}};
    node* current = head; 
    for (int i = 0; i < size; i++) {
        std::cout << "Enter the next value: "; 
        std::cin >>  value; 
        current->next = new node {value, nullptr};
        current=current->next; 
    }
    return head;
}

void print_list(const node* head) {
    while(head != nullptr) {
        std::cout << head->data << " -> ";
        head = head->next; 
    } std::cout << std::endl;
}

int main (int argc, char *argv[]) {
    print_list(create_list());  
    return 0;
}
