// day25.md
// 3. Find the Sum of Last N Nodes


// 1->9->0
// 0->2->5
// --------
// 2->1->5

//0->9>1
//5->2->1
//5->1->2


//   4 5 
// 3 4 5
// 3 9  0

// 3 4 5
//   4 5
// 7 9 0

//5->4->3
//5->4
//0 9 3

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





Node* reverse_link(Node* head){
    Node* curr = head;
    Node* prev = nullptr;

    while(curr != nullptr){
        Node* temp = curr->next;
        curr->next = prev;
        prev = curr;
        curr = temp;
    }
    return prev;
}

Node* removeLeadingZeros(Node* head) {
    // Skip leading zeros
    while (head != nullptr && head->data == 0) {
        head = head->next;
    }

    // If all elements were zero, return a single zero node
    if (head == nullptr) {
        return create_node(0);
    }

    return head;
}


Node* add_list(Node* head1 , Node* head2){
    // reverse the both head so easy to move and add in linked list.
    Node* head1_rev = reverse_link(head1);
    Node* head2_rev = reverse_link(head2);
    // intialize the head that will store the solution
    Node* sum_head = nullptr;
    Node* beg_sum_head = nullptr;
    // it will store the carry digit;
    int carry = 0;
    int sum = 0;
    // any of head reaches at the nullptr break the loop
    while(head1_rev != nullptr || head2_rev != nullptr){
        sum = 0;

        if(head1_rev != nullptr){
            sum += head1_rev->data;
        }

        if(head2_rev != nullptr){
            sum += head2_rev->data;
        }

        sum += carry;
        carry = 0; // reset carry

        if(sum >= 10){
            carry = sum / 10;
            sum = sum % 10;
        }

        if(sum_head == nullptr){
            sum_head = create_node(sum);
            beg_sum_head = sum_head;
        }
        else{
            sum_head->next = create_node(sum);
            sum_head = sum_head->next;
        }

        if(head1_rev != nullptr){
            head1_rev = head1_rev->next;
        }

        if(head2_rev != nullptr){
            head2_rev = head2_rev->next;
        }
    }

    if(carry > 0){
        if(sum_head == nullptr){
            sum_head = create_node(carry);
            beg_sum_head = sum_head;
        } else {
            sum_head->next = create_node(carry);
        }
    }

    Node* final = reverse_link(beg_sum_head);
    return removeLeadingZeros(final);
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

    Node* sol_head = add_list(head1 , head2);

    cout<<"sum is equal : "<<endl;
    print_nodes(sol_head);
    return 0;
}