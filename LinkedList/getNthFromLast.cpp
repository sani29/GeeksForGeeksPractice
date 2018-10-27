/* Question: n'th node from end of linked list
	Link: https://practice.geeksforgeeks.org/problems/nth-node-from-end-of-linked-list/1
*/

/* Should return data of n'th node from the end of linked list */
int getNthFromLast(Node *head, int n)
{
    Node *temp=head, *node2 = head;
    int count=n;
    
    while(count>0){
        count--;
        if(n!=0 && temp==NULL){
            return -1;
        }
        
        temp = temp->next;
    }
    while(temp!= NULL){
        temp = temp->next;
        node2 = node2->next;
    }
    return node2->data;
}
