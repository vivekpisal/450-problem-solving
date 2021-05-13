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
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        ListNode* ans = NULL;
        priority_queue< pair<int,ListNode*> ,vector< pair<int,ListNode*> >, greater< pair<int,ListNode*>> > minh;
        if(lists.size() == 0)
            return ans;
        auto temp = new ListNode();
        ans = temp;
        for(int i=0;i<lists.size();i++)
        {
            if(lists[i]!=NULL)
                minh.push( {lists[i]->val , lists[i]} );
        }
        while(!minh.empty())
        {
            auto top = minh.top();
            minh.pop();
            temp->next = top.second;
            temp=temp->next;
            if(top.second->next != NULL)
                minh.push( {top.second->next->val, top.second->next} );
        }
        return ans->next;
    }
};