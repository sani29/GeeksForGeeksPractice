/* Question: Delete Middle of Linked List
	Link: https://practice.geeksforgeeks.org/problems/delete-middle-of-linked-list/1
*/

// Deletes middle of linked list and returns head of the modified list
Node* deleteMid(Node *head)
{
    if(head==NULL){
        return NULL;
    }if(head->next==NULL){
        delete head;
        return NULL;
    }
     Node *fast=head, *slow=head, *curr=NULL;
     while(fast!=NULL && fast->next!=NULL){
         fast = fast->next->next;
         curr = slow;
         slow = slow->next;
     }
     curr->next = slow->next;
     delete(slow);
     return head;
}
