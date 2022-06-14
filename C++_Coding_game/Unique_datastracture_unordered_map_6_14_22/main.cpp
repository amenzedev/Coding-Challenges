#include <iostream>
#include <unordered_map>

void my_solution(std::string input);
void my_solution_without_datastructure(std::string input);
bool book_solution(std::string input)
{
    
    if(input.length()>256) return false;
    
    bool char_set[256]={};
    for (int i=0;i<input.length();i++)
    {
        int val = static_cast<int>(input[i]);
        if(char_set[val])
        {
            return false;
        }
        char_set[val]=true;
    }
    return true;
}
int main()
{
    std::string input;
    std::getline(std::cin,input);
    my_solution(input);
    my_solution_without_datastructure(input);
    std::cout<<book_solution(input)<<std::endl;
    
    return 0;


}

void my_solution(std::string input)
{
    std::unordered_map<char,int> counter;
    bool unique = true;
    for(char a:input)
    {
        
        if(counter[a]) 
        {
            unique = false;
            break;
        }
        else counter[a]=1;
        
        
    }
    if(unique)std::cout<<"unique"<<std::endl;
    else std::cout<<"not unique"<<std::endl;
}

void my_solution_without_datastructure(std::string input)
{
    bool unique = true;
    for(int i=0;i<input.length();i++)
    {
        int counter=0;
        for(int j=0;j<input.length();j++)
        {
            if(input[i]==input[j])counter++;
            if(counter>1)
                {
                    unique=false;
                    break;                    
                }

        }
        if(!unique) break;
    }
    if(unique)std::cout<<"unique"<<std::endl;
    else std::cout<<"not unique"<<std::endl;

}

