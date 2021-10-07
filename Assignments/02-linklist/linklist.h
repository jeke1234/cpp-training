#pragma once
#include<iostream>
#include "node.h"
using namespace std;

#define NODE_CREATION_SUCCESS 0
#define ERROR_INVALID_POS     -1
#define ERROR_NODE_CREATION   -2

class linklist{
    private:
        Node *head;
        int NodeCount;
    public:
        linklist()
        {
            head = NULL;
            NodeCount = 0;
        }
        int AddItemAtEnd(int value)
        {
            Node *newNode = new Node(value);
            if(newNode == NULL)
                return ERROR_NODE_CREATION;
            if(head == NULL)
            {
                head = newNode;
                NodeCount++;
            }
            else
            {
                Node *ptr;
                for(ptr = head; ptr->getNextPtr() != NULL;ptr = ptr->getNextPtr());
                ptr->setNextPtr(newNode);
                NodeCount++;
            }
            return NODE_CREATION_SUCCESS;
        }
        int AddItemAtPos(int value, int pos)
        {
            if(pos < 0 || pos > NodeCount)
                return ERROR_INVALID_POS;
            Node *newNode = new Node(value);
            if(newNode == NULL)
                return ERROR_NODE_CREATION;
            if(head == NULL)
            {
                head = newNode;
                NodeCount++;
            }
            else
            {
                Node *ptr = head;
                if(pos == 0)
                {
                    newNode->setNextPtr(head);
                    head = newNode;
                    NodeCount++;
                }
                else
                {
                    for(int index = 0; index < pos-1; index++)
                    {
                        ptr = ptr->getNextPtr();
                    }
                    newNode->setNextPtr(ptr->getNextPtr());
                    ptr->setNextPtr(newNode);
                    NodeCount++;
                }
            }
            return NODE_CREATION_SUCCESS;
        }
        void DisplayItems(void)
        {
            // we need to see where we can move this display function.
            if(head == NULL)
            {
                cout<<"List is empty"<<endl;
                return;
            }
            Node *ptr;
            cout<<"List of Items: ";
            for(ptr = head; ptr != NULL;ptr = ptr->getNextPtr())
            {
                cout<<ptr->getValue()<<"\t";
            }
            cout<<endl;
        }
        int NumberOfItems(void)
        {
            return NodeCount;
        }
};