#include <iostream>

template <typename type> 
struct Node {
    type data{}; 
    Node<type>* next{}; 
};

template <typename type> 
Node<type>* create_list() {
    std::cout << "How many nodes do you want in your list: "; 
    int numNodes {}; 
    std::cin >> numNodes; 

    std::cout << "Enter your first value: "; 
    type value {}; 
    std::cin >> value; 
    
    Node<type>* head = new Node<type>; 
    Node<type>* temp = head; 
    
    temp->data = value; 

    for (int i = 1; i < numNodes; i++) {
        std::cout << "Enter next value: ";
        std::cin >> value; 
       
        temp->next = new Node<type>; 
        temp->next->data = value; 
        temp = temp->next; 
    }
    return head; 
}

template <typename type> 
void print_list(const Node<type>* head) {
    while (head != nullptr) {
        std::cout << head->data << " -> "; 
        head = head->next; 
    }std::cout << std::endl;
}

template <typename type> 
void delete_node(Node<type>* head, int position) {
    Node<type>* temp = head;
    Node<type>* to_delete = head; 
    if(position == 1) {
        temp = temp->next;
        delete to_delete; 
        print_list(temp); 
        return; 
    } 

    for (int i = 1; i < position - 1; i++) {
        head = head->next;  
    }
    to_delete = head->next; 
    head->next = head->next->next; 
    delete to_delete;  
    print_list(temp);  

}

template <typename type> 
void add_node(Node<type>* head, type new_node, int position) {
    Node<type>* temp = head; 

    for (int i = 1; i < position - 1; i++) {
        head = head->next;  
    }
    head->next = new Node<type>{new_node, head->next}; 
    print_list(temp); 
}


int main () {
    Node<int>* list_1 = create_list<int>(); 
    print_list(list_1); 
    Node<std::string>* list_2 = create_list<std::string>();
    print_list(list_2); 
    
    delete_node(list_1, 3); 
    delete_node(list_2, 1); 
    add_node(list_1,899,4); 

    return 0;
}
