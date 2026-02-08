// day24.md
// 3. Delete in a Singly Linked List



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
    if(arr.empty()) {
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

Node* delete_x(Node* head , int idx){
    if(head == nullptr){
        return head;
    }

    Node* curr = head;
    int count = 1;



    if(idx == 1){
        Node* del = curr;
        head = curr->next;
        delete del;
        return head;
    }

    while(curr != nullptr && count != (idx-1)){
        curr = curr->next;
        count++;
    }

    if(curr == nullptr){
        return head;
    }
    
    if(count == (idx-1)){
        if(curr->next != nullptr){
            Node* del = curr->next; 
            curr->next = del->next;
            delete del;
        }
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

    cout<<"Enter 1-based index: ";
    cin>>idx;

    for(int i = 0 ;i < size ; i++){
        cin>>input;
        arr.push_back(input);
    }

    head = fill_nodes(head , arr);

    print_nodes(head);

    head = delete_x(head , idx);

    print_nodes(head);
}