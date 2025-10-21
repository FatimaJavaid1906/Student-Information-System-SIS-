#include<iostream>
#include<string>
using namespace std;
class student
{

private:                 //Access specifier (private keyword) is used for data hiding (Encapsulation) in the class.

	string name;        //Attribute
	int age;           //Attribute
	int rollNo;       //Attribute
	double gpa;      //Attribute
public:
	//declaration of function inside the class(Interface)

	student();          /*This is a default constructor & having same name but different parameters that is
						  constructor overloading in (default constructor and parametrized constructor).*/

	student(string n, int a, int r, double g);       //This is a parameterized constructor which I created in my class.

	void set(string n, int a, int r, double g);     //special method called Setter Method which is used to set private values.

	string getName();                              //special method called Getter Method which is used to get value of private values.

	int getAge();                                 // Getter Method.

	int getRollno();                             //Getter Method

	double getGpa();                            //Getter Method

	void display();                            //This function is created for displaying the results.

	string calculateGrade();                  /*In this function we calculate grade through gpa and used(Abstraction) hiding implementation details
												and showing only important part that is how our grade is calculated.*/

	~student();                             //This is a Destructor which cleans up when object is destroyed.

};