#include <iostream>
#include<conio.h>
using namespace std;

void drawcircle();
void drawTriangle();
void drawrectangle();

int main()
{
   drawcircle();
   drawTriangle();
   drawrectangle();

    getch();
    return 0;
}
void drawcircle()
{
cout<<"\n    *   *  ";
cout<<"\n  *        * ";
cout<<"\n  *         * ";
cout<<"\n   *       * ";
cout<<"\n    *  *  * ";
cout<<endl;
}

void drawTriangle()
{
    cout<<"\n       /\\   ";
    cout<<"\n      /  \\   ";
    cout<<"\n     /    \\   ";
    cout<<"\n    /      \\   ";
    cout<<"\n   /        \\   ";
    cout<<"\n  /__________\\  ";
}
void drawrectangle()
{

   cout<<"\n  ------------------ ";
   cout<<"\n  |                | ";
   cout<<"\n  |                | ";
   cout<<"\n  |                | ";
   cout<<"\n  ------------------ ";
}


