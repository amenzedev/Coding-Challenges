#include <iostream>


using namespace std;
const int stackSize = 3;
int buffer [stackSize*3];
int stackPointer[]= {0,0,0}; //This will track top elements

void push(int stackNum, int value)
{
    if(stackPointer[stackNum]>=stackSize)
    {
        cout<<"Out of Space"<<endl;
        return;
    }
    int index = stackNum *stackSize+stackPointer[stackNum]+1;
    stackPointer[stackNum]++;
    buffer[index]=value;
}

int pop(int stackNum)
{
    if(stackPointer[stackNum]==0)
    {
        cout<<"Trying to pop empty stack"<<endl;
        //throw an exception
    }
    int index = stackNum*stackSize+stackPointer[stackNum];
    stackPointer[stackNum]--;
    int value = buffer[index];
    buffer[index]=0;
    return value;
}

int peek(int stackNum)
{
    int index =  stackNum*stackSize+stackPointer[stackNum];
    return buffer[index];
}

bool isEmpty(int StackNum)
{
    return stackPointer[StackNum]==0;
}

void display()
{
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<stackSize;j++)
            cout<<buffer[i*3+j];
        cout<<endl;
    }
}

int main()
{
    push(1,1);
    push(1,2);
    
    display();
    cout<<"after popping"<<endl;
    pop(1);
    display();
    return 0;
}


