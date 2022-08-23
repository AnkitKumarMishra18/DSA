class Solution {
public:
    ListNode* reverseList(ListNode* head){
        ListNode* newhead = NULL;
        while(head!=NULL){
            ListNode* next = head->next;
            head->next = newhead;
            newhead = head;
            head = next;
        }
        return newhead;
    }
    bool isPalindrome(ListNode* head) {
        if(head==NULL||head->next==NULL)
            return true;
        
        ListNode *fast = head;
        ListNode *slow = head;
        
        while(fast->next && fast->next->next){
            slow=slow->next;
            fast= fast->next->next;
        }
        slow->next=reverseList(slow->next);
        slow=slow->next;
        
        while(slow!=NULL){
            if(head->val!=slow->val)
                return false;
            head=head->next;
            slow=slow->next;
        }
        return true;
    }
};