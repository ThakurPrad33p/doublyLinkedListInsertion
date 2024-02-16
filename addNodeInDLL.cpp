#include<iostream>
using namespace std;

class Node{
    public:
    int data; 
    Node* prev;
    Node* next;
    Node(int value){
        data = value;
        prev = NULL;
        next = NULL;

    }
};

int main(){
    Node* head = NULL;
    int arr[] = {1,2,3,4,5};
    for(int i=0; i<5; i++){
        if(head){
            Node* temp = new Node(arr[i]);
            temp->next = head;
            head->prev = temp;
            head = temp;
        }
        else{
            head = new Node(arr[i]);

        }
    }

    Node *print;
    print= head;
    while(print){
        cout<<print->data<<" ";
        print=print->next;
    }
}