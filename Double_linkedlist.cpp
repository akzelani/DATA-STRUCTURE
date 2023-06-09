#include<iostream>
using namespace std;
struct node
{
    int data;
    struct node* pre;
    struct node* next;
};
struct node* Front=NULL;
struct node* Rear =NULL;
void insertion (int data)
{
    struct node* newnode;
    newnode=(struct node*)malloc(sizeof(struct node));
    newnode->data=data;
    newnode->pre=
    newnode->next=NULL;
    if(Front==NULL&&Rear==NULL)
    {
        Front=newnode;
        Rear=newnode;
    }
    else
    {
        newnode->pre=Rear;
        Rear->next=newnode;
        Rear=newnode;
    }
}
void dequeue()
{
    if(Front==NULL&&Rear==NULL)
    {
        cout<<"Queue is empty"<<endl;
    }
    else if(Front==Rear)
    {
        Front =Rear=NULL;
    }
    else
    {
        Front=Front->next;
    }
}

void print_forward() {
        struct node* current_node = Front;
        while (current_node != NULL) {
            cout << current_node->data << " ";
            current_node = current_node->next;
        }
        cout << endl;
    }

    void print_backward() {
        struct node* current_node = Rear;
        while (current_node != NULL) {
            cout << current_node->data << " ";
            current_node = current_node->pre;
        }
        cout << endl;
    }

int main()
{
    insertion(10);
    insertion(20);
    insertion(5);
    insertion(565);
    insertion(484);
    print_forward();
    print_backward();
}
