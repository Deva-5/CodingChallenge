#include<bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    struct Node* next;
    
    Node(int x){
        data = x;
        next = NULL;
    }
}; 


class Solution
{
    public:
    //Function to sort a linked list of 0s, 1s and 2s.
    Node* segregate(Node *head) {
        // Add code here
        Node* temp=head;
       int zer=0;
       int one=0;
       int two=0;
       while(temp!=NULL){
           if(temp->data==0){
               zer++;
           }
           else if (temp->data==1){
               one++;
           }
           else{
               two++;
           }
           temp=temp->next;
       }
       Node* tp=head;
       while(tp!=NULL){
           while(zer--){
               tp->data=0;
               tp=tp->next;
           }
            while(one--){
               tp->data=1;
               tp=tp->next;
           }
            while(two--){
               tp->data=2;
               tp=tp->next;
           }
           
       }
       return head;
        
    }
};