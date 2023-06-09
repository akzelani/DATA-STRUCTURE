#include<iostream>
#include<stdio.h>
#include<string>
using namespace std;
class Queue
{
private:
    int Size=6;
    int Q[6];
    int front=-1;
    int rear=-1;
public:
    bool isEmpty()
    {
        if(front== -1&&rear== -1)
        {
            return true;
        }
        else
        {
            return false;
        }
    }

bool isFull()
    {
        if((rear+1)%Size==front)
        {
            return true;
        }
        else
        {
            return false;
        }
    }

   bool enqueue(int element)
{
        if(isFull()==true)
        {
            return false;
        }
        else if(isEmpty()==true)
        {
            front=0;
            rear=0;
            Q[rear]=element;
            return true;
        }
        else
        {
            rear=(rear+1)%Size;
            Q[rear]=element;
            return true;
        }
}

    bool isDequeue()
    {
        if(isEmpty()==true)
        {
            return false;
        }
        else if(front==rear)
        {
            front=-1;
            rear=-1;
            return true;
        }
        else
        {
            front=(front+1)%Size;
            return true;
        }
    }
    bool getfront()
    {
        if(isEmpty()==true)
        {
            cout<<"IS EMPTY"<<endl;
        }
        else
        {
            cout<<Q[front]<<endl;
        }
    }
    void print() {
    if(isEmpty()==true)
        {
            cout<<"Queue is Empty"<<endl;
        }
        else if(front<=rear)
        {
            for(int i=front;i<rear;i++)
            {
              cout<<Q[i]<<endl;
            }
        }
        else
        {
           for(int i=front;i<Size;i++)
        {
            cout<<Q[i]<<endl;
        }
        for(int i=0;i<=rear;i++)
        {
            cout<<Q[i]<<endl;
        }
        }
  }
};



int main()
{
    Queue a;
    a.isEmpty();
    a.isFull();
    a.enqueue(50);
    a.enqueue(10);
    a.enqueue(5);
    a.enqueue(505);
    a.enqueue(100);
    a.enqueue(500);
    a.isDequeue();
    a.isDequeue();
    a.isDequeue();
    a.enqueue(11);
    a.enqueue(1);
    a.print();
}

