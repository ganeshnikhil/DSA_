// day23.md
// 1. Kth from End of Linked List

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


Node* fill_nodes(Node *head , vector<int> arr){
    if (arr.empty()){
        return head;
    }
    if(head == nullptr){
        head = create_node(arr[0]);
    }
    Node *current = head;
    for(int i = 1 ; i < arr.size() ; i++){
        current->next = create_node(arr[i]);
        current = current->next;
    }

    return head;
}

int kth_elment(Node* head , int k){
    if(head ==nullptr){
        return -1;
    }

    Node* slow = head;
    Node* fast = head;
    for(int i = 0 ; i < k ; i++){
        if(fast == nullptr){
            return -1;
        }
        fast = fast->next;
    }
    while(fast != nullptr){
        slow = slow->next;
        fast = fast->next;
    }
    return slow->data;
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

    int size , input , k;
    vector<int> arr;
    cout<<"Enter size: ";
    cin>>size;

    cout<<"index of element from end you want: ";
    cin>>k;


    for(int i = 0 ;i < size ; i++){
        cin>>input;
        arr.push_back(input);
    }

    head = fill_nodes(head , arr);

    print_nodes(head);

    int ans = kth_elment(head , k);
    cout<<ans<<endl;
    return 0;
}