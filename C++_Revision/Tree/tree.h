#ifndef TREETYPE_H
#define TREETYPE_H

#include<iostream>

typedef char ItemType;
struct TreeNode{
    ItemType info;
    TreeNode* left;
    TreeNode* right;
};
enum OrderType{PRE_ORDER, IN_ORDER, POST_ORDER};

class TreeType{

    public:
        TreeType()=default;
        ~TreeType()=default;
        //TreeType(const TreeType& originalTree);
        //void operator=(TreeType& originalTree);
        void MakeEmpty();
        bool IsEmtpy() const;
        bool IsFull() const;
        int GetLength() const;
        ItemType GetItem(ItemType item, bool &found)const;
        void PutItem(ItemType item);
        void DeleteItem(ItemType item);
        void ResetTree(OrderType order);
        ItemType GetNextItem(OrderType order, bool & finished);
        void Print() const;
    private:
        TreeNode* root;
        


};


#endif 