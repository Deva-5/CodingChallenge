#include<bits/stdc++.h>
using namespace std;

struct node
    {
        int data;
        struct node* next;
    
        node(int x){
            data = x;
            next = NULL;
        }
    
    }*head;

class Solution
{
    public:
    
    struct node *reverse (struct node *head, int k)
    { 
        // Complete this method
        node *curr = head;
        node *prev = NULL;
        node *next = NULL;
        int c = 0;
        while(curr!=NULL and k > c)
        {
            next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
            c++;
        }
        if(curr!=NULL)
        {
            head->next = reverse(curr,k);
        }
        return prev;
    }
};