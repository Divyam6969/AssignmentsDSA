#include<iostream>
using namespace std;
struct Node 
{
    int data;
    struct Node* next;
};
struct Node* deletefrombeg(struct Node* head)
{
    head=head->next;
    

    return head;
}
struct Node* deletefromend(struct Node* head)
{
    struct Node*p = head;
    struct Node* ptr= p->next;
    while((ptr->next)!=NULL)
    {
        p=p->next;
        ptr=ptr->next;
    }
    p->next=NULL;

    return head;
}
struct Node* endinsert(struct Node* head, int x)
{
    struct Node* ptr = (struct Node*)malloc(sizeof(struct Node));
    struct Node* p=head;
    while((p->next)!=NULL)
    {
        p=p->next;
    }
    ptr->data=x;
    p->next=ptr;
    ptr->next=NULL;
    return head;
}

struct Node* beginninginsert(struct Node* head, int x)
{
    struct Node* ptr = (struct Node*)malloc(sizeof(struct Node));
    ptr->data=x;
    ptr->next=head;
    head=ptr;
    return head;
}
void traversal(struct Node* head)
{
    cout<<"Your linked list is"<<endl;
    struct Node* ptr= head;
    int count = 0;
    while(ptr!=NULL)
    {
        cout<<"At node "<<count<<": ";
        cout<<ptr->data<<" "<<endl;;
        ptr=ptr->next;
        count++;
    }
}

void searchforanode(struct Node* head,int s)
{
    int count =0;
    int check = 0;
    struct Node* ptr= head;
    while((ptr!=NULL))
    {
        count++;
       if(ptr->data=s)
       {
        check++;
       }
       ptr=ptr->next;
    }
    if(check==0)
    {
        cout<<"This element is not present in the linked list";
    }
    else
    {
        cout<<"element "<<s<<" is present at position "<<count-1<<"  in our linked list";
    }
    
    
}

struct Node* insertinbetween(struct Node* head,int s,int x)
{
    struct Node* ptr = (struct Node*)malloc(sizeof(struct Node));
    struct Node* p = head;
    int count = 0;
    while(count<(s-1))
    {
        p=p->next;
        count++;
    }
    ptr->next=p->next;
    ptr->data=x;
    p->next=ptr;
    
    return head;
}

struct Node* deletefrombetween(struct Node* head ,int x)
{
    struct Node*p=head;
    struct Node*q=head->next;
    int count=0;
    while(count!=(x-1))
    {
        p=p->next;
        q=q->next;
        count++;
    }
    p->next=q->next;



    return head;

}

int main()
{
    struct Node* head =(struct Node*)malloc(sizeof(struct Node));
    struct Node* val1=(struct Node*)malloc(sizeof(struct Node));
    struct Node* val2=(struct Node*)malloc(sizeof(struct Node));
    struct Node* val3=(struct Node*)malloc(sizeof(struct Node));\

    head->data=1;
    head->next=val1;
    val1->data=2;
    val1->next=val2;
    val2->data=3;
    val2->next=val3;
    val3->data=4;
    val3->next=NULL;

    traversal(head);
    cout<<endl;
   
    starthehe:
    cout<<"Press 1 to insert an element in beginning"<<endl<<"Press 2 to insert an element in the end"<<endl<<"Press 3 to insert an element in between"<<endl<<"Press 4 to delete an element from the beginning"<<endl<<"Press 5 to delete an element from the end"<<endl<<"Press 6 to delete a specific node"<<endl<<"Press 7 to search for a node element and display its position"<<endl<<"Press 8 to display all elements in the linked list"<<endl<<"Press 9 to quit"<<endl<<"Press 10 to read menu again"<<endl;
    start:
    cout<<"Choose from the given menu"<<endl;
    int s;
    cin>>s;
    if(s<1||s>10)
    {
        goto start;
    }
    switch (s)
    {
        case 1:
        int a;
        cout<<"Enter an element you want to insert: "<<endl;
        cin>>a;
        head=beginninginsert(head,a);
        traversal(head);
        break; 


        case 2:
        int b;
        cout<<"Enter an element you want to insert: "<<endl;
        cin>>b;
        head=endinsert(head,b);
        traversal(head);
        break;


        case 3:
        int c;
        cout<<"Enter the node where you want to insert your element: ";
        cin>>c;
        int d;
        cout<<"Enter the element you want to insert: ";
        cin>>d;
        head=insertinbetween(head,c,d);
        traversal(head);


        break;


        case 4:
        head=deletefrombeg(head);
        traversal(head);
        break; 


        case 5:
        head=deletefromend(head);
        traversal(head);
        break;


        case 6:
        cout<<"Enter which node you want to delete: ";
        int lol;
        cin>>lol;
        head=deletefrombetween(head,lol);
        traversal(head);


        break;


        case 7:
        int x;
        cout<<"Enter an element: ";
        cin>>x;
        searchforanode(head,x);
        break; 


        case 8:
        traversal(head);
        break;

        case 10:
        goto starthehe;
        break;

        case 9:
        return 0;

        



        
    }
    return 0;
}