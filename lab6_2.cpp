//Dialog of the first example is given below.
#include <iostream>
#include <string>
using namespace std;

int main()
{
	string name,movie,Week,ans;
	int num;
	cout << "Fahsai: Sawadee ka...Can you tell me your name?\n";
	cout << "?????: ";
	getline(cin,name);
	cout << "Fahsai: Wow!!!"<< name <<" that is a really cool name.\n";
	cout << "Fahsai: I think you are Engineering student. What is your student ID?\n";
	cout << name <<": ";
	cin >> num;
	cout << "Fahsai: I think you may be GEAR" << num/10000000-12 << " I have a free movie tickets for you.\n";
	cout << "Fahsai: Let's go to cinema together!!!\n";
	cout << "Fahsai: What movie do you want to watch?\n";
	cout << name <<": ";
	cin.ignore();
	getline(cin,movie);
	cout << "Fahsai: So....which day are you free to go with me?\n";
	cout << name <<": ";
	getline(cin,Week);
	cout << "Fahsai: "<< Week <<"....that is OK!!! I'm looking forward to watch "<< movie << "with you.\n";
	cout << name <<": ";
	getline(cin,ans);
	cout << "Fahsai: 555+ see you "<< Week <<". Bye Bye \(^ ^)/ \n";
	
	return 0;
}
