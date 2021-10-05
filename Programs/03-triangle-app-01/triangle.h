#pragma once
struct triangle
{
    double s1,s2,s3;
};

double perimeter(const triangle &tri);
double area(const triangle &tri);
void show(const triangle &tri, const char *prefix = "Triangle");
