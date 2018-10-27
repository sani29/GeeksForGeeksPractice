/* Question: Delete keys in a Linked list
	Link: https://practice.geeksforgeeks.org/problems/delete-keys-in-a-linked-list/1
*/

/*You are required to complete below method*/
Node* deleteAllOccurances(Node *head_ref,int key)
{
    Node *temp = head_ref, *prev; 
  
    // If head node itself holds the key or multiple occurrences of key 
    while (temp != NULL && temp->data == key) 
    { 
        head_ref = temp->next;   // Changed head 
        free(temp);               // free old head 
        temp = head_ref;         // Change Temp 
    } 
  
    // Delete occurrences other than head 
    while (temp != NULL) 
    { 
        // Search for the key to be deleted, keep track of the 
        // previous node as we need to change 'prev->next' 
        while (temp != NULL && temp->data != key) 
        { 
            prev = temp; 
            temp = temp->next; 
        } 
  
        // If key was not present in linked list 
        if (temp == NULL) return head_ref; 
  
        // Unlink the node from linked list 
        prev->next = temp->next; 
  
        free(temp);  // Free memory 
  
        //Update Temp for next iteration of outer loop 
        temp = prev->next; 
    }
    return head_ref;
}

