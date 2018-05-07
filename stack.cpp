#include <iostream>
#include <string>
#include <stack>
#include <vector>

using namespace std;

// void DisplayStack(stack<char>, int); // testing purposes

	 void TestOrder(stack<char>, int);
	
	const int MAX = 6;
	stack <char> iStack;
		

int main()
{

	//int count;
	//bool DoesMatch = true;
	
	//Define STL stack

	
	//Push values to stack
	iStack.push('{');
	iStack.push('(');
	iStack.push('(');
	iStack.push(')');
	iStack.push(']');
	iStack.push('}');

TestOrder(iStack, MAX);
	
//DisplayStack(iStack, MAX); // testing purposes

		
	
return 0;

}

/* Function used during testing
void DisplayStack(stack<char>, int)
{
	for (int i = 0; i < MAX; i++)
	{
		cout << iStack.top();
		iStack.pop();
	}
} */

void TestOrder(stack<char>, int)
{
	char test;
	char array[MAX];
	bool isBalanced = NULL;
	for (int i = 0; i < MAX; i++)
	{
		array[i] = iStack.top();
		iStack.pop();
	}

	
	for (int t = MAX - 1; t >= 0; t--)
		{
			if ((array[t] == '}' && array[MAX-(t+1)] == '{') || (array[t] == ']' && array[MAX-(t+1)] == ']') || (array[t] == ')' && array[MAX-(t+1)] == ')'))
				isBalanced = true;
			else 
				isBalanced = false;
		}
	
	if (isBalanced)
		cout << "Is Balanced";
	else
		cout << "Not Balanced";
}
