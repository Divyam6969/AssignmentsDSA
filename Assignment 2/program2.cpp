#include<iostream>
using namespace std;
struct Node
{
    int data;
    struct Node* next;
};
void traversal(struct Node* head)
{
    cout<<"Your linked list is ";
    struct Node* ptr = head;
    while(ptr!=NULL)
    {
        cout<<ptr->data<<" ";
        ptr=ptr->next;

    }
}
 struct Node* deleterepeated(struct Node* head, int x)
    {
        int count = 0;
        struct Node* ptr2 = head;
        struct Node* ptr3 = ptr2->next;
        struct Node* temp;
        while (ptr3 != NULL)
        {
            if (head && head->data == x)    // here is the part of deleting the head if it matches
            {
                temp = head;
                head = head->next;
                free(temp);
                ptr2 = head;
                ptr3 = head->next;
                count++;
            }
            else if (ptr3 && ptr3->data == x)
            {
                temp = ptr3;
                ptr2->next = ptr3->next;
                free(temp);           // you have to free memory to avoid memory leak
                ptr3 = ptr2->next;
                count++;
            }
            else
            {
                ptr2 = ptr2->next;
                ptr3 = ptr3->next;
            }

        }
        cout << "Number of occurance is: " << count << endl;
        return head;
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

    head= (struct Node*)malloc(sizeof(struct Node));
    val1= (struct Node*)malloc(sizeof(struct Node));
    val2= (struct Node*)malloc(sizeof(struct Node));
    val3= (struct Node*)malloc(sizeof(struct Node));
    val4= (struct Node*)malloc(sizeof(struct Node));
    val5= (struct Node*)malloc(sizeof(struct Node));
    val6= (struct Node*)malloc(sizeof(struct Node));

    head->data=1;
    val1->data=2;
    val2->data=1;
    val3->data=2;
    val4->data=1;
    val5->data=3;
    val6->data=1;

    head->next=val1;
    val1->next=val2;
    val2->next=val3;
    val3->next=val4;
    val4->next=val5;
    val5->next=val6;
    val6->next=NULL;

    traversal(head);
    cout<<endl;

    cout<<"Enter a number: ";
    int x;
    cin>>x;

    head=deleterepeated(head,x);
    cout<<"After deleting repeated elements: "<<endl;
    traversal(head);


    return 0;
}