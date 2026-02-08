// day25.md
// 2. Intersection Sorted Linked Lists

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


Node* intersection(Node* head1 , Node* head2){
    Node* intr_head = nullptr;
    Node* beg_head = nullptr;
    Node* first_head = head1;
    Node* second_head = head2;

    while(second_head != nullptr && first_head != nullptr){
        if(first_head->data == second_head->data){
            int value = first_head->data;
            if(intr_head == nullptr){
                intr_head = create_node(value);
                beg_head = intr_head;
            }
            else{
                intr_head->next = create_node(value);
                intr_head = intr_head->next;
            }
            first_head = first_head->next;
            second_head = second_head->next;
        }

        else if(first_head->data < second_head->data){
            first_head = first_head->next;
        }
        else{
            second_head = second_head->next;
        }
    }

    return beg_head;
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
    struct Node* head1 ;
    struct Node* head2;
    head1 = nullptr;
    head2 = nullptr;

    int size1 , size2 , input;
    vector<int> arr1 , arr2;



    cout<<"Enter size1: ";
    cin>>size1;

    for(int i = 0 ;i < size1 ; i++){
        cin>>input;
        arr1.push_back(input);
    }
    
    cout<<"Enter size2: ";
    cin>>size2;
    for(int i = 0 ;i < size2 ; i++){
        cin>>input;
        arr2.push_back(input);
    }

    head1 = fill_nodes(head1 , arr1);
    head2 = fill_nodes(head2 , arr2);

    print_nodes(head1);
    print_nodes(head2);

    Node* intr_head = intersection(head1 , head2);

    print_nodes(intr_head);
    return 0;
}