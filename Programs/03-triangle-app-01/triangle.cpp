#include<iostream>
#include<math.h>
#include "triangle.h"
#include "triangle.h"
using namespace std;

void show(const triangle &tri, const char *prefix)
{
    cout<<prefix<<": ["
        <<tri.s1<<","
        <<tri.s2<<","
        <<tri.s3<<"]"<<endl;
}

double perimeter(const triangle &tri)
{
    if(((tri.s1 + tri.s2) > tri.s3) && ((tri.s1 + tri.s3) > tri.s2) && ((tri.s2 + tri.s3) > tri.s1)) {
        return (tri.s1 + tri.s2 + tri.s3);
    }
    else {
        return -1;
    }
}

double area(const triangle &tri)
{
    if(((tri.s1 + tri.s2) > tri.s3) && ((tri.s1 + tri.s3) > tri.s2) && ((tri.s2 + tri.s3) > tri.s1)) {
        return (0.5 * tri.s1 * sqrt(pow(tri.s2,2) - pow(0.5 * tri.s1, 2)));
    }
    else {
        return -1;
    }
    
}