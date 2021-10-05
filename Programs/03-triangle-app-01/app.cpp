#include<iostream>
#include "triangle.h"
using namespace std;

void test(const triangle &tri, const char *prefix = "Test Traingle")
{
    show(tri,prefix);
    if(perimeter(tri) != -1)
        cout<<"Perimeter = "<<perimeter(tri)<<endl;
    else
        cout<<"Invalid Triangle"<<endl;
    
    if(area(tri) != -1)
        cout<<"Area = "<<area(tri)<<endl;
    else
        cout<<"Invalid Triangle"<<endl;
}
int main(int argc, char const *argv[])
{
    cout<<"size of triangle = "<<sizeof(triangle)<<endl;
    triangle t1 = {3,4,5};
    test(t1,"T1");
    triangle t2 = {1,1,1};
    test(t2,"T2");

    triangle t3 = {1,1,16};
    test(t3,"T3");

    triangle t4 = {1,-1,16};
    test(t4,"T4");
    return 0;
}
