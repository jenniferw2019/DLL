#include <iostream>
#include "dlist.h"

using namespace std;

void dlist::buildMyList (int newData)
{
  node* newNode = new node();
  newNode->data = newData;
  
  node* current = head;
  if (head == NULL)
    {
      head = newNode;
      head->previous = NULL;
      head->next = NULL;
      tail = head;
    }
  else
    {
      while (current->next != NULL)
	{
	  current = current->next;
	}
      current->next = newNode;
      newNode->previous = current;
      newNode->next = NULL;
      tail = newNode;
    }
}

node* dlist::getHead()
{
  return head;
}

void dlist::remove(node* current, int newData)
{
  if (head->data == newData)
    {
      node* temp = head;
      head = head->next;
      delete temp;
      head->previous = NULL;
      current = head;
      remove(current, newData);
    }
  else
    {
      if (current != tail)
	{
	  if (current->data == newData)
	    {
	      node* temp = current;
	      node* pre = current->previous;
	      pre->next = current->next;
	      current = current->next;
	      current->previous = pre;
	      delete temp;
	      remove(current, newData);
	    }
	  else
	    {
	      current = current->next;
	      remove(current, newData);
	    }
	}
      else
	{
	  if (tail->data == newData)
	    {
	      node* temp = current;
	      node* pre = current->previous;
	      pre->next = NULL;
	      tail = pre;
	      delete temp;
	    }
	}
    }
}

int dlist::sumEven(node* current, int sum)
{
  if (current != tail)
    {
      if ((current->data % 2) == 0)
	{
	  sum = sum + current->data;
	  current = current->next;
	  sum = sumEven(current, sum);
	}
      else
	{
	  current = current->next;
	  sum = sumEven(current, sum);
	}
    }
  return sum;
}

/*
void dlist::copyValue(node* current, node* &copyNode, node* copycurrent, int number)
{
  if (current != tail)
    {
      if (current->data != number)
	{
	  if (copyNode == NULL)
	    {
	      node* temp = new node();
	      temp->data = current->data;
	      copyNode = temp;
	      copyNode->next = NULL;
	      current = current->next;
	      copycurrent = copyNode;
	      copyValue(current, copyNode, copycurrent, number);
	    }
	  else
	    {
	      node* temp = new node();
	      temp->data = current->data;
	      copycurrent->next = temp;
	      copycurrent = copycurrent->next;
	      copycurrent->next = NULL;
	      current = current->next;
	      copyValue(current, copyNode, copycurrent, number);
	    }
	}
      else
	{
	  current = current->next;
	  copyValue(current, copyNode, copycurrent, number);
	}
    }
  else
    {
      if (tail->data != number)
	{
	  node* temp = new node();
	  temp->data = current->data;
	  copycurrent->next = temp;
	  (copycurrent->next)->next = NULL;
	}
    }
}
*/

void print(node* current)
{
  if (current != NULL)
    {
      cout << current->data << " ";
      current = current->next;
      print(current);
    }
  else
    {
      cout << endl;
    }
}

void dlist::copyValue2(node* current, int number)
{
  if (current->next != NULL)
    {
      if ((current->data) != number)
	{
	  if (head == NULL)
	    {
	      node* temp = new node();
	      temp->data = current->data;
	      head = temp;
	      head->previous = NULL;
	      tail = head;
	      tail->next = NULL;
	      current = current->next;
	      copyValue2(current, number);
	    }
	  else
	    {
	      node* temp = new node();
	      temp->data = current->data;
	      tail->next = temp;
	      node* pre = tail;
	      tail = tail->next;
	      tail->next = NULL;
	      tail->previous = pre;
	      current = current->next;
	      copyValue2(current, number);
	    }
	}
      else
	{
	  current = current->next;
	  copyValue2(current, number);
	}
    }
  else
    {
      if ((current->data) != number)
	{
	  node* temp = new node();
	  temp->data = current->data;
	  tail->next = temp;
	  node* pre = tail;
	  tail = tail->next;
	  tail->previous = pre;
	}
    }
  
}
