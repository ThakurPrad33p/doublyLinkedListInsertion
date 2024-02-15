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
    Node* head = NULL,*tail = head;
    int arr[] = {14,53,23,63,35,28};
    int n = sizeof(arr)/sizeof(arr[0]);
    // cout<<n;
    for(int i=0; i<n; i++){
        if(head == NULL){
            head = new Node(arr[i]);
            tail = head;

        }
        else{
            Node* temp = new Node(arr[i]);
            tail->next = temp;
            temp->prev = tail;
            tail = temp;
        }
    }


    Node* trav = head;
    while(trav){
        cout<<trav->data<<" ";
        trav = trav->next;
    }
}