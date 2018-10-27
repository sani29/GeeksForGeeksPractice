/* Question: Circular Linked List
	Link: https://practice.geeksforgeeks.org/problems/circular-linked-list/1
*/

/* Should return true if linked list is circular, else false */
bool isCircular(Node *head)
{
   Node *slow = head, *fast = head;
   while(fast!=NULL && fast->next!=NULL){
       fast = fast->next->next;
       slow = slow->next;
       if(slow==fast){
           return true;
       }
   }
   return false;
}

