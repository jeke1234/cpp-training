#pragma once
#include<iostream>
using namespace std;

class Node {
    private:
        int value;
        Node *next;
    public:
        Node(int value, Node *next = NULL)
        {
            this->value = value;
            this->next = next;
        }
        int getValue(void)
        {
            return value;
        }
        void setValue(int value)
        {
            this->value = value;
        }
        Node * getNextPtr(void)
        {
            return next;
        }
        void setNextPtr(Node *next)
        {
            this->next = next;
        }
};