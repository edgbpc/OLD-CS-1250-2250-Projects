#include <iostream>
#include <string>
using namespace std;

//function accepts a string and then prints it in reverse using recursion.  
string reverseStringRecursively(string str){
    if (str.length() == 1) {
        return str;
    }else{
        return reverseStringRecursively(str.substr(1,str.length())) + str.at(0);
    }
}


//Allowed for user Input.  Program could be hard coded with test phrases if desired.
int main()
{
    string str;
	
	cout<<"Enter the string to reverse : ";
    getline(cin, str);
	
    cout<<"The reversed string is : " <<reverseStringRecursively(str);
    return 0;
}