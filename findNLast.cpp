int findNLast(Node* head,int n){
   int length=1;
    Node* first = head;
    Node* second = head;

    if(head == NULL)
    return -1;

    while(head->next!=NULL){
    length++;
    head = head->next;
    }

    if(n>length)
    return head->data;

    for(int i=0 ; i<n; i++)
        second = second->next;

        while(second!=NULL){
            first = first->next;
            second = second->next;
        }
        
        return first->data;
  
}
