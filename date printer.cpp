// Chapter 10, Programming Challenge 13: Date Printer
// Write a program that reads a string from the user containing
// a date in the format mm/dd/yyyy. It should print the date
// in the form March 12, 2014. Validate input.
//
// Date:4/19/2022
//
#include <iostream>
#include <string>
#include <cstdlib>
using namespace std;

// Prototype
string format(string);

int main()
{
    // The following string will hold the user's input.
    string userDate;

    // The following string will hold the formatted date.
    string formattedDate;

    // Get a date from the user.
    cout << "Enter a date in the form mm/dd/yyyy: ";
    cin >> userDate;

    // Format the date.
    formattedDate = format(userDate);

    // Display the formatted date.
    cout << formattedDate << endl;

    return 0;
}

// The format function accepts a date in the form mm/dd/yyyy
// as a string, and returns the date in the form March 12, 2014.
string format(string date)
{
    
    // YOUR CODE HERE!!!!
    string month[] = {"January","February", "March","April","May","June","July","August", "September","October","November","December"};

string formattedDate;

if(date.length()!=10){
cout << "Invalid date format!\n";
return date;
}

    if(date.length()==0){
        formattedDate = month[0];
}
else if(date.length()==1){
    formattedDate = month[1];
}
else if(date.length()==2){
    formattedDate = month[2];
}
else if(date.length()==3){
    formattedDate = month[3];
}
else if(date.length()==4){
    formattedDate = month[4];
}
else if(date.length()==5){
    formattedDate = month[5];
}
else if(date.length()==6){
    formattedDate = month[6];
}
else if(date.length()==7){
    formattedDate = month[7];
}
else if(date.length()==8){
    formattedDate = month[8];
}
else if(date.length()==9){
    formattedDate = month[9];
}
else if(date.length()==10){
    formattedDate = month[10];
}
else if(date.length()==11){
    formattedDate = month[11];
}

if( stoi(date.substr(0,2)) > 12 || stoi(date.substr(0,2)) < 1 ){
cout << "Invalid month!\n";
return date;
}



formattedDate=month[stoi(date.substr(0,2))-1];
int date_format = stoi(date.substr(3,2));
  

formattedDate = formattedDate + " " + to_string(date_format)+", "+date.substr(6,4);
  

return formattedDate;
}
