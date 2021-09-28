int findMiddle(Node* head) {
  if (head == NULL)
    return -1;

    Node* slow = head;
    Node* fast = head;

       // while( fast!=NULL && fast->next!=NULL){ to handle Odd LL & return 2nd middle element in case of Even LinkedList
      // while( fast->next->next!=NULL && fast->next!=NULL){  to handle Odd LL & to return 1nd middle element in case of Even LinkedList
     
      while( fast!=NULL && fast->next!=NULL){  
      slow = slow->next;
        fast = fast->next->next;
    	}
    return slow->data;
}
