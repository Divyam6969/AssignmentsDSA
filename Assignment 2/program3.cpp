#include<iostream>
#include<stdlib.h>
using namespace std;
struct Node
{
    int data;
    struct Node* next;
};

void printLL(struct Node* head)
{
    struct Node* ptr = head;
    while(ptr!=NULL)
    {
        cout<<ptr->data<<" ";
        ptr=ptr->next;
    }
    cout<<endl;
}
int findMiddle(struct Node* head)
{
    int count = 0;
    struct Node* ptr2= head;
    while(ptr2!=NULL)
    {
        count++;
        ptr2=ptr2->next;
    }

    int x=0;
    struct Node* p = head;
    while(x!=((int)(count/2)))
    {
        p=p->next;
        x++;
    }

    return p->data;
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
 
    int x = findMiddle(head);

    cout<<x;

    return 0;
}