// #include<stdio.h>

// struct Rectangle{
//     int length;
//     int breadth;
// };

// void intialize(struct Rectangle *r,int l,int b)
// {
//     r->length=l;
//     r->breadth=b;
// }

// int area(struct Rectangle r)
// {
//     return r.length*r.breadth;
// }

// void changeLength(struct Rectangle *r,int l)
// {
//     r->length=l;
// }

// int main()
// {
//     struct Rectangle r;
//     intialize(&r,10,5);
//     area(r);
//     changeLength(&r,20);
// }



#include<stdio.h>
#include<bits/stdc++.h>
using namespace std;

class Rectangle{
private:
    int length;
    int breadth;

public:
Rectangle(int l,int b)
{
    length=l;
    breadth=b;
}

int area()
{
    return length*breadth;
}

void changeLength(int l)
{
    length=l;
}
};

int main()
{
    Rectangle r(10,5);
    // r.intialize(10,5);
    r.area();
    r.changeLength(20);
}