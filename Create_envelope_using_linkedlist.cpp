#include<iostream>
#include <string>
#include<stdio.h>
using namespace std;
struct envelope
{
    string from;
    string to;
    int number;
    string location;
};
struct node
{
    struct envelope letter;
    struct node* next;
};
struct node* Front=NULL;
struct node* Rear =NULL;
void enqueue(string from,string to,int number,string location)
{
    node* newnode = new node;
    newnode->letter.from=from;
    newnode->letter.to=to;
    newnode->letter.number=number;
    newnode->letter.location=location;
    newnode->next=NULL;
    if(Front==NULL&&Rear==NULL)
    {
        Front=newnode;
        Rear=newnode;
    }
    else
    {
        Rear->next=newnode;
        Rear=newnode;
    }
}
void dequeue()
{
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
}

void display()
{
    struct node* ptr=Front;
    cout<<"From-"<<"To-"<<"Number-"<<"Location"<<endl;
    while(ptr!=NULL)
    {
        cout<<ptr->letter.from<<" "<<ptr->letter.to<<" "<<ptr->letter.number<<" "<<ptr->letter.location<<endl;
        ptr=ptr->next;
    }
}
int main()
{
    enqueue("xxcc","yy",11,"zl");
    enqueue("xycc","yg",12,"zj");
    enqueue("yxdd","yt",13,"zk");
    enqueue("xzdd","ya",14,"zn");
    enqueue("zxee","yx",15,"zb");
    display();
}
