/*You are given two non-empty linked lists representing two non-negative integers. The digits are stored in reverse order and each of their nodes contain a single digit. Add the two numbers and return it as a linked list.

You may assume the two numbers do not contain any leading zero, except the number 0 itself.

Example:

Input: (2 -> 4 -> 3) + (5 -> 6 -> 4)
Output: 7 -> 0 -> 8
Explanation: 342 + 465 = 807.
*/

#include<iostream>

using namespace std;

 struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
 };

 class Solution 
 {
    public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {

        ListNode* res = new ListNode( (l1->val+ l2+val) % 10 );

        ListNode* curr =  res;

        int carry = (l1->val+l2->val)/10;

         l1 = l1->next;
         l2 = l2->next;

         while( l1 != NULL || l2 != NULL)
         {
            curr->next = new ListNode(carry);
            curr = curr->next;

            if(l1 != NULL)
            {
                curr->val += l1->val;
                l1 = l1->next;
            }    

            is(l2 != NULL)
            {
                curr->val += l2->val;
                l2 = l2->next;
            }

            carry = curr->val /10;
            curr->val = curr->val %10;

         }   
        
        if(carry > 0)
        {
            curr->next = new ListNode(carry);
        }
    }