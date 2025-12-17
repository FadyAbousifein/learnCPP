#include <cstdlib>
#include <iostream> 

struct Node {
    int data {};  
    Node* next {};  
}; 

Node* create_list() {
    std::cout << "How many nodes do you want in your list: "; 
    int nodes {};
    std::cin >> nodes; 

    Node* head {new Node}; 
    Node* temp {head}; 

    std::cout << "Enter first value: "; 
    int value {}; 
    std::cin >> value; 
    
    head->data = value; 

    for (int i = 0; i < nodes - 1; i++) {
        std::cout << "Enter next value: "; 
        std::cin >> value; 
        temp->next =  new Node; 
        temp->next->data = value; 
        temp = temp->next; 
    }

    return head; 
}

void print_list(const Node* head) {
    while (head != nullptr) {
        std::cout << head->data << " -> "; 
        head = head->next; 
    }std::cout << std::endl; 
}

void insert_node(Node* head, Node& node, int position) {
    for (int i = 0; i < position - 2; i++) {
        head = head->next;  
    } 
    node.next = head->next; 
    head->next = &node; 
}

// fix for position 1 and delete the actual node bypassed
void delete_node(Node* head, int position) {
    for(int i = 0; i < position - 2; i++) {
        head = head->next; 
    }
    head->next = head->next->next; 
}

int main (int argc, char *argv[]) {
    Node* head = create_list(); 
    print_list(head); 
    Node node {90}; 
    insert_node(head, node, 3);  
    print_list(head); 
    delete_node(head, 1); 
    print_list(head); 

    return 0;
}
