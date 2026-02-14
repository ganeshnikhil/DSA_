// day27.md
// 1. Delete in a Doubly Linked List

#include<iostream>
#include<vector>

struct Node{
    Node* prev;
    int data;
    Node* next;
};

Node* create_node(int value){
    Node* newnode = new Node();
    newnode->prev = nullptr;
    newnode->data = value;
    newnode->next = nullptr;
    return newnode;
}


Node* fill_nodes(Node* head , vector<int> arr){
    if(arr.empty()){
        return head;
    }

    if(head == nullptr){
        head = create_node(arr[0]);
    }
    Node* curr = head;
    for(int i = 1 ; i < arr.size() ; i++){
        Node* newnode = create_node(arr[i]);
        curr->next = newnode;
        newnode->prev = curr;
        curr = newnode;
    }
    return head;
}


Node* delete_node(Node* head , int idx){
    if(head == nullptr){
        return nullptr;
    }

    Node* curr = head;
    if(idx == 1){
        Node* del = head;
        if(curr->next == nullptr){
            delete del;
            return nullptr;
        }

        curr = curr->next;
        curr->prev = nullptr;
        head = curr;
        delete del;
        return head;
    }

    int count = 1;
    while(curr != nullptr && count != idx){
        curr = curr->next;
        count += 1;
    }

    if(idx > count){
        return head;
    }
    
    if(curr != nullptr){
        Node* del = curr;
        if(curr->next != nullptr){
            curr->next->prev = curr->prev;
        }
        else{
            curr->prev->next = curr->next;
            curr->next->prev = curr->prev;
        }
        delete del;
    }
    return head;
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

    int size , input , idx;
    vector<int> arr;
    cout<<"Enter size: ";
    cin>>size;
    

    for(int i = 0 ;i < size ; i++){
        cin>>input;
        arr.push_back(input);
    }
    
    cout<<"Index at which you want delte: ";
    cin>>idx;
    
    head = fill_nodes(head , arr);

    print_nodes(head);

    head = delete_node(head , idx);

    print_nodes(head);
}