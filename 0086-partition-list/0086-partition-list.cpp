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
    ListNode* partition(ListNode* head, int x) {
        if(head==NULL)
        {
            return NULL;

        }
         if(head->next==NULL)
        {
            return head;
            
        }
        ListNode* temp=head;
        vector<int>d;
        while(temp!=NULL)
        {
            d.push_back(temp->val);
            temp=temp->next;
        }
        vector<int> ans;
        for(int i=0;i<d.size();i++)
        {
          if(d[i]<x)
          {
              ans.push_back(d[i]);
          }
        }
        for(int i=0;i<d.size();i++)
        {
            if(d[i]>=x)
            {
                ans.push_back(d[i]);
            }
        }
        reverse(ans.begin(),ans.end());
      ListNode* start=NULL;
      
for(int i=0;i<ans.size();i++)
{
    ListNode* cur= new ListNode;
    cur->val=ans[i];
   cur->next=start;
   start=cur;
}
        
        return start;
        
    }
};