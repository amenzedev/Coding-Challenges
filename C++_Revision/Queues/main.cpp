#include <iostream>

using namespace std;

struct node {
    int data;
    node * next;
};

class Queue{
    private:
        node * first;
        node * last;
    public:
        Queue();
        void enqueue(int a);
        void dequeue();
        void display();


};

Queue::Queue(){
    first = NULL;
    last = NULL;
}

void Queue::enqueue(int a)
{
    node * p= new node;

        p->data = a;
        p->next = NULL;
        if(first==NULL)
        {
            
            first = p;
        }
        else{
            last->next = p;            
        }
        last = p;
    
}

void Queue::dequeue()
{
    
    if(first != NULL)
    {
        node * temp = first;
        first = first->next;
        delete temp;
    }
}

void Queue::display()
{
    node * temp = first;
    while(temp != NULL)
    {
        cout<<temp->data<<endl;
        temp=temp->next;
    }
}

int main()
{
    Queue q;
    q.enqueue(1);
    q.enqueue(2);
    q.enqueue(3);
    q.display();
    cout<<"after deque"<<endl;
    q.dequeue();
    q.display();
    cout<<"after deque"<<endl;
    q.dequeue();
    q.display();
    cout<<"after deque"<<endl;
    q.dequeue();
    q.display();
    cout<<"after deque"<<endl;
    q.dequeue();
    q.display();
    return 0;
}


