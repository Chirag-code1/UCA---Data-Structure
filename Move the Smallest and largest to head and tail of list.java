/* class Node
{
  int data;
  Node next;
} */

	static Node shiftMinToHead(Node head)
    {
    	Node minNode = head;
      	Node minPrevNode = null;
        Node curr = head.next;
      	Node prev = head;
      
        while (curr != null)
        {
        	if (curr.data < minNode.data)
            {
            	minNode = curr;
            	minPrevNode = prev;
            }
          	prev = curr;
          	curr = curr.next;
        }
      
      	if (minNode != head)
        {
        	minPrevNode.next = minNode.next;
          	minNode.next = head;
          	head = minNode;
        }
        
        return head;
    }
    
  static Node shiftMaxToTail(Node head)
    {
    	Node maxNode = head;
      	Node maxPrevNode = null;
        Node curr = head.next;
      	Node prev = head;
      
        while (curr != null)
        {
        	if (curr.data > maxNode.data)
            {
            	maxNode = curr;
            	maxPrevNode = prev;
            }
          	prev = curr;
          	curr = curr.next;
        }
      
      	if (maxNode != prev)
        {
        	maxPrevNode.next = maxNode.next;
          	maxNode.next = null;
          	prev.next = maxNode;
        }
        
        return head;
    }
    

static Node shiftSmallLarge(Node head)
{
	if (head == null || head.next == null)
          	return head;
      	
      	head = shiftMinToHead(head);
      	head = shiftMaxToTail(head);
      	
      	return head;
}
