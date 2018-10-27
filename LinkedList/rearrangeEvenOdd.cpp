/* Question: Rearrange a linked list
	Link: https://practice.geeksforgeeks.org/problems/rearrange-a-linked-list/1
*/

Node *rearrangeEvenOdd(Node *head)
{
   if(head==NULL )return NULL;
   
    Node *odd=head,*even=head->next,*evenst=head->next;
    while(odd->next!=NULL && even->next!=NULL)
    {
        odd->next=odd->next->next;
        odd=odd->next;
        even->next=even->next->next;
        even=even->next;
        
    }
    odd->next=evenst;

  
    return head;
}
