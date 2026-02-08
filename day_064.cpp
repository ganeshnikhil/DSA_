// day25.md
// 1. Palindrome Linked List

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

bool is_palindrome(Node* head){
    if(head == nullptr){
        return true;
    }

    if(head->next == nullptr){
        return true;
    }
    
    // find the middle of linked list 
    Node* slow = head;
    Node* fast = head;

    while(fast != nullptr && fast->next != nullptr){        
        slow = slow->next;
        fast = fast->next->next;
    }

    // reverse the mid to end of linked list 
    Node* curr = slow;
    Node* prev = nullptr;

    while(curr != nullptr){
        Node* temp = curr->next;
        curr->next = prev;
        prev = curr;
        curr = temp;
    }

    // compare from begining of linked list to the end of linked list
    Node* new_head = prev;
    Node* prev_head = head;

    while(new_head != nullptr){
        if(new_head -> data != prev_head->data){
            return false;
        }
        new_head = new_head->next;
        prev_head = prev_head->next;
    }
    return true;
}


void print_nodes(Node *head){
    if(head == nullptr){
        return;
    }

    Node* iterator = head;

    while(iterator != nullptr){
        cout<<iterator->data<<"->";
        iterator = iterator->next;
    }
    cout<<"NULL"<<endl;
    return;
}


int main(){
    struct Node* head ;
    head = nullptr;

    int size , input;
    vector<int> arr;
    cout<<"Enter size: ";
    cin>>size;

    for(int i = 0 ;i < size ; i++){
        cin>>input;
        arr.push_back(input);
    }

    head = fill_nodes(head , arr);

    print_nodes(head);

    bool flag = is_palindrome(head);

    if(flag){
        cout<<"Yes the provided linked list is palindrome"<<endl;
    }
    else{
        cout<<"provided linked list is not a palindrome"<<endl;
    }
}