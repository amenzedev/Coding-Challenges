#include <iostream>
bool getBit(int num, int i)
{
    return (num & (1<<i)) != 0;
}

int setBit(int num, int i)
{
    return num | (1<<i);
}

int clearBit(int num, int i)
{
    int mask = ~(1<<i);
    return num & mask;
}

int clearBitsMSBthroughi(int num,int i)
{
    int mask = (1<< (i+1))-1;
    return num & mask;
}

int clearBitsIthrough0(int num, int i)
{
    int mask = ~(  ( 1 << ( i + 1 )  )    -   1  );
    return num & mask;
}

int updateBit(int num, int i, int v)
{
    int mask = ~ ( 1 << i );
    return (mask & num) | (v << i);
}

int logicalAnd(int num1, int num2)
{
    return num1 && num2;
}

int check(int num)
{
    return num & (~0 << 2);
}

int main()
{
    std::cout<<getBit(5,2)<<std::endl; //outputs 1
    std::cout<<getBit(5,1)<<std::endl; //outputs 0
    std::cout<<setBit(5,1)<<std::endl; //outputs 7
    std::cout<<setBit(5,2)<<std::endl; //outputs 5
    std::cout<<clearBit(5,1)<<std::endl; //outputs 5
    std::cout<<clearBit(5,2)<<std::endl; //outputs 1
    std::cout<<clearBitsMSBthroughi(5,1)<<std::endl; //outputs 1
    std::cout<<clearBitsIthrough0(5,1)<<std::endl; //outputs 4
    std::cout<<updateBit(5,1,1)<<std::endl; //ouputs 7
    std::cout<<logicalAnd(5,2)<<std::endl;  //outputs 1
    std::cout<<check(11)<<std::endl;
    
    return 0;
}