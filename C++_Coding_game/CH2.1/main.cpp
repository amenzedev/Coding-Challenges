#include <iostream>
#include <unordered_map>

using namespace std;

struct node
{
    int data;
    struct node *next;
};

class linked_list{
    private :
        node *head, *tail;
    public : 
        linked_list()
        {
            head = NULL;
            tail = NULL;
        }

        void add_node(int n)
        {
            node * temp = new node;
            temp->data =n;
            temp->next = NULL;

            if(head == NULL)
            {
                head = temp;
                tail = temp;
            }
            else{
                tail->next = temp;
                tail = tail->next;
            }

        }

        static void  deleteDuplicateNode(linked_list n) //with buffer allowed
        {
            unordered_map <int,bool> table;
            node * previous =NULL;
            while(n.head != NULL)
            {
                if(table[n.head->data])
                {
                    //cout<<true<<endl;
                    previous->next = n.head->next;
                }
                else{
                    table[n.head->data]=true;
                    previous = n.head;
                    
                    //cout<<false<<endl;
                }
                n.head = n.head->next;

            }
            

        }

        static void  deleteDuplicateNodeNoBuffer(linked_list n) //no buffer allowed
        {
            node * current =n.head;
            if(current == NULL)
                return;


            while(current != NULL)
            {
                node * runner = current;
                while (runner->next != NULL)
                {
                    if(runner->next->data == current->data)
                    {
                        runner->next = runner->next->next;
                    }
                    else runner= runner->next;
                }
                
                current=current->next;
            }
            

        }

        static void display(linked_list a)
        {
            while(a.head != NULL)
            {
                cout<<a.head->data<<endl;
                a.head = a.head->next;
            }
        }


};

int main ()
{
    linked_list a;
    a.add_node(1);
    a.add_node(2);
    a.add_node(1);
    linked_list::display(a);
    linked_list::deleteDuplicateNode(a);

    cout<<"after deleting duplicates"<<endl;
    linked_list::display(a);
    a.add_node(1);
    cout<<"after deleting duplicates without buffer"<<endl;
    linked_list::deleteDuplicateNodeNoBuffer(a);
    linked_list::display(a);
    
    
    return 0;
}