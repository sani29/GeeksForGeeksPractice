/* Question: Reorder List
	Link: https://practice.geeksforgeeks.org/problems/reorder-list/1
*/

void reverse(Node** head){
    Node *prev = NULL, *curr = *head, *next;
    while(curr){
        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
        
    }
    *head = prev;
}

void reorderList(Node* head) 
{
    Node *fast=head, *slow=head;
    Node *head1 = head, *head2 = NULL;
    
    while(fast!=NULL && fast->next != NULL){
        fast = fast->next->next;
        slow = slow->next;
    }
    head2 = slow->next;
    slow->next = NULL;
    
    reverse(&head2);
    head = newNode(0);
    Node *temp = head;
    while(head1 || head2){
        if(head1){
            temp->next = head1;
            head1 = head1->next;
            temp = temp->next;
        }
        if(head2){
            temp->next = head2;
            head2 = head2->next;
            temp = temp->next;
        }
    }
    head = head->next;
}
