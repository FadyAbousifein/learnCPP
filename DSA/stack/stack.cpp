#include <iostream> 

template <typename type> 
struct Node {
    type data {}; 
    Node<type>* next {}; 
}; 

template <typename type> 
void create_stack(Node<type>*& head, Node<type>* tail) {
    std::cout << "How many nodes would you like in your stack: "; 
    int num_nodes {}; 
    std::cin >> num_nodes; 

    std::cout << "Enter first value: "; 
    type value {}; 
    std::cin >> value;

    head = new Node<type> {value}; 
    tail = head; 

    for (int i {}; i < num_nodes - 1; i++) {
        std::cout << "Enter next value: "; 
        std::cin >> value; 
        tail->next = new Node<type> {value};
        tail = tail->next; 
    } 

}

template <typename type> 
void print_stack(Node<type>* head) {
    while(head) {
        std::cout << head->data << " -> "; 
        head = head->next; 
    } std::cout << std::endl; 
}

template <typename type> 
void push(Node<type>*& head,Node<type>& node) {
    node.next = head; 
    head = &node; 
}

template <typename type> 
void pop(Node<type>*& head) {
    Node<type>* to_delete = {head}; 
    head = head->next; 
    delete to_delete; 
}

template <typename type> 
type peek(Node<type>* head) {
    return head->data; 
}


int main (int argc, char *argv[]) {
    Node<int>* head_1 {}; 
    Node<int>* tail_1 {}; 

    create_stack(head_1, tail_1); 
    print_stack(head_1);
    
    Node<int>& new_node {*(new Node<int> {999999})}; 
    push(head_1, new_node);
    print_stack(head_1); 
    
    pop(head_1);
    print_stack(head_1);

    std::cout << peek(head_1); 

    return 0;
}
