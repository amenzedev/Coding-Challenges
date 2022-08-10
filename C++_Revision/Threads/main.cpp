#include <iostream>
#include <thread>
#include <string>
#include <pthread.h>

//**************************************************************
//**************************************************************
// To RUN THIS FILE USE THE FOLLOWING COMMAND ON THE TERMINAL

// g++ main.cpp -o main -pthread

//**************************************************************
//**************************************************************


using namespace std;

void func()
{
    std::cout<<"This is the first thread"<<std::endl;
}

void func2(int i, double d, const std::string& s)
{
    std::cout << i << ", " << d << ", " << s << std::endl;
}

void foo(int z)
{
    for (int i=0;i<z;i++)
        cout <<"Thread using function pointer as callable\n";
}

//A callable is_object
class thread_obj{
    public:
        void operator()(int x)
        {
            for(int i=0;i<x;i++)
                cout<<"Thread using function object as callable\n";
        }
};



int main()
{
    std::thread t(func);
    t.join(); //blocks the main thread until this thread is executed
    std::thread t2(func2, 1, 12.5, "sample");
    t2.join();


    cout<<"Threads 1 and 2 and 3 operating independently"<<endl;

    thread th1(foo,3);
    thread th2(thread_obj(),3);
    auto f=[](int x)
    {
        for(int i=0;i<x;i++)
            cout<<"Threads using lambda expression as callable\n";
    };
    thread th3(f,3);

    th1.join();
    th2.join();
    th3.join();

    return 0;
}