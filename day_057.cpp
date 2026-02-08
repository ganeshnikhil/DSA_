// day22.md
//3. Print Linked List

#include<iostream>
#include<vector>

using namespace std;


struct Node{
    int data;
    Node* next;
};

Node* Create_Node(int value){
    Node* new_node = new Node();
    new_node->data = value;
    new_node->next = nullptr;
    return new_node;
}

Node* fill_node(Node *head , vector<int>& arr) {
    if (arr.empty()) return head;

    if (head == nullptr) {
        head = Create_Node(arr[0]);   // ❗ no Node* here
    }

    Node* curr = head;

    for (int i = 1; i < arr.size(); i++) {
        curr->next = Create_Node(arr[i]);
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

    head = fill_node(head , arr);

    print_nodes(head);
    return 0;
}