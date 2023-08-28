// C++ program to demonstrate
// anomaly of delimitation of
// getline() function
#include <bits/stdc++.h>
#include <string>
using namespace std;

int main()
{
	string name;
	int id;

	// Taking id as input
	cout << "Please enter your id: \n";
	cin >> id;

	// Takes the empty character as input
	cout << "Please enter your name: \n";
	getline(cin, name);

	// Prints id
	cout << "Your id : " << id << "\n";

	// Prints nothing in name field
	// as "\n" is considered a valid string
	cout << "Hello, " << name
		<< " welcome to GfG !\n";

	// Again Taking string as input
	getline(cin, name);

	// This actually prints the name
	cout << "Hello, " << name
		<< " welcome to GfG !\n";
    string s="asdfasdfasdf";
    cout<<s.substr(1,5);
    set<int> st={1,23,4};
    cout<< *(st.rbegin());
	return 0;
}
