// day22.md
// 1. Middle of a Linked List


#include <iostream>
#include<vector>


using namespace std;

struct Node {
    int data;
    Node* next;
};

Node* createNode(int value) {
    Node* newNode = new Node();   // dynamic memory in C++
    newNode->data = value;
    newNode->next = nullptr;
    return newNode;
}

Node* fill_Node(Node* head, const vector<int>& arr) {
    if (arr.empty()) return head;   // safety check

    if (head == nullptr) {
        head = createNode(arr[0]);
    }

    Node* current = head;

    for (int i = 1; i < arr.size(); i++) {
        current->next = createNode(arr[i]);
        current = current->next;
    }

    return head;
}


// slow and fast pointer apporoach
int middle_element(struct Node* head) {
    if (head == nullptr)
        return -1;   // or handle empty list as needed

    Node* slow = head;
    Node* fast = head;

    while (fast != nullptr && fast->next != nullptr) {
        slow = slow->next;
        fast = fast->next->next;
    }

    return slow->data;
}



int main(){
    struct Node* head;
    vector<int> arr;
    head = nullptr;
    int size , input;

    cout<<"Enter size: ";
    cin>>size;

    for(int i = 0 ; i < size ; i++){
        cin>>input;
        arr.push_back(input);
    }

    head = fill_Node(head, arr);

    int mid = middle_element(head);

    cout<<"Middle element in linked list is: "<<mid<<endl;

}