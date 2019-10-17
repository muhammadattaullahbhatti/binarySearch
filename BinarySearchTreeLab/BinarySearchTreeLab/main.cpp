# include "tree.h"

int main()
{
	Tree t; //Main (root) node for the tree
	int condition = 0;
	while (condition != 8)
	{
		//Main Menu 
		cout << "============================================Menu============================================== " << endl << endl;
		cout << "\t\t\t\tPress 1 to ADD a node " << endl;
		cout << "\t\t\t\tPress 2 to DELETE a node " << endl;
		cout << "\t\t\t\tPress 3 for PRE-ORDER traversal" << endl;
		cout << "\t\t\t\tPress 4 for IN-ORDER traversal" << endl;
		cout << "\t\t\t\tPress 5 for POST-ORDER traversal" << endl;
		cout << "\t\t\t\tPress 6 for SEARCH" << endl;
	        cout << "\t\t\t\tPress 7 for mirror" << endl;
		cout << "\t\t\t\tPress 8 exit " << endl;

		cout << "please enter Your Choice" << endl;
		cin >> condition;
		system("cls");
		int d = 0;    // for taking data
		if (condition == 1)
		{
			cout << "please Insert Node Data :" << endl;
			cout << " Enter NUmber " << endl;
			cin >> d;
			t.insertNode(d);
		}

		else if (condition == 2)
		{
			cout << "please Insert data of Node you want to delete :" << endl;
			cin >> d;
			t.root = t.deleteNode(t.root, d);
		}

		else if (condition == 3)
		{
			t.preorder(t.root);
		}

		else if (condition == 4)
		{
			t.inorder(t.root);
		}
		
		else if (condition == 5)
		{
			t.postorder(t.root);
		}
		else if (condition == 7)
		{
			t.mirror(t.root);
		}
		else if (condition == 6)
		{
			cout << "please Insert data of Node you want to search :" << endl;
			cin >> d;
			Node * temp = t.search(t.root, d);
			if (temp != nullptr)
			{
				cout << "Number Found" << endl;
			}
			else
			{
				cout << "not found" << endl;
			}
		}
		else if (condition == 8)
		{
			condition = 8;
		}
		else
		{
			cout << "please choose CORRECT one" << endl;
		}
	}

	system("pause");
	return 0;
}
