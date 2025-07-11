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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
           ListNode* connect = nullptr;
           ListNode* head =nullptr;
        while(list1 != nullptr||list2 !=nullptr)
        {
            int val;
          if(list1 !=nullptr && list2!=nullptr)
          {
            val=min(list1->val,list2->val);
            if( list1->val == val)
            {
            list1=list1->next;
            }
            else{
                 list2=list2->next;
            }
            
          }
          else if(list1 != nullptr)
          {
             val=list1->val;
           
              list1=list1->next;
          }
          else{
             val=list2->val;

              list2=list2->next;
          }
           ListNode* merge = new ListNode(val);
          if(head!=nullptr)
          {
          merge->next=nullptr;
           connect->next= merge;
          connect=merge;
          }
        else
          {
            head=merge;
             connect=merge;
          }
         
          
           
        }

        return head;
        
    }
};