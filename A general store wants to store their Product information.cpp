#include<iostream>
#include <string>
using namespace std;
struct store
{
    string product_id;
    string product_name;
    int unit_price;
    int available_quantity;
};
struct node
{
    struct store product;
    struct node* next;
};
struct node* Front=NULL;
struct node* Rear =NULL;
void insert_product(string p_id,string p_name,int u_price,int availquant)
{
    node* newnode = new node;
    newnode->product.product_id=p_id;
    newnode->product.product_name=p_name;
    newnode->product.unit_price=u_price;
    newnode->product.available_quantity=availquant;
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
void addProduct()
{
    struct node* current=Front;
    string p_id;
    string p_name;
    int u_price;
    int availquant;
    cout<<"Input product id"<<"\n";
    cin>>p_id;
    cout<<"Input product name"<<"\n";
    cin>>p_name;
    cout<<"Input unit price"<<"\n";
    cin>>u_price;
    cout<<"Input available quantity"<<"\n";
    cin>>availquant;

    node* newnode = new node;
    newnode->product.product_id=p_id;
    newnode->product.product_name=p_name;
    newnode->product.unit_price=u_price;
    newnode->product.available_quantity=availquant;
    newnode->next=NULL;

    while(current->next!=NULL)
    {
        current=current->next;
    }
    current->next=newnode;

}
void remove_product()
{
    string p_id;
    cout<<"Input product id to delete the product"<<"\n";
    cin>>p_id;
    struct node* current=Front;
    struct node* previous=NULL;
        while(current->product.product_id!=p_id)
       {
            previous=current;
            current=current->next;
       }
        if(previous==NULL)
        {
          Front=current->next;
        }
         else
        {
           previous->next=current->next;
        }
        delete current;
        cout<<"Product removed successfully"<<"\n";

}
void searchProduct()
{
    int p=0;
    cout<<"Give input of the product name you want to see"<<"\n";
    string p_name;
    cin>>p_name;
    struct node* ptr=NULL;
    ptr=Front;
    while(ptr!=NULL)
    {
        if(ptr->product.product_name==p_name)
        {
             p=1;
        }
        ptr=ptr->next;
    }

    if(p==1){cout<<"***Found***";}
    else{cout<<"***Not found***";}
}
void ascendingSorting()
{
    struct node* head =Front;
    struct node* ptr,*temp;
    int ptr2;
    if(head==NULL)
    {
        cout<<"Product list is empty"<<"\n";
    }
    else
    {
        for(ptr=head;ptr->next!=NULL;ptr=ptr->next)
        {
           for(temp=ptr->next;temp!=NULL;temp=temp->next)
           {
               if(ptr->product.unit_price>temp->product.unit_price)
               {
                   ptr2=ptr->product.unit_price;
                   ptr->product.unit_price=temp->product.unit_price;
                   temp->product.unit_price=ptr2;
               }
           }
        }

    }
    struct node *current=NULL;
    current=Front;
    while(current!=NULL)
    {
        cout<<"Unit price is: "<<current->product.unit_price<<endl;
        current=current->next;
    }
}
void descendingSorting()
{
    struct node*head = Front;
    struct node *ptr,*temp;
    int ptr2;
    if(head==NULL)
    {
        cout<<"Product list is empty"<<"\n";
    }
    else
    {
        for(ptr=head;ptr->next!=NULL;ptr=ptr->next)
        {
           for(temp=ptr->next;temp!=NULL;temp=temp->next)
           {
               if(ptr->product.unit_price<temp->product.unit_price)
               {
                   ptr2=ptr->product.unit_price;
                   ptr->product.unit_price=temp->product.unit_price;
                   temp->product.unit_price=ptr2;
               }
           }
        }

    }
    struct node *current=NULL;
    current=head;
    while(current!=NULL)
    {
        cout<<"Unit price is: "<<current->product.unit_price<<endl;
        current=current->next;
    }
}
void showAll()
{
    struct node* ptr=Front;
    while(ptr!=NULL)
    {
        cout<<"Product id is:\t"<<ptr->product.product_id<<endl;
        cout<<"Product name is:\t"<<ptr->product.product_name<<endl;
        cout<<"Product price is:\t"<<ptr->product.unit_price<<endl;
        cout<<"Available quantity is:\t"<<ptr->product.available_quantity<<endl;
        ptr=ptr->next;
    }
}

int main()
{
    insert_product("p-001","Mouse",600,50);
    insert_product("p-002","Keyboard",800,50);
    insert_product("p-003","SSD",4500,37);
    insert_product("p-004","Monitor",12900,78);
    insert_product("p-005","GPU",73800,23);
    int c;
    while(1)
    {
        cout<<"Input any number for different operations:\n1.Show all the products on the list.\n2.Add a new product to the list.\n3.Remove a product on the list based on product id.\n4.Search for a product based on product name.\n5.Sort and show products according to unit price(ascending).\n6.Sort and show products according to unit price(descending)\n0.Exit the system."<<endl;
        cin>>c;
        switch(c)
        {
        case 1:
            showAll();
            cout<<"\n";
            break;
        case 2:
            addProduct();
            cout<<"\n";
            break;
        case 3:
            remove_product();
            cout<<"\n";
            break;
        case 4:
            searchProduct();
            cout<<"\n";
            break;
        case 5:
            ascendingSorting();
            cout<<"\n";
            break;
        case 6:
            descendingSorting();
            cout<<"\n";
            break;
        case 0:
            return 0;
        default:
            cout<<"\nWrong Input\n";
        }
    }
}
