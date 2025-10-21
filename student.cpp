#include"student.h"         //header file


//how the function works outside the class(Implementation).In this way we use scope resolution operator(::) to inter link with class.

student::student()          //default constructor
{
	name = "unknown ";
	age = 0;
	rollNo = 0;
	gpa = 0.0;

}
student::student(string n, int a, int r, double g)    //parameterized constructor
{
	cout << " Customize student information: " << endl;
	name = n;
	age = a;
	rollNo = r;
	gpa = g;

}
void student::set(string n, int a, int r, double g)   //setter method
{
	cout << " Student information: " << endl;
	name = n;
	age = a;
	rollNo = r;
	gpa = g;

}
string student::getName()      //getter method
{
	return name;
}
int student::getAge()         //getter method
{
	return age;
}
int student::getRollno()     //getter method
{
	return rollNo;
}
double student::getGpa()    //getter method
{
	return gpa;
}
void student::display()   //display function
{
	cout << " Name: " << name << endl;
	cout << " Age: " << age << endl;
	cout << " RollNo: " << rollNo << endl;
	cout << " GPA: " << gpa << endl;
	cout << " Grade: " << calculateGrade() << endl;

}
string student::calculateGrade()    //function for calculating grade
{
	if (gpa >= 3.5)
	{
		return "A";
	}
	else if (gpa >= 3.0)
	{
		return "B";
	}
	else if (gpa >= 2.5)
	{
		return "C";
	}
	else if (gpa >= 2.0)
	{
		return "D";
	}
	else
	{
		return "F";
	}

}
student::~student()      //destructor
{
	cout << "Destructor deleted information of " << name << endl;
}