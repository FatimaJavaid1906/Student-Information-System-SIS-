#include"student.h"

int main()     //object creation
{
	cout << " Default student information. " << endl;
	student s1;
	cout << endl;
	s1.display();
	cout << endl;
	cout << endl;
	student s2("Fatima", 19, 26, 2.6);
	cout << endl;
	s2.display();
	cout << endl;
	cout << endl;
	student s3;
	cout << endl;
	s3.set("Ania", 18, 20, 3.6);
	cout << endl;
	s3.display();
	cout << endl;
	cout << endl;


	return 0;
}