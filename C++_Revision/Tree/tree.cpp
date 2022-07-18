#include "tree.h"
int CountNodes(TreeNode* tree);
void Retrieve(TreeNode* tree, ItemType& item ,bool & found);
void Insert(TreeNode*& tree, ItemType item);
void DeleteNode(TreeNode*& tree);
void Delete(TreeNode*& tree, ItemType item);
void GetPredecessor(TreeNode* tree, ItemType& data);
void Destroy(TreeNode*& tree);

// TreeType::TreeType()
// {
//     root= NULL;
// }


// TreeType::~TreeType(){
//     Destroy(root);
// }
// void Destroy(TreeNode*& tree){
//     if(tree != NULL)
//     {
//         Destroy(tree->left);
//         Destroy(tree->right);
//         delete tree;
//     }
// }


bool TreeType::IsFull() const
{
    TreeNode* location;
    try{
        location = new TreeNode;
        delete location;
        return false;
    }
    catch(std::bad_alloc exception){
        return true;
    }
}

bool TreeType::IsEmtpy() const{
    return root==NULL;
}

int TreeType::GetLength() const{
    return CountNodes(root);
}

int CountNodes(TreeNode* tree)
{
    if(tree==NULL)
        return 0;
    else
        return CountNodes(tree->left)+CountNodes(tree->right)+1;
}


ItemType TreeType::GetItem(ItemType item, bool& found) const{
    Retrieve(root,item,found);
    return item;
}

void Retrieve(TreeNode* tree, ItemType& item ,bool &found)
{
    if(tree==NULL)
        found = false;
    else if(item<tree->info)
        Retrieve(tree->left,item,found);
    else if(item > tree->info)
        Retrieve(tree->right,item,found);
    else{
        item = tree->info;
        found = true;
    }
}

void TreeType::PutItem(ItemType item)
{
    Insert(root,item);
}

void Insert(TreeNode*& tree, ItemType item)
{
    if(tree == NULL)
    {
        tree = new TreeNode;
        tree->right = NULL;
        tree->left = NULL;
        tree->info = item;
    }
    else if(item < tree->info)
        Insert(tree->left,item);
    else
        Insert(tree->right, item);
}

void TreeType::DeleteItem(ItemType item)
{
    Delete(root, item);
}

void Delete(TreeNode*& tree, ItemType item)
{
    if(item < tree->info)
        Delete(tree->left, item);
    else if (item > tree->info)
        Delete(tree->right,item);
    else DeleteNode(tree);
}

void DeleteNode(TreeNode*& tree)
{
    ItemType data;
    TreeNode* tempPtr;
    tempPtr = tree;
    if(tree->left == NULL)
    {
        tree = tree->right;
        delete tempPtr;
    }
    else if(tree->right == NULL)
    {
        tree = tree->left;
        delete tempPtr;
    }
    else{
        GetPredecessor(tree->left,data);
        tree->info = data;
        Delete(tree->left,data);
    }
}

void GetPredecessor(TreeNode* tree, ItemType& data)//find the rightmost node in tree
{
    while(tree->right != NULL)
        tree = tree->right;
    data = tree->info;
}
// void PrintTree(TreeNode* tree, std::ofstream& outFile)
// {
//     if(tree != NULL)
//     {
//         PrintTree(tree->left,outFile);
//         outFile << tree->info;
//         PrintTree(tree->right,outFile);
//     }
// }

// void TreeType::Print(std::ofstream& outFile) const
// {
//     PrintTree(root,outFile)
// }

void PrintTree(TreeNode* tree)
{
    if(tree!= NULL)
    {
        PrintTree(tree->left);
        std::cout<< tree->info <<" ";
        PrintTree(tree->right);
        
    }
}
void TreeType::Print() const{
    PrintTree(root);
}



