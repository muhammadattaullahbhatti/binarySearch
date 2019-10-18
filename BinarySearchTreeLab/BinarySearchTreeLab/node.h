#pragma once
# include <iostream>
using namespace std;
# include <vector>
# include <string>
class Node
{
public:
	int data;
	// made both below variables on the same line to avoid no of lines and to make less complexity
	Node * left;
	Node * right;
	//default constructor
	Node();
	//parametrized constructor
	Node(int);

};
