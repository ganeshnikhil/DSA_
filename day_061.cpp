// day24.md
// 1. Reverse a Linked List

#include<iostream>
#include<vector>

using namespace std;


struct Node{
    int data;
    Node* next;
};


Node* create_node(int value){
    Node* new_node = new Node();
    new_node->data = value;
    new_node->next = nullptr;
    return new_node;
}

Node* fill_nodes(Node* head , vector<int> arr){
    if(arr.empty()){
        return head;
    }

    if(head == nullptr){
        head = create_node(arr[0]);
    }

    Node* curr = head;

    for(int i = 1 ; i < arr.size();i++){
        curr->next = create_node(arr[i]);
        curr = curr->next;
    }
    return head;
}




Node* reverse_nodes(Node* head , vector<int> arr){
    if(head == nullptr){
        return head;
    }
    

    Node* prev = nullptr;
    Node* curr = head;
    Node* next = head->next;

    while(curr != nullptr ){
        next = curr->next;// 1️⃣ save future
        curr->next = prev; // 2️⃣ reverse link
        prev = curr; // 3️⃣ move prev
        curr = next; // 4️⃣ move curr
    }

    return prev;
}




Node* reverse_nodes(Node* head , vector<int> arr){
    if(head == nullptr){
        return head;
    }
    
    Node* prev = nullptr;
    Node* curr = head;

    while(curr != nullptr){
        Node* next = curr->next; // store current next in next so we dont loose the link
        curr->next = prev; // reverse the pointing direction 
        

        prev = curr;  // now current will be our previous
        curr = next; // 
    }
    
    return prev;
}

