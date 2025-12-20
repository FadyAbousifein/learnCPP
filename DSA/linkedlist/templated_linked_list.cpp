#include <iostream>

template <typename type> 
struct Node {
    type data {}; 
    Node<type>* next {}; 
}; 
template <typename type> 
Node<type>* create_list() {
    std::cout << "How many nodes would you like: "; 
    int num_nodes {}; 
    std::cin >> num_nodes;
    std::cout << "Enter your first value: ";
    type value {}; 
    std::cin >> value; 

    Node<type>* head = new Node<type> {value}; 
    Node<type>* temp = head; 

    for (int i = 0; i < num_nodes - 1; i++) {
        std::cout << "Enter next value: "; 
        std::cin >> value; 
        temp->next = new Node<type> {value}; 
        temp = temp->next; 
    } return head; }

template <typename type> 
void print_list(const Node<type>* head) { while (head != nullptr) {
        std::cout << head->data << " -> "; 
        head = head->next; 
    } std::cout << std::endl;
}

template <typename type> 
void delete_node(Node<type>*& head, int position) {
    Node<type>* temp = head;  
    if (position == 1) {
        head = head->next; 
        delete temp; 
    } else {
        for (int i = 0; i < position - 2; i++) {
            temp = temp->next;  
        }
        Node<type>* to_delete = temp->next;
        temp->next = temp->next->next; 
        delete to_delete; 
    }
}

template <typename type> 
void insert_node(Node<type>*& head, Node<type>& node, int position) {
    Node<type>* temp = head;   
    if (position == 1) {
        node.next = head; 
        head = &node; 
    } else {
        for (int i = 0; i < position - 2; i++) {
            temp = temp->next;  
        }
        node.next = temp->next; 
        temp->next = &node; 
    }
}

int main (int argc, char *argv[]) {
    Node<int>* list_1 {create_list<int>()}; 
    Node<std::string>* list_2 {create_list<std::string>()};

    print_list(list_1); 
    print_list(list_2);

    Node<int> newNode {*(new Node<int>{99})}; 
    Node<int> newNode1 {*(new Node<int>{99})}; 


    insert_node(list_1, newNode,  1); 
    print_list(list_1); 
    insert_node(list_1, newNode1,  3); 
    print_list(list_1); 

    delete list_1; 
    delete list_2; 
    delete &newNode1; 
    delete &newNode; 

    return 0;
}
