class Result {
  static void deleteNodeK(Node node) {
	if(node == null)
      return;
      if(node.next == null)
      return;
      Node item = node;
      item.data = item.next.data;
      item.next = item.next.next;
  }
}
