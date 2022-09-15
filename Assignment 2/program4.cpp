#include<iostream>
#include<stdlib.h>
using namespace std;

struct Node
{
    int data;
    struct Node* next;
};

struct Node* ReverseLL(struct Node* head)
{
    struct Node * current = head;
    struct Node* previous = NULL;
    while(current!=(NULL))
    {
        struct Node* temp = current->next;
        current->next=previous;
        previous= current;
        current=temp;

    }
    return previous;
}

void printLL(struct Node* head)
{
    struct Node* ptr = head;
    while(ptr!=NULL)
    {
        cout<<ptr->data<<" ";
        ptr=ptr->next;
    }
}

int main()
{
    struct Node* head = (struct Node*)malloc(sizeof(struct Node));
    struct Node* val1 = (struct Node*)malloc(sizeof(struct Node));
    struct Node* val2 = (struct Node*)malloc(sizeof(struct Node));
    struct Node* val3 = (struct Node*)malloc(sizeof(struct Node));
    struct Node* val4 = (struct Node*)malloc(sizeof(struct Node));

    head->data=1;
    val1->data=2;
    val2->data=3;
    val3->data=4;
    val4->data=5;


    head->next=val1;
    val1->next=val2;
    val2->next=val3;
    val3->next=val4;
    val4->next=NULL;

    printLL(head);
    cout<<endl;
    head=ReverseLL(head);
    cout<<"Reversed linked list is"<<endl;

    printLL(head);
    return 0;
}