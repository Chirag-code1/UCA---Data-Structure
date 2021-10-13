/* class LinkList
{
  int data;
  LinkList next;
  LinkList prev;
} */
class Result {
  static LinkList removeDupsDLL(LinkList head) {
	LinkList curr = head;
      LinkList temp = curr;

      while(curr!=null){
          temp = curr.next;
          while(temp!=null){
              if(temp.data == curr.data && temp.next!=null){  
                  temp.next.prev = curr;
                  curr.next = temp.next;
              } 
              else if(temp.data == curr.data && temp.next ==null){
                  curr.next = temp.next;
              }
              temp=temp.next;
              
          }
          curr = curr.next;
      }

    return head;
  }
}
