#pragma once
# include <iostream>
using namespace std;
# include <vector>
# include <string>
class Node
{
public:
	int data;
	Node * left;
	Node * right;
	Node();
	Node(int);

};