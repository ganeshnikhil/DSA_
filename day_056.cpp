// day22.md
// 2. Frequency in a Linked List

#include<iostream>
#include<vector>

using namespace std;

struct Node{
    int data;
    Node *next;
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


int freq_node(Node* head , int key){
    if(head == nullptr){
        return -1;
    }
    int freq = 0;
    Node* current = head;
    while(current != NULL){
        if(current->data == key){
            freq++;
        }
        current = current->next;
    }
    return freq;
}


int main(){
    struct Node* head;
    vector<int> arr;
    int input , size , key;
    head = nullptr;

    cout<<"Enter size: ";
    cin>>size;

    for(int i = 0 ; i < size ; i++){
        cin>>input;
        arr.push_back(input);
    }

    cout<<"Key to search:";
    cin>>key;
    head = fill_Node(head , arr);

    int frequency = freq_node(head , key);
    cout<<"frequency of "<<key<<" is "<<frequency<<endl;


}