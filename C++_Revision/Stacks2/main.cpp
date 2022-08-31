#include <iostream>
#include <stack>

using namespace std;

int main()
{
    stack<int> postFix;
    string expression = "524*+7-";
    int operand1,operand2;
    for(int i=0;i<expression.length();i++)
    {
        if(isdigit(expression[i]))
        {
            postFix.push(stoi(expression.substr(i,1)));
        }
        else{
            operand1 = postFix.top();
            postFix.pop();
            operand2 = postFix.top();
            postFix.pop();
        
            switch(expression[i])
            {
                case '+':
                    postFix.push(operand1 + operand2);
                    break;
                case '-':
                    postFix.push(operand2 - operand1);
                    break;
                case '*':
                    postFix.push(operand1 * operand2);
                    break;
                case '/':
                    postFix.push(operand2 / operand1);
                    break;

            }
        }
    }
    cout<<"The answer to "<< expression <<endl;
    cout<< " is "<<postFix.top()<<endl;

    return 0;
}