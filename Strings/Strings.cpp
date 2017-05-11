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
		/*char st1[] = "Farewell";
		char st2[20];
		cout << strcpy_s(st2, st1) << endl;
		
		cin.get();
		return 0;
*/

	/*	char st1[] = "House";
		char st2[] = "se";
		if (strstr(st1, st2) != NULL)
			cout << "found" << endl;
		cin.get();
		return 0;*/


		char st1[][5] = { "ed","joe","john" };
		for (int j = 0; j<3; j++)
			cout << st1[j] << endl;
		cin.get();
		return 0;


}
