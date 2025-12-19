#include <iostream>
#include <string> 
template <typename type> 
struct Node {
    type data {}; 
    Node<type>* next {}; 
}; 

template <typename type> 
Node<type>* create_list() {
    std::cout << "How many nodes do you want: "; 
    int num_nodes {}; 
    std::cin >> num_nodes; 

    Node<type>* head = new Node<type>; 
    Node<type>* temp = head; 

    std::cout << "Enter the first value: "; 
    type value {}; 
    std::cin >> value; 

    temp->data = value; 

    for (int i = 1; i < num_nodes; i++) {
        std::cout << "Enter next value: "; 
        std::cin >> value;
        
        temp->next = new Node<type> {value}; 
        temp=temp->next; 
    }
    return head; 
}

template <typename type> 
void print_list(const Node<type>* head) {
   while (head != nullptr) {
        std::cout << head->data << " -> ";  
        head = head->next; 
   } std::cout << std::endl;
}

template <typename type> 
void add_node(Node<type>* head, type data, int position) {
    Node<type>* temp = head;  
    if (position == 1) {
        head = new Node<type> {data, head};
        print_list(head); 
        return; 
    }

    for (int i = 1; i < position - 1; i++) {
        head= head->next;  
    }
    head->next = new Node<type> {data, head->next}; 
    print_list(temp); 
    return; 

}

template <typename type> 
void delete_node(Node<type>* head, int position) {
    Node<type>* temp = head; 
    Node<type>* to_delete = head; 
    if (position == 1) {
        head = head->next; 
        delete temp; 
        print_list(head); 
        return; 
    }

    for (int i = 1; i < position - 1; i++) {
        head= head->next;  
    }
    to_delete = head->next; 
    head->next = head->next->next;
    delete to_delete;
    print_list(temp); 
}

//  temp ->[]-> [] -> [] -> [delete] -> [] -> null
//                   h ^

int main () {
    Node<int>* list_1 = create_list<int>(); 
    Node<std::string>* list_2 = create_list<std::string>();
    print_list(list_1);
    print_list(list_2);

    add_node(list_1, 99, 4); 
    add_node(list_2, static_cast<std::string>("Hi"), 1); 
    
    delete_node(list_2, 1); 
    
    return 0;
}
