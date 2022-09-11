/*12.	WAP to take time as an input in below given format and convert the time format and display the result as given below.

User Input date format – “HH:MM” Output format – “HH hour and MM Minute” Example –
“11:25” converted to “11 Hour and 25 Minute”*/
#include<iostream>
using namespace std;
int main(){
    int HH, MM;
    char t;
    cout << "Enter time (HH:MM): ";
    cin >> HH >> t >> MM;
    cout << "\n\t" << HH << " : " << MM;
}
