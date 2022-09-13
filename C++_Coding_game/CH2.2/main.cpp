#include <iostream>

using namespace std;

struct node
{
    int data;
    struct node *next;
};

class linked_list{
    public :
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

        
        static void display(linked_list a)
        {
            while(a.head != NULL)
            {
                cout<<a.head->data<<endl;
                a.head = a.head->next;
            }
        }


};

int findKthElementFromLast(linked_list input,int kth)
{
    int length = 0;
    linked_list temp = input;
    while(temp.head != NULL)
    {
        length++;
        temp.head=temp.head->next;
    }
    temp = input;
    if(length-kth >= 0 && length-kth <length)
    {
        int count = length-kth;
        for(int i=0;i<count;i++)
            input.head = input.head->next;
        return input.head->data;
    }
    
    return -1;
}

int bookSolutionFindKthElementFromLast(linked_list input, int k)
{
    linked_list p1=input,p2=input;
    if(k<=0)return -1;

    //move p2 forward k nodes into the list
    for(int i=0;i<k-1;i++)
    {
        if(p2.head == NULL) return -1;
        else p2.head = p2.head->next;
    }

    if(p2.head == NULL) return -1;
    
    while(p2.head->next != NULL)
    {
        p1.head = p1.head->next;
        p2.head = p2.head->next;
    }
    return p1.head->data;

}

int main()
{
    linked_list input;
    input.add_node(3);
    input.add_node(2);
    input.add_node(5);
    input.add_node(6);
    input.add_node(32);
    input.add_node(75);
    input.add_node(12);
    input.add_node(43);
    linked_list::display(input);
    int kth = 3;
    cout<<"the "<<kth<<" element is : "<<findKthElementFromLast(input,kth)<<" "<<bookSolutionFindKthElementFromLast(input,kth)<<endl;
    kth = -1;
    cout<<"the "<<kth<<" element is : "<<findKthElementFromLast(input,kth)<<" "<<bookSolutionFindKthElementFromLast(input,kth)<<endl;
    kth = 0;
    cout<<"the "<<kth<<" element is : "<<findKthElementFromLast(input,kth)<<" "<<bookSolutionFindKthElementFromLast(input,kth)<<endl;
    kth = 12;
    cout<<"the "<<kth<<" element is : "<<findKthElementFromLast(input,kth)<<" "<<bookSolutionFindKthElementFromLast(input,kth)<<endl;
    kth = 1;
    cout<<"the "<<kth<<" element is : "<<findKthElementFromLast(input,kth)<<" "<<bookSolutionFindKthElementFromLast(input,kth)<<endl;
    kth = 7;
    cout<<"the "<<kth<<" element is : "<<findKthElementFromLast(input,kth)<<" "<<bookSolutionFindKthElementFromLast(input,kth)<<endl;
    kth = 8;
    cout<<"the "<<kth<<" element is : "<<findKthElementFromLast(input,kth)<<" "<<bookSolutionFindKthElementFromLast(input,kth)<<endl;

    return 0;
}