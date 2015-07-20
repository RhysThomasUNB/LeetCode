#include "IntersectionLists.h"

ListNode *getIntersectionNode(ListNode *headA, ListNode *headB)
{
     while(headA != NULL || headB != NULL)
     {
         if(headA->val == headB->val)
             return headA;

         else if(headA->val < headB->val)
         {
             if(headA->next != NULL)
                 headA = headA->next;
             else
               return NULL;
         }
         else
         {
             if(headB->next != NULL)
                 headB = headB->next;
             else
                 return NULL;
         }
     }
     return NULL;
 }

 int main()
 {
   ListNode *headA = new ListNode(0);
   ListNode *headA1 = new ListNode(2);
   headA->next = headA1;
   ListNode *headB = new ListNode(1);
   ListNode *headB1 = new ListNode(3);
   headB->next = headB1;

   ListNode *result = getIntersectionNode(headA, headB);
   if(result == NULL)
     printf("NULL");
   else
     printf("VAL: %d", result->val);
   return 0;
 }
