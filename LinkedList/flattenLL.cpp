/* Question: Flattening a Linked List
	Link: https://practice.geeksforgeeks.org/problems/flattening-a-linked-list/1
*/

Node *merger(Node *a, Node *b){
    if(a==NULL){
        return b;
    }
    if(b==NULL){
        return a;
    }
    Node*res;
    if(a->data<b->data){
        res = a;
        res->bottom = merger(a->bottom, b);
    }
    else{
        res = b;
        res->bottom = merger(a,b->bottom);
    }
    return res;
}

/*  Function which returns the  root of 
    the flattened linked list. */
Node *flatten(Node *root)
{
   if(root==NULL || root->next==NULL){
       return root;
   }
   
   return merger(root, flatten(root->next));
}
