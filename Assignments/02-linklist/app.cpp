#include "linklist.h"

int main(int argc, char const *argv[])
{
    linklist link1;
    int item = 20;
    int pos = 0;

    if(link1.AddItemAtEnd(item) == NODE_CREATION_SUCCESS)
        cout<<"Item ("<<item<<") added successfully at the end"<<endl;
    else
        cout<<"unable to add item ("<<item<<") at the end"<<endl;
    item = 30;
    if(link1.AddItemAtEnd(item) == NODE_CREATION_SUCCESS)
        cout<<"Item ("<<item<<") added successfully at the end"<<endl;
    else
        cout<<"unable to add item ("<<item<<") at the end"<<endl;
    item = 40;
    if(link1.AddItemAtEnd(item) == NODE_CREATION_SUCCESS)
        cout<<"Item ("<<item<<") added successfully at the end"<<endl;
    else
        cout<<"unable to add item ("<<item<<") at the end"<<endl;
    item = 50;
    if(link1.AddItemAtEnd(item) == NODE_CREATION_SUCCESS)
        cout<<"Item ("<<item<<") added successfully at the end"<<endl;
    else
        cout<<"unable to add item ("<<item<<") at the end"<<endl;
    

    item = 8;
    pos = 0;
    if(link1.AddItemAtPos(item,pos) == NODE_CREATION_SUCCESS)
        cout<<"Item ("<<item<<") added successfully at pos<"<<pos<<">"<<endl;
    else
        cout<<"unable to add item ("<<item<<") to the List at pos<"<<pos<<">"<<endl;
    
    item = 9;
    pos = 3;
    if(link1.AddItemAtPos(item,pos) == NODE_CREATION_SUCCESS)
        cout<<"Item ("<<item<<") added successfully at pos<"<<pos<<">"<<endl;
    else
        cout<<"unable to add item ("<<item<<") to the List at pos<"<<pos<<">"<<endl;

    link1.DisplayItems();
    cout<<"Number of items: "<<link1.NumberOfItems()<<endl;

    return 0;
}
