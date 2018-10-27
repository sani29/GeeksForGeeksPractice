/* Question: Remove duplicate element from sorted Linked List
	Link: https://practice.geeksforgeeks.org/problems/remove-duplicate-element-from-sorted-linked-list/1
*/

Node *removeDuplicates(Node *root)
{
 Node *head=root,*p;
 while(head)
 {
     if(head->next==NULL)
     break;
     p=head->next;
     while(p && p->data==head->data)
     p=p->next;
     head->next=p;
     head=head->next;
 }
 return root;
}
