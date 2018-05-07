#include <iostream>
#include <stack>
#include <string>

using namespace std;

bool delimiterMatching(char[]);
char BalancedTestString[20] = { "{43[34(gf)z]af}" };
char NotBalancedTestString[20] = {"{jk(([34(gf)z]zz}" };
 
int main(){
   
	cout << endl << "Testing with string " << BalancedTestString << endl;
	
   if(delimiterMatching(BalancedTestString))
        cout << endl << BalancedTestString << "is properly delimited" << endl;
    else 
		cout << endl << BalancedTestString << "is not properly delimited" << endl;
	
	cout << endl << "Now testing with string" << NotBalancedTestString << endl;
	
	if(delimiterMatching(NotBalancedTestString))
       cout << endl << NotBalancedTestString << "is properly delimited" << endl;
    else 
		cout << endl << NotBalancedTestString << "is not properly delimited" << endl;
return 0;
}

bool delimiterMatching(char TestString[20])
{
    stack<char> var;
	int counter = 0;
    char ch, temp, popd;
    do{
        ch = TestString[counter];
        if(ch == '(' || ch == '[' || ch == '{')
            var.push(ch);
        else if(ch == '/'){
            temp = TestString[counter+1];
            if(temp == '*')
                var.push(ch);
            else{
                counter++;
                continue;
            }
        }
        else if(ch == ')' || ch == ']' || ch == '}')
		{
            popd = var.top();
            var.pop();
            if((ch==')' && popd!='(') || (ch==']' && popd!='[') || (ch=='}' && popd!='{'))
                return false;
        }
        else if(ch == '*')
		{
            temp = TestString[counter+1];
            popd = var.top();
            var.pop();
            if(temp == '/' && popd != '/')
                return false;
            else
			{
                counter++;
                var.push(popd);
                continue;
            }
        }
        counter++;
    }while(ch != '\0');
    if(var.empty())
        return true;
    else return false;
}