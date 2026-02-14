// day27.md
// 2. Reverse a Doubly Linked List

#include<iostream>
#include<vector>

using namespace std;

struct Node{
    Node* prev;
    int data;
    Node* next;
};


Node* create_node(int value){
    Node* new_node = new Node();
    new_node->data = value;
    new_node->prev = nullptr;
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

    for(int i = 1 ; i < arr.size() ;i++){
        Node* newnode = create_node(arr[i]);
        curr->next = newnode;
        newnode->prev = curr;   // IMPORTANT LINE
        curr = newnode;
    }

    return head;
}


Node* reverse_link(Node* head){
    if(head == nullptr){
        return head;
    }

    if(head->next == nullptr){
        return head;
    }

    Node* prev = nullptr;
    Node* curr = head;

    while(curr != nullptr){
        Node* temp = curr->next;
        curr->next = prev;
        curr->prev = temp;
        prev = curr;
        curr = temp;
    }
    return prev;
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

    head = reverse_link(head);

    print_nodes(head);
}