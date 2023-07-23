class Solution
{
    public:
    //Function to remove duplicates from unsorted linked list.
    Node * removeDuplicates( Node *head) 
    {
     // your code goes here
     unordered_set<int>st;
     Node *temp = head;
     st.insert(head->data);
     while(temp->next!=NULL)
     {
         if(st.find(temp->next->data)!=st.end())
         {
             Node* dummy = temp->next;
             temp->next = dummy->next;
             //free(dummy);
         }
         else
         {
             temp=temp->next;
             st.insert(temp->data);
        }
     }
     return head;
    }
};