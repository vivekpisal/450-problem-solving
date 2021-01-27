struct ListNode {
      int val;
      ListNode *next;
      ListNode() : val(0), next(nullptr) {}
      ListNode(int x) : val(x), next(nullptr) {}
      ListNode(int x, ListNode *next) : val(x), next(next) {}
};


class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* temp = new ListNode(0);
        ListNode* head = temp;
        int carry = 0;
        int addition = 0;
        while(l1!=NULL && l2!=NULL)
        {
            addition = l1->val + l2->val + carry;
            carry=0;
            if(addition > 9)
            {
                carry = addition / 10;
                addition = addition % 10;
            }
            temp->next = new ListNode(addition);
            temp = temp->next;
            l1 = l1->next;
            l2 = l2->next;
        }
        while(l1!=NULL)
        {
            if(carry == 0)
            {
                temp->next = new ListNode(l1->val);
            }
            else
            {
                addition = l1->val + carry;
                carry=0;
                if(addition > 9)
                {
                    carry = addition / 10;
                    addition = addition % 10;
                }
                temp->next = new ListNode(addition);
            }
            temp=temp->next;
            l1 = l1->next;
        }
        while(l2!=NULL)
        {
            if(carry == 0)
            {
                temp->next = new ListNode(l2->val);
            }
            else
            {
                addition = l2->val + carry;
                carry=0;
                if(addition > 9)
                {
                    carry = addition / 10;
                    addition = addition % 10;
                }
                temp->next = new ListNode(addition);
            }
            temp=temp->next;
            l2 = l2->next;
        }
        if(carry!=0)
            temp->next = new ListNode(carry);
        return head->next;
    }
};