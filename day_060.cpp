// day23.md
// 3. Delete Middle of Linked List


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

Node* midd_delete(Node* head) {
    // Case 1: empty list
    if (head == nullptr) {
        return nullptr;
    }

    // Case 2: single node
    if (head->next == nullptr) {
        delete head;
        return nullptr;
    }

    Node* slow = head;
    Node* fast = head;
    Node* prev = nullptr;

    while (fast != nullptr && fast->next != nullptr) {
        prev = slow;
        slow = slow->next;
        fast = fast->next->next;
    }

    // slow is at middle
    prev->next = slow->next;
    delete slow;

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
    midd_delete(head);
    print_nodes(head);
}