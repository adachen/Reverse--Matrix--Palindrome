/*************************************************************************************************
Title: Strings
Author: Ada Chen
Created On: October 20th, 2014
Description: Allows user to pick from a menu which takes in a string input and outputs its reverse,
takes in an integer and character and outputs an n x 2n matrix of the character, or checks whether
a word is a palindrome or not.
Purpose: Practices using arrays, strings, and functions.
Usage: Choose an option from the menu, follow the directions.
****************************************************************************************************/
#include <iostream>
using namespace std;
//function prototypes
string reverse();
void integerchar();
void palindrome();

int main(){
//variable declarations
int option;
//creation of the menu
cout << "1. Given a string input, output its reverse.\n2. Given an integer n and an input character c, print an n x2n matrix of C's. \n";
cout << "3. Given an input string, output whether the string is a palindrome or not. \n4. Quit \n";
cout << "Please enter the option of your choice from the above menu (1, 2, 3, or 4) \n";
cin >> option;
//checks the option input of user
while (option == 0 || option > 4){
    cout << "Please re-enter a valid option \n";
    cin >> option;
}
//if statements for each option, if 1, it executes function reverse
    if (option == 1){
        reverse();
    }
//if 2, executes function integerchar
    else if (option == 2){
        integerchar();
    }
//if 3, executes function palindrome
    else if (option == 3){
        palindrome();
    }
//if 4, exits the program
    else if (option == 4){
        cout << "Program will Quit \n";
        return 0;
    }

}

//function definitions
string reverse(){
string word;
cout<< "Input a word \n";
cin>> word;
int length = word.length();
int x=0;
cout<< "The reverse of the word is: ";
    while (x<length){
        cout<<word[length-1];
        length--;
    }
        cout<<endl;
    return word;
}

void integerchar(){
int n;
char c;
cout<< "Input an integer value \n";
cin>> n;
cout<< "Enter any character \n";
cin>> c;
int x,y;
cout<< "The matrix is: \n";
    for (x=1; x<=2*n; x++){
        for (y=1; y<=n; y++){
        cout<<c;
        }
        cout <<endl;
    }
}

void palindrome(){
string word;
cout<< "Input a word \n";
cin>>word;
    if (word == string(word.rbegin(), word.rend())){
        cout << "This is a palindrome!";
    }
    else{
        cout << "This is not a palindrome!";
    }
}


















