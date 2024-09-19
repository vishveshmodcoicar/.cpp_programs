/*
Author : Vishvesh Paresh Modcoicar
Date : 19/09/2024
*/
#include <iostream>

class Solution {
public:
    
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode dummy;
        ListNode * current=&dummy;
        int carry=0;

        while(l1!=nullptr || l2!=nullptr || carry!=0){
            int sum=carry;

            if(l1!=nullptr){
                sum+=l1->val;
                l1=l1->next;
            }
            if(l2!=nullptr){
                sum+=l2->val;
                l2=l2->next;
            }

            carry=sum/10;
            current->next=new ListNode(sum%10);
            current=current->next;
        }
        return dummy.next;
    }
};

void printList(ListNode* node) {
    while(node!=nullptr){
        cout<<node->val<<" ";
        node=node ->next;

    }
    cout<<endl;
};
