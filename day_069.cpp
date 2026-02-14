// day26.md
// 3. Sort a linked list of 0s, 1s and 2s

#include<iostream>
#include<vector>
#include <unordered_map>


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
    for(int i = 1 ; i < arr.size() ; i++){
        curr->next = create_node(arr[i]);
        curr = curr->next;
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

Node* sort_nodes(Node* head){
    if(head == nullptr){
        return head;
    }

    Node *zeroHead = create_node(-1), *zeroTail = zeroHead;
    Node *oneHead  = create_node(-1), *oneTail  = oneHead;
    Node *twoHead  = create_node(-1), *twoTail  = twoHead;
    
    Node* curr = head;

    while(curr != nullptr){
        if(curr->data == 0){
            zeroTail->next = curr;
            zeroTail = curr;
        }

        else if(curr->data == 1){
            oneTail->next = curr;
            oneTail = curr;
        }
        else{
            twoTail->next = curr;
            twoTail = curr;
        }
        curr = curr->next;
    }
    
    zeroTail->next = (oneHead->next) ? oneHead->next : twoHead->next;
    oneTail->next = twoHead->next;
    twoTail->next = nullptr;

    return zeroHead->next;
}


