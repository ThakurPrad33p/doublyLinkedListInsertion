#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* prev,*next;
    Node(int value){
        data = value;
        prev = NULL;
        next = NULL;
    }
};

int main(){
    Node * head = NULL;
    int pos = 4;
    int arr[] = {1,2,3,4,5,6,7};

    for(int i = 0; i<7; i++){
        if(head){
            Node* curr = head;
            while(curr->next){
                curr = curr->next;
            }
            Node* temp = new Node(arr[i]);
            curr->next = temp;
            temp->prev = curr;
        }
        else{
            head = new Node(arr[i]);
        }
    }

    Node *addNode = new Node(8);

    Node * trav = head;
    while(--pos){
        trav = trav->next;
    }
    addNode->prev = trav;
    addNode->next = trav->next;
    trav->next = addNode;
    trav->next->prev = trav;


    Node* print = head;
    while(print){
        cout<<print->data<<" ";
        print = print->next;
    }


    
}