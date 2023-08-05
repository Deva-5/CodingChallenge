#include<bits/stdc++.h>
using namespace std;

struct ListNode {
     int val;
     ListNode *next;
     ListNode() : val(0), next(nullptr) {}
     ListNode(int x) : val(x), next(nullptr) {}
     ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution {
public:
    ListNode* insertGreatestCommonDivisors(ListNode* head) {
        vector<int>res;
        ListNode* temp = head;
        for(temp=head;temp->next!=NULL;temp=temp->next)
        {
            res.push_back(temp->val);
            res.push_back(__gcd(temp->val,temp->next->val));
        }
        res.push_back(temp->val);
        int n = res.size();
        ListNode* headn = new ListNode(res[0]);
        ListNode* tempn = headn;
        for(int i=1;i<n;i++)
        {
            tempn->next = new ListNode(res[i]);
            tempn=tempn->next;
        }
        return headn;
    }
};