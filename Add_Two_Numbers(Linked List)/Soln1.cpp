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
        ListNode* head=new ListNode(0);
        ListNode* ptr=head;
        int sum=0;
        int rem=0;
        int digit;
        while(l1 || l2 || rem){
            sum=rem;
            if(l1){
                sum+=l1->val;
                l1=l1->next;
            }
            if(l2){
                sum+=l2->val;
                l2=l2->next;
            }
            if(sum>9){
                digit=sum%10;
                rem=sum/10;
            }
            else{
                digit=sum;
                rem=0;
            }
            ptr->next=new ListNode(digit);
            ptr=ptr->next;
           
        }
        
      return head->next;  
    }
};
