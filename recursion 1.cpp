/*
     Name:      Krishna rana 
     Course:    CIS 260 ME1
     Date:      02/08/2016
     Program:   learning recursion
     Description:  This program accepts a string of more than 15 character and prints the
	 			   the string backward one character at a time.
*/
#include <iostream>//Standard Input/output streams libary
#include <string>//Header providing String classes
using namespace std;
//Function Prototype
void print(int, const string);
//Main() Function Defination
//This function runs the whole program with step by step intruction written below.
//main() has calls and parameters of other function in the program.
int main()
{	
	//Local Definations/ Declarlations
	int ch;
    string name;
    //Getting user input with a prompt
    cout << "Enter a string:  ";
    getline(cin, name);
    //length() is used to return the length of string
    //ch holds the length of string
    ch = name.length();
    //function calls
    print(ch, name);
    cin.get();
    cin.ignore();
    return 0;    
}
//print() Function Defination
//This function has two parameter, one is ch which has the length of string and string
//name, which user inputs.
//Its has a recurive call to the function which reduces the length of ch, everytime it 
//satisfies the condition.
//the fuction type is null, and ouputs the string one character at a time backwards
void print(int ch, const string name)
{
	//Condition where ch is the length of the string user input
    if(ch >= 0)
    {
    	//outputs one charcter at a time backwards
    	cout<<name[ch]<<endl; 
		//recursive call   	
    	print(ch -1,name);
	}
}
