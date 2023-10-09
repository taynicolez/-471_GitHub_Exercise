/* 
 * File:   threadmain.cpp
 * Author: Prof Terri Sipantzi
 *
 * Created on July 27, 2012, 6:06 PM
 */

#include <cstdlib>
#include "BST.h"

using namespace std;

void wait(); //Causes the program to pause until the user presses the Enter key

int main(int argc, char** argv) {

	cout << "Prof Terri Sipantzi -- CSIS 215 -- Programming Assignment 2 -- Threaded Binary Tree" << endl << endl;
    
    BST<int, string>* myBST = new BST<int, string>();

    myBST->insert(77, "Seventy-seven");
	myBST->insert(70, "Seventy");
	myBST->insert(75, "Seventy-five");
	myBST->insert(66, "Sixty-six");
	myBST->insert(79, "Seventy-nine");
	myBST->insert(68, "Sixty-eight");
	myBST->insert(67, "Sixty-seven");
	myBST->insert(69, "Sixty-nine");
	myBST->insert(90, "Ninety");
	myBST->insert(85, "Eighty-five");
	myBST->insert(83, "Eighty-three");
	myBST->insert(87, "Eighty-seven");
	myBST->insert(65, "Sixty-five");

    cout << "My BST tree size is " << myBST->size() << endl;

	
	myBST->print(); // calls all the predefinced traversals in BST.h
    
	wait();

    return 0;
}

//Function definitions
void wait()
{
	//The following if-statement checks to see how many characters are in cin's buffer
	//If the buffer has characters in it, the clear and ignore methods get rid of them.
	if (cin.rdbuf()->in_avail() > 0) //If the buffer is empty skip clear and ignore
	{
		cin.clear();
		cin.ignore(256, '\n'); //Clear the input buffer 
	}
	char ch;
	cout << "Press the Enter key to continue ... ";
	cin.get(ch);
}
