#include <iostream>
#include <unordered_map>

int main()
{
    std::unordered_map<std::string,int> umap;
    umap["First"]=1;
    umap["Second"]=2;
    umap["Third"]=3;
    for(auto x: umap)
    {
        std::cout<<x.first<<" "<<x.second<<std::endl;
    }
    if(umap["Fouth"])std::cout<<"here";
    else std::cout<<"not here";


}