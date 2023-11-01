/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        
        ListNode* listNode = new ListNode(0);
        ListNode* ans = listNode;
        
        int carry = 0;
        while(l1!=NULL || l2!=NULL || carry!=0)
        {
            int sum = 0;
            if(carry==1 && l1==NULL && l2==NULL){
                sum = carry;
                //l1=l1->next;
                //l2=l2->next;
            }
             else if(l1==NULL)
            {
                sum =l2->val+carry;
                l2=l2->next;
            }
            else if(l2==NULL)
            {
                sum = l1->val +carry;
                l1=l1->next;
            }
            else{
                sum = l1->val +l2->val+carry;
                l1=l1->next;
                l2=l2->next;
            }
            int val = sum%10;
            
            ans->next=new ListNode(val);
            ans=ans->next;
            
            
            carry = sum/10;
        }
        
        return listNode->next;
        
    }
};