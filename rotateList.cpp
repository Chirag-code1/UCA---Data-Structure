/* The struct for Node is
struct Node
{
  int data;
  struct Node *next;
};  */

struct Node* rotateList(struct Node* head, int k)
{
	if (head == NULL || k < 1)
      	return head;
  	
  	struct Node *newHead = NULL;
  	struct Node *curr = head;
  	
  	int i = 1;
  	while (i < k && curr != NULL)
  	{
  	    curr = curr->next;
  	    i++;
  	}
  	
  	// if k is greater or equal to the size of the list, 
  	// then it will remain unchanged
  	if (curr == NULL || curr->next == NULL)
  	    return head;
  	else
  	{
  	    struct Node* kthNode = curr;
  	    curr = curr->next;
  	    
  	    // (k+1)th node will become the head node of the rotated list
        newHead = kthNode->next;
          
        // kth node will become the last node of the rotated list
        kthNode->next = NULL;
  	}
    
    // go to the last node
    while (curr->next != NULL)
        curr = curr->next;
    
    // last node will point to the head of the original list
    curr->next = head;
    
  	return newHead;
}
