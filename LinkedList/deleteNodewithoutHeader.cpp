/* Question: Delete without head pointer
	Link: https://practice.geeksforgeeks.org/problems/delete-without-head-pointer/1
*/

// This function should delete node from linked list. The function
// may assume that node exists in linked list and is not last node
void deleteNode(Node *node)
{
   Node *temp= node->next;
   int t = temp->data;
   temp->data = node->data;
   node->data = t;
   Node *s = node->next;
   node->next = node->next->next;
   delete(s);
}
