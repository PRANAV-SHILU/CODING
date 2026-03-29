#include <iostream.h>
#include <conio.h>
#include <string.h>
#include <iomanip.h>
void main(int argc, char *argv[])
{
	// argc is argument count and argv is argument vector which is array of string
	char *s1, *s2, *s3;
	clrscr();

	if (argc != 3)
	{
		cout << "Too many arguments";
		return;
	}

	// argv[0] is the program name
	s1 = argv[1];
	s2 = argv[2];

	cout << "First string: " << s1;
	cout << "\nsecond string: " << s2;

	strcat(s1, s2);
	cout << "\nmerged string: " << s1;

	// setw,setfill,setiosflags
	cout << endl
		 << endl;
	//	cout<<setiosflags(ios::right);  // if all want be right, assign only once

	cout << setfill('_'); // assign one time and it will be used until changed
	cout << setiosflags(ios::left) << setw(10) << "Name" << setiosflags(ios::right) << setw(10) << "Age" << setw(10) << "Gender" << "\n";
	cout << setiosflags(ios::left) << setw(10) << "pranav" << setiosflags(ios::right) << setw(10) << "222" << setw(10) << "male" << "\n";
	cout << setiosflags(ios::left) << setw(10) << "tunejoka" << setiosflags(ios::right) << setw(10) << "12" << setw(10) << "female" << "\n";

	getch();
}