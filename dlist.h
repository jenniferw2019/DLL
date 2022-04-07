//doubly linked list
#include <iostream>
#include <cstring>
#include <cctype>
#include <cstdlib>
using namespace std;


struct node
{
    int data;		//some questions use a char * data;
    node * previous;
    node * next;
};

void print(node* current);

class dlist
{
    public:
        //These functions are already written
        dlist();         //supplied
        ~dlist();        //supplied
        void build();   //supplied
        void display(); //supplied
        

     /* *****************YOUR TURN! ******************************** */
     /* place your prototype here */
  void buildMyList(int newData);
  void remove(node* current, int number);
  node* getHead();
  int sumEven(node* current, int sum);
  void copyValue(node* current, node* &copyNode, node* copycurrent, int number);
  
     private:
         node * head;   //notice there is both a head
         node * tail;   //and a tail, common for DLL
};
