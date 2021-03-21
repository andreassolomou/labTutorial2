/** \file lab1.cpp
* \brief Print Characters in pattern based on user choice
* \details Ask from the user the pattern that wants in order to print the characters.
* \details When the user choose the pattern then the program ask for the length and the
* \details character.
* \author @author Andreas Solomou
* \version @version 0.4
* \date @since 04/05/2020
* \copyright GNU Public License.
*/
#include <iostream>
#include <string.h>
#include <fstream>
#include <stdio.h>
#include <stdlib.h>
#include<vector>
using namespace std;


/**
* @param length the number of characters in the line
* @param ch the character
* @return print the characters in one line horizontal
*
*/
void drawHorizontalLine(const int length, const char ch)
{
	for (int i = 0; i < length; i++)
		cout << ch;
}

/**

* @param height the number of lines which contains the specif number of characters
* @param ch the character
* @return print the characters in one line vertical
*/
void drawVerticalLine(const int height, const char ch)
{
	for (int i = 0; i < height; i++)
		cout << ch << "\n";
}
/**
* @param height the number of lines which contains the characters
* @param ch the character
* @return print the characters in the square
*/
void drawSquare(const int size, const char ch)
{
	for (int i = 0; i < size; i++)
		cout << ch;
	cout << "\n";
	if (size > 2) {
		for (int k = 0; k < size - 2; k++)
		{
			cout << ch;
			for (int i = 0; i < size - 2; i++)
				cout << " ";
			cout << ch;
			cout << "\n";
		}
	}

	for (int i = 0; i < size; i++)
		cout << ch;
}
/**
* @param length the number of lines which contains the characters
* @param height the number of characters in 1st and last row
* @param ch the character
* @return print the characters in the rectangle
*/
void drawRectangle(const int length, const int height, const char ch)
{
	for (int i = 0; i < height; i++)
		cout << ch;
	cout << "\n";
	for (int k = 0; k < length - 2; k++)
	{
		cout << ch;
		for (int i = 0; i < height - 2; i++)
			cout << " ";
		cout << ch;
		cout << "\n";
	}
	for (int i = 0; i < height; i++)
		cout << ch;

}
/**
* Call the appropriate function based on user choice and display the correct result
*
* @return 0
*/
int main()
{

	int option, length, height, size;
	char ch;

	//Show menu
	cout << " 1->  Draw a horizontal line" << endl;
	cout << " 2->  Draw a vertical line" << endl;
	cout << " 3-> Draw a square" << endl;
	cout << " 4-> Draw a rectangle" << endl;
	cout << " 5->  Quit" << endl;
	cout << " Enter your Option: ";
	cin >> option;

	do {

		switch (option)//select choice that you want
		{
		case 1:
			cout << "give length ";
			cin >> length;
			cout << "give ch ";
			cin >> ch;
			cout << "\n";
			drawHorizontalLine(length, ch);
			cout << "\n";
			cout << "Enter your Option: ";
			cin >> option;
			break;
		case 2:
			cout << "give height ";
			cin >> height;
			cout << "give ch ";
			cin >> ch;
			cout << endl;
			drawVerticalLine(height, ch);
			cout << "\n";
			cout << "Enter your Option: ";
			cin >> option;
			break;
		case 3:
			cout << "give size ";
			cin >> size;
			cout << "give ch ";
			cin >> ch;
			cout << endl;
			drawSquare(size, ch);
			cout << "\n";
			cout << "Enter your Option: ";
			cin >> option;
			break;
		case 4:
			cout << "give length ";
			cin >> length;
			cout << "give height ";
			cin >> height;
			cout << "give ch ";
			cin >> ch;
			cout << endl;
			drawRectangle(length, height, ch);
			cout << "\n";
			cout << "Enter your Option: ";
			cin >> option;
			break;
		case 5:
			exit(0);
			break;
		default:
			cout << option << " not found " << endl;
			break;
		}
	} while (option != 5);

	return 0;
}



