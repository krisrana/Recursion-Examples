/*
     Name:      Krishna rana 
     Course:    CIS 260 ME1
     Date:      02/08/2016
     Program:   learning recursion
     Description:  This program accepts an integer as argument
	 		 which is than passed to inlist function. which checks
			 if the interger inputed is in the list and 
     		 outputs the result accordingly via boolean value.
*/
#include <iostream>//Standard Input/output streams libary
using namespace std;
//Global defination/declaration
//Constant declaration
const int Size = 10;
//Function Prototype
bool inlist(int[], int, int);
//Main() Function Defination
//This function runs the whole program with step by step intruction.
//main() has calls and parameters of other function in the program.
int main()
{
	//Local Definations/ Declarlations
	int list[Size] = {33,55,34,56,98,57,110,200,75,98};
	int element;
	//Getting user input with a prompt
	cout<<"Enter Element: "; cin>>element;
	//function call with as condition
	if(inlist(list,element,Size) == true)
		cout<< "It is"<<endl;
	else
		cout<<"It is not"<<endl;
		
	cin.get();
	cin.ignore();
	return 0;	
}
//inlist() Function Defination
//This function has a return type of boolean, it return true when it find the element in 
//list and returns false when the element entered is not in the list.
//it has 3 parameters, array of list, the element user input and size which acts as counter.
bool inlist(int list[], int element, int Size)
{	
	//condition
	//When element is in the list, it will return ture.
	if(list[Size] == element)
	{
    	return true;
	}
	//when element is not in list, it will return false.
    else if (Size <= 0) 
 	{   
		return false;  
	}
	else
	//recursive call
        return inlist(list,element,Size - 1);
}


