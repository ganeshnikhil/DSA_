// day24.md
// 2. Delete N nodes after M nodes of a linked list


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


Node* delte_n_m(Node* head, int n, int m) {
    if (head == nullptr || n == 0) {
        return head;
    }

    Node* curr = head;

    while (curr != nullptr) {

        // Step 1: Skip m-1 nodes
        for (int i = 1; i < m && curr != nullptr; i++) {
            curr = curr->next;
        }

        if (curr == nullptr) {
            break;
        }

        // Step 2: Delete next n nodes
        Node* temp = curr->next;
        for (int i = 0; i < n && temp != nullptr; i++) {
            Node* del = temp;
            temp = temp->next;
            delete del;
        }

        // Step 3: Connect remaining list
        curr->next = temp;

        // Move curr forward for next cycle
        curr = temp;
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

    head = fill_nodes(head , arr);

    print_nodes(head);

    head = delte_n_m(head , 1 , 2);

    print_nodes(head);
}