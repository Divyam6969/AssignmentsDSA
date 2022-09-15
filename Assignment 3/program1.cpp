//doubly linked list

#include<iostream>
using namespace std;
struct Node
{
    int data;
    struct Node* next;
    struct Node* prev;
};

void displayLL(struct Node* head)
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
    struct Node* head;
    struct Node* val1;
    struct Node* val2;
    struct Node* val3;
    struct Node* val4;
    struct Node* val5;
    struct Node* val6;
    
    head=(struct Node*)malloc(sizeof(struct Node));
    val1=(struct Node*)malloc(sizeof(struct Node));
    val2=(struct Node*)malloc(sizeof(struct Node));
    val3=(struct Node*)malloc(sizeof(struct Node));
    val4=(struct Node*)malloc(sizeof(struct Node));
    val5=(struct Node*)malloc(sizeof(struct Node));
    val6=(struct Node*)malloc(sizeof(struct Node));

    head->data=1;
    val1->data=2;
    val2->data=3;
    val3->data=4;
    val4->data=5;
    val5->data=6;
    val6->data=7;

    head->next=val1;
    val1->next=val2;
    val2->next=val3;
    val3->next=val4;
    val4->next=val5;
    val5->next=val6;
    val6->next=NULL;

    val6->prev=val5;
    val5->prev=val4;
    val4->prev=val3;
    val3->prev=val2;
    val2->prev=val1;
    val1->prev=head;
    head->prev=NULL;
    cout<<"Your linked list is"<<endl;
    displayLL(head);

    cout<<"1.Insertion of a node"<<endl<<"2.Deletion of a node"<<endl<<"3.Search a node"<<endl;


    return 0;
}