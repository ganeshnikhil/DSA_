// day26.md
// 2. Union of Two Linked Lists

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


Node* MakeUnion(Node* head1, Node* head2) {

    unordered_set<int> s;

    // Insert elements of first list
    while (head1 != nullptr) {
        s.insert(head1->data);
        head1 = head1->next;
    }

    // Insert elements of second list
    while (head2 != nullptr) {
        s.insert(head2->data);
        head2 = head2->next;
    }

    Node* unionHead = nullptr;
    Node* tail = nullptr;

    // Create linked list from set
    for (int value : s) {
        Node* newNode = create_node(value);

        if (unionHead == nullptr) {
            unionHead = newNode;
            tail = newNode;
        } else {
            tail->next = newNode;
            tail = tail->next;
        }
    }

    return unionHead;
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

    Node* unioHead = MakeUnion(head1 , head2)

    print_nodes(unioHead);
    return 0;
}

