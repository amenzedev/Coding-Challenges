#include <iostream>
#include <malloc.h>

using namespace std;

struct node {
    int data;
    struct node * next;
};

class stack{
    struct node * top;

    public:
        stack();
        void push(int a);
        void pop();
        void display();
        


};

stack::stack()
{
    top = NULL;
}

void stack::push(int a)
{
    struct node * p;
    if((p=(node *)malloc(sizeof(node))) == NULL)
    {
        cout <<"Memory Exhausted";
        exit(0);
    }
    
    p=new node;
    p->data = a;
    if(top != NULL)
    {
        p->next = top;
    }
    top = p;
    

}

void stack::pop()
{
    if(top != NULL)
    {
        node * temp = top;
        top = top->next;
        delete temp;       

    }
     
}

void stack::display()
{
    node * temp = top;
    while(temp!=NULL)
    {
        cout<<temp->data<<endl;
        temp=temp->next;
    }
}


int main()
{
    stack s;
    s.push(1);
    s.push(2);
    s.push(3);
    s.display();
    cout<<"after poping"<<endl;
    s.pop();
    s.display();
    cout<<"after poping"<<endl;
    s.pop();
    s.display();
    cout<<"after poping"<<endl;
    s.pop();
    s.display();
    cout<<"after poping"<<endl;
    s.pop();
    s.display();
    return 0;
}