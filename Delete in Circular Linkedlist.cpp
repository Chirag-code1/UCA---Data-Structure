static LinkList deleteBeg(LinkList head)
{
  if(head==null)
    return head;
  LinkList tmp=head.next;
  while(tmp.next!=head)
    tmp=tmp.next;
  tmp.next=tmp.next.next;
  head=tmp.next;
  return head;
}
//delete End :
static LinkList deleteEnd(LinkList head)
{
  if(head==null)
    return head;
  LinkList tmp=head.next;
  while(tmp.next.next!=head)
    tmp=tmp.next;
  tmp.next=tmp.next.next;
  return head;
}
