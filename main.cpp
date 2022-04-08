#include "dlist.h"


int main()
{
    dlist object;
    node* head1;
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
    
    head1 = object.getHead();
    
    //object.remove(head, 9);

    //int total = 0;
    //total = object.sumEven(head, 0);
    //cout << total << endl;

    //node* copy;
    //object.copyValue(head, copy, copy, 2);
    //print(copy);


    dlist copyList;
    copyList.copyValue2(head1, 2);
    copyList.display();
    //object.display();
    
    return 0;
}
