#include "dlist.h"


int main()
{
    dlist object;
    node* head;
    object.build();
    object.display();

    //PLEASE PUT YOUR CODE HERE to call the function assigned

    /*
    object.buildMyList(9);
    object.buildMyList(9);
    object.buildMyList(2);
    object.buildMyList(2);
    object.buildMyList(3);
    object.buildMyList(9);
    object.display();
    */
    
    head = object.getHead();
    
    //object.remove(head, 9);

    //int total = 0;
    //total = object.sumEven(head, 0);
    //cout << total << endl;

    node* copy;
    object.copyValue(head, copy, copy, 2);
    print(copy);
    
    //object.display();
    
    return 0;
}
