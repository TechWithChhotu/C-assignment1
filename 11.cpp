/*11.	WAP to take date as an input in below given format and convert the date format and display the result as given below.

User Input date format – “DD/MM/YYYY” (27/11/2022)

Output format –

“Day – DD , Month – MM , Year – YYYY” (Day – 11 ,Month – 9 , Year – 2022)
*/
#include<iostream>
using namespace std;
int main(){
    int day, month, year;
    char t;
    cout << "Enter Date formate “DD/MM/YYYY” (11/9/2022):  ";
    cin >> day >> t >> month >> t >> year;
    cout << "Day - " << day << " ,Month - " << month << " ,year - " << year;
}