#include <cstddef>
#include <iostream> 

template <typename type> 
struct Node {
    type data {}; 
    Node<type>* next {}; 
}; 

template <typename type> 
void enqueue(Node<type>*& tail, Node<type>& node) {
    tail->next = &node; 
    tail = tail->next; 
} template <typename type> 
void dequeue(Node<type>*& head) {
    Node<type>* to_delete = head; 
    head = head->next; 
    delete to_delete; 
}

template <typename type> 
void create_queue(Node<type>*& head, Node<type>*& tail) {
    std::cout << "How many items would you like in your queue: "; 
    int num_nodes {}; 
    std::cin >> num_nodes; 

    std::cout << "Enter first value: "; 
    type value {}; 
    std::cin >> value; 

    head = new Node<type> {value}; 
    tail = head; 
    
    for (std::size_t i {}; i < num_nodes - 1; i++) {
        std::cout << "Enter next value: "; 
        std::cin >> value; 
        tail->next = new Node<type> {value}; 
        tail = tail->next;  
    }
}

template <typename type> 
void print_queue(Node<type>* head) {
    while (head) {
        std::cout << head->data << " -> ";
        head = head->next; 
    } std::cout << std::endl; 
}

int main (int argc, char *argv[]) {
    Node<int>* head_1 {}; 
    Node<int>* tail_1 {};

    create_queue(head_1,tail_1); 
    print_queue(head_1); 
    
    Node<int>* node {new Node<int> {9999}}; 
    enqueue(tail_1, *node);
    print_queue(head_1); 
    
    dequeue(head_1);
    print_queue(head_1); 

    delete &node; 
    return 0;
}
