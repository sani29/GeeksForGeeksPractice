/* Question: Finding middle element in a linked list
	Link: https://practice.geeksforgeeks.org/problems/finding-middle-element-in-a-linked-list/1
*/

/* Should return data of middle node. If linked list is empty, then  -1*/
int getMiddle(Node *head)
{
    if(head==NULL){
        return -1;
    }
   Node *fast=head, *slow=head;
   
   while( fast!=NULL && fast->next!=NULL ){
       slow=slow->next;
       fast = fast->next->next;
   }
   return slow->data;
}

