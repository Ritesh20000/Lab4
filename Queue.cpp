//including library
#include <iostream>
#include "ll.cpp"
using namespace std;

class QueueLl
{
public:

  Node * end;

  Node *front;
  LinkedList l1;
    Queue ()
  {
    front = l1.head;
    end = l1.tail;
  }

  void Enqueue (int value) l1.insert (value);

  front = l1.head;
}

void
Dequeue ()
{

  l1.dltAt (1);

  end = l1.tail;
}

bool
isEmpty ()
{
  if (front == NULL)
    return true;
  return false;
}

int
size ()
{
  return l1.countItem ();
}

void
display ()
{
  l1.display ();
}
};

int
main ()
{
  QueueLl q1;
  if (q1.isEmpty () == 1)
    {
      cout << "THe queue is empty" << endl;
    }

  for (int i = 1; i <5; i++)
    {
      q1.Enqueue (i);
    }
  q1.display ();
  q1.Dequeue ();
  q1.display ();
  cout << "The total number of elements in queue " << q1.size () << endl;
  q1.Dequeue ();
  q1.display ();
  q1.Dequeue ();
  q1.display ();
  q1.Dequeue ();
  q1.display ();
  cout << "The total number of elements in queue " << q1.size () << endl;

}
