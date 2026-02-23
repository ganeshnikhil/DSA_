// day27.md
// 3. Remove every k'th node

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

Node* remove_n(Node* head , int k){
    if(head == nullptr){
        return head;
    }
    
    if(k <= 1){
        return nullptr;
    }


    Node* curr = head;
    int count = 1;

    while(curr!= nullptr){
        if((count+1) % k == 0){
            if(curr->next != nullptr){
                Node* temp = curr->next;
                curr->next = curr->next->next;
                delete temp;
            }
        }
        else{
            curr = curr->next;
        }
        count++;
    }
    return head;
}




int main(){
    struct Node* head ;
    head = nullptr;

    int size , input , k;
    vector<int> arr;
    cout<<"Enter size: ";
    cin>>size;

    for(int i = 0 ;i < size ; i++){
        cin>>input;
        arr.push_back(input);
    }

    cout<<"Delete at each : ";
    cin>>k;

    head = fill_nodes(head , arr);

    print_nodes(head);

    remove_n(head , k);

    print_nodes(head);
}