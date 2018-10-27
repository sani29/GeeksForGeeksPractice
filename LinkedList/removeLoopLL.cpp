/* Question: Remove loop in Linked List
	Link: https://practice.geeksforgeeks.org/problems/remove-loop-in-linked-list/1
*/

/*The function removes the loop from the linked list if present*/
void removeTheLoop(Node *node)
{
     unordered_map<Node*, int> nMap;
     Node *lastNode, *temp=node;
     while(temp!=NULL){
         if(nMap.find(temp) == nMap.end()){
             nMap[temp]++;
             lastNode = temp;
             temp = temp->next;
         }
         else{
             lastNode->next = NULL;
             break;
         }
     }
}

