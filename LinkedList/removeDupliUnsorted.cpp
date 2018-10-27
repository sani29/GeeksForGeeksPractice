/* Question: Remove duplicates from an unsorted linked list
	Link: https://practice.geeksforgeeks.org/problems/remove-duplicates-from-an-unsorted-linked-list/1
*/

Node *removeDuplicates(Node *start)
{
    unordered_set<int> seen; 
    
    struct Node *curr = start; 
    struct Node *prev = NULL; 
    while (curr != NULL) 
    {
        if (seen.find(curr->data) != seen.end()) 
        { 
           prev->next = curr->next; 
           delete (curr); 
        } 
        else
        { 
           seen.insert(curr->data); 
           prev = curr; 
        } 
        curr = prev->next; 
    }
    return start;
}
