#include <iostream>

using namespace std;

void my_urlify(char str[],int actual_length)
{
    int i=0;
    while(str[i])
    {
        if(str[i]==' ')
        {
            str[i]='%';
            for(int j=actual_length;j>=i+1;j--)
            {
                str[j+2]=str[j];
                str[j]=' ';
            }
            actual_length+=2;
            str[++i]='2';
            str[++i]='0';

        }
        i++;
    }
}

void book_urlify(char str[], int actual_length)
{
    int space_count=0, new_length = 0;

    for(int i=0;i<actual_length;i++)
    {
        if(str[i]==' ') space_count++;
    }

    new_length = actual_length + (2*space_count);
    for(int i=actual_length-1; i>=0;i--)
    {
        if(str[i]==' ')
        {
            str[new_length-1]='0';
            str[new_length-2]='2';
            str[new_length-3]='%';
            new_length-=3;
        }
        else{
            str[new_length-1]=str[i];
            new_length--;
        }
    }
}

int main()
{
    char b[19]={'M','r',' ','J','o','h','n',' ',' ','S','m','i','t','h'};
    int full_length = sizeof(b)/sizeof(char);
    //cout<<full_length<<endl;
    
    my_urlify(b,14);
    cout<<b<<endl;

    char c[19]={'M','r',' ','J','o','h','n',' ',' ','S','m','i','t','h'};
    book_urlify(c,14);
    cout<<c<<endl;
    

    
    return 0;
}