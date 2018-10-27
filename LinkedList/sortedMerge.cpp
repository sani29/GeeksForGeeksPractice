/* Question: Merge two sorted linked lists
	Link: https://practice.geeksforgeeks.org/problems/merge-two-sorted-linked-lists/1
*/

Node* SortedMerge(Node* head1,   Node* head2)
{
    if(head1 == NULL){
        return head2;
    }
    if(head2 == NULL){
        return head1;
    }
    Node *temp1 = head1, *temp2 = head2, *head=NULL,*temp=NULL;
    if(temp1->data <= temp2->data){
        head = temp1;
        head->next = SortedMerge(temp1->next,temp2);
    }
    else{
        head = temp2;
        head->next = SortedMerge(temp1,temp2->next);
    }
    return head;
}
