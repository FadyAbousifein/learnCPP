#include <iostream>

template <typename type>
struct Node {
    type data {}; 
    Node<type>* next {}; 
}; 

template <typename type> 
Node<type>* create_list() {
    std::cout << "Enter number of nodes: ";
    int num_nodes {}; 
    std::cin >> num_nodes; 

    std::cout << "Enter first value: "; 
    type value {}; 
    std::cin >> value; 

    Node<type>* head = new Node<type> {value};
    Node<type>* temp = head; 

    for (int i = 1; i < num_nodes; i++) {
        std::cout << "Enter next value: "; 
        std::cin >> value; 
        temp->next = new Node<type> {value}; 
        temp = temp->next; 
    }
    return head; 
}

template <typename type> 
void add_node(Node<type>*& head, Node<type>& node, int position) {
    if (position == 1) {
        node.next = head->next;
        head = &node; 
    }

    Node<type>* temp = head; 
    for (int i = 1; i < position - 1; i++) {
        temp = temp->next; 
    }
    node.next = temp->next; 
    temp->next = &node; 
    
}

template <typename type> 
void print_list(Node<type>* head) {
    while (head != nullptr) {
        std::cout << head->data << " -> "; 
        head = head->next; 
    } std::cout << std::endl; 
}

int main () {
    Node<int>* list_1 {create_list<int>()};
    Node<std::string>* list_2 {create_list<std::string>()};
    print_list(list_1); 
    print_list(list_2); 

    return 0;
}
