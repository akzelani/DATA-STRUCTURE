#include<iostream>
using namespace std;
struct node
{
    int data;
    struct node* next;
};
struct node* head=NULL;
struct node* current_node=NULL;
void insertion(int element)
{
    struct node* newnode;
    newnode=(struct node*)malloc(sizeof(struct node));
    newnode->data=element;
    newnode->next=NULL;
    if(head==NULL)
    {
        current_node=newnode;
        head=newnode;
    }
    else
    {
        current_node->next=newnode;
        current_node=newnode;
    }

}
void display()
{
    struct node* ptr;
    ptr=head;
    while(ptr!=NULL)
    {
        cout<<ptr->data<<endl;
        ptr=ptr->next;
    }
}
void search_Element()
{
    cout<<"Enter element to search :";
    int element;
    cin>>element;
    struct node* node;
    node=head;
    int x=0;
    while(node!=NULL)
    {
        if(node->data==element)
        {
            cout<<"FOUND"<<endl;
            x=1;
        }
        node=node->next;
    }
    if(x==0)cout<<"NOT FOUND"<<endl;
}
void add_last()
{
    cout<<"Enter element to add last :";
    int element;
    cin>> element;
    struct node* newnode;
    newnode=(struct node*)malloc(sizeof(struct node));
    newnode->data=element;
    newnode->next=NULL;
    struct node* current=head;
    while(current->next!=NULL)
    {
        current=current->next;

    }
    current->next=newnode;

}
void add_first()
{
    cout<<"Enter element to add first :";
    int element;
    cin>>element;
    struct node* newnode;
    newnode=(struct node*)malloc(sizeof(struct node));
    newnode->data=element;
    newnode->next=head;
    head=newnode;
}
void deleteFirst()
{
    if(head==NULL)
    {
        cout<<"LINK LIST IS EMPTY"<<endl;
    }
    head=head->next;
}
void delete_last()
{
    if(head==NULL)
    {
        cout<<"LINK LIST IS EMPTY"<<endl;
    }
    struct node* second_last=head;
    struct node* last=head->next;
    while(last->next!=NULL)
    {
        last=last->next;
        second_last=second_last->next;
    }
    second_last->next=NULL;
}
void add_middle()
{
    cout<<"Enter element :";
    int element;
    cin>> element;
    cout<<"Enter position :";
    int position;
    cin>>position;
    struct node* newnode;
    newnode=(struct node*)malloc(sizeof(struct node));

    struct node* ptr=head;
    for(int i=1;i<position-1;i++)
    {
        ptr=ptr->next;
    }
    newnode->data=element;
    newnode->next=ptr->next;
    ptr->next=newnode;
}
void add_element( )
{
    cout<<"Enter element :";
    int element;
    cin>>element;
    struct node *newnode;
    newnode=(struct node*)malloc(sizeof(struct node));
    cout<<"Enter data :";
    cin>>newnode->data;
    newnode->next=NULL;
     current_node=head;
    while(current_node->data!=element)
    {
        current_node=current_node->next;
    }
    newnode->next=current_node->next;
    current_node->next=newnode;
}
int main()
{
    insertion(500);
    insertion(600);
    insertion(516);
    insertion(47);
     int c;
    while(1)
    {
        cout<<"Input any number for different operations:\n1.Display linked list.\n2.Search element from the list.\n3.Add first.\n4.Add last.\n5.Add middle.\n6.Delete first.\n7.delete last"<<endl;
        cout<<"8.Add element after element"<<endl;
        cin>>c;
        switch(c)
        {
        case 1:
            display();
            cout<<"\n";
            break;
        case 2:
            search_Element();
            cout<<"\n";
            break;
        case 3:
            add_first();
            cout<<"\n";
            break;
        case 4:
            add_last();
            cout<<"\n";
            break;
        case 5:
            add_middle();
            cout<<"\n";
            break;
        case 6:
            deleteFirst();
            cout<<"\n";
            break;
        case 7:
            delete_last();
            cout<<"\n";
            break;
        case 8:
            add_element();
            cout<<"\n";
            break;

        default:
            cout<<"\nWrong Input\n";
        }
    }
}
