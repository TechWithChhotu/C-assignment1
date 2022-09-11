//4.WAP to find the area of the circle. Take radius of circle from user as input and print the result in below given format.
//Expected output format � �Area of circle is A having the radius R�. Replace A with area & R with radius.

#include<iostream>
using namespace std;
int main(){
    int r;
   cout << "Enter radius of a circle: ";
   cin >> r;
   cout << "area of circle is " <<(3.14 * r * r )<< " having the radius "<<r;
   return 0;
}
