// Strings.cpp : Defines the entry point for the console application.
//

#include <iostream>
#include <cstring>

using  namespace std;
int main()
{
/*	char str[] = "Farewell";
	cout << str << endl;
	cout << str[1] << endl;
	cin.get();
	return 0;

	*/
		char st1[] = "Farewell";
		char st2[20];
		cout << strcpy_s(st2, st1) << endl;
		cin.get();
		return 0;

}
