#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *prev;
    Node *next;

    Node(int value)
    {
        data = value;
        prev = NULL;
        next = NULL;
    }
};

Node *createDll(int arr[], int index, int size, Node *curr)
{
    if (index == size)
    {
        curr->prev = NULL;
        return curr;
    }

    Node *temp = new Node(arr[index]);
    if (curr)
    {
        temp->next = curr;
        curr->prev = temp;
    }
    else{
        temp->next = curr;
    }
    return createDll(arr,index+1,size,temp);
}

int main()
{
    Node *head = NULL;
    int arr[] = {2, 4, 1, 8, 5};

    head = createDll(arr, 0, 5, NULL);

    //deletion from end
    Node* curr = head;
    while(curr->next){
        curr = curr->next;
    }

    curr->prev->next = NULL;
    delete curr;



    Node *print;
    print= head;
    while(print){
        cout<<print->data<<" ";
        print=print->next;
    }
}