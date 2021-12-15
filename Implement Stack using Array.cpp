class CQStack
{
  public int maxSize; // size of stack array
  public int[] stackArray;
  public int top; // top of stack
  public CQStack(int s) // constructor
  { 
    stackArray = new int [s];
    maxSize = s;
    top = -1;
  }
  public void push(int j) // put item on top of stack
  {
     if(isFull())
     return;
   stackArray[++top]=j;
  }
  public int pop() // take item from top of stack
  {
    if(isEmpty())
      return -1;
    else {
      top--;
      return stackArray[top+1];
    }
  }
  public boolean isEmpty() // true if stack is empty
  {
    if(top == -1)
      return true; 
    return false;
  }
  public boolean isFull() // true if stack is full
  {
    if(top == maxSize-1)
      return true;
    return false;
  }
}
