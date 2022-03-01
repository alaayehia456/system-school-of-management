#include<iostream>
#include<vector>
#include<string>
#include<algorithm>

using namespace std;

#include "PersonInterFace.h"
#include "Meta_Date_Subject.h"
#include "Subject_Student.h"
#include "Student.h"
#include "Subject_Controller.h"
#include "StudentControler.h"







StudentControler* StudentControler::s = NULL;
Subject_Controller* Subject_Controller::subject = NULL;
void main() {

	int size;
	cout << "set Number of subject" << endl;
	cin >> size;
	for (int i = 0; i < size; i++) {
		string name_of_book;
		int Number_of_page;
		string name_of_Auther;
		string Semester;
		int Min;
		int max;

		cout << "Enter name of book " << endl;
		cin >> name_of_book;
		cout << "Enter Number_of_page " << endl;
		cin >> Number_of_page;
		cout << "Enter name_of_Auther " << endl;
		cin >> name_of_Auther;
		cout << "Set Semster " << endl;
		cin >> Semester;
		cout << "Set min " << endl;
		cin >> Min;
		cout << "Enter max " << endl;
		cin >> max;
		Subject_Controller::s()->addSubject( name_of_book,Number_of_page,name_of_Auther,Min,max,Semester);
	

	}
	/*
	* 
	* cheak of edite in subject
	string semster, nameOfSubject;
	cout << "Enter Semster of subject that you need to edite" << endl;
	cin >> semster;
	cout << "Enter name of subject that you need to change " << endl;
	cin >> nameOfSubject;
	Subject_Controller::s()->edite(semster, nameOfSubject);
	*/

	/*
	cheak of delete and show
	string name_of_sub, sem;
	cout << "Enter Name Of Subject" << endl;
	cin >> name_of_sub;
	cout << "Enter Semster" << endl;
	cin >> sem;
	Subject_Controller::s()->Delete_subject_from_student(name_of_sub, sem);
	Subject_Controller::s()->showData();
	*/

	//all of student in this comment

	/*
	* this is for student
	* 
	int size_of_student;
	cout << "Enter Number of student " << endl;
	cin >> size_of_student;
	for (int i = 0; i < size_of_student; i++) {
		string FirstName;
		string LastName;
		int age;
		string PhoneNumber;
		string Email;
		string sem;
		cout << "Enter first name " << endl;
		cin >> FirstName;
		cout << "Enter last name " << endl;
		cin >> LastName;
		cout << "Enter age " << endl;
		cin >> age;
		cout << "Enter phoneNumber " << endl;
		cin >> PhoneNumber;
		cout << "Enter email " << endl;
		cin >> Email;
		cout << "Enter semster " << endl;
		cin >> sem;
		//Subject_Controller::s()->search(sem);
		//vector<Subject_Student> subject_for_student;
		//subject_for_student = StudentControler::i()->get_subject_for_student();
		vector<Subject_Student> alaa;
		for (int i = 0; i < Subject_Controller::s()->get().size(); i++) {

			if (Subject_Controller::s()->get()[i].gets() == sem) {
				string book = Subject_Controller::s()->get()[i].getNameOfBook();
				int Number_of_page= Subject_Controller::s()->get()[i].getPage();
				string name_of_Auther = Subject_Controller::s()->get()[i].getAuther();
				string Semester = Subject_Controller::s()->get()[i].gets();
				int Min = Subject_Controller::s()->get()[i].getMin();
				int max = Subject_Controller::s()->get()[i].getmax();
				int Grad;
				string FedBack;
				cout << "subjects  are" << endl;
				cout << book << endl;
				cout << Number_of_page << endl;
				cout << name_of_Auther << endl;
				cout << Semester << endl;
				cout << Min << endl;
				cout << max << endl;
				cout << " Enter Grad" << endl;
				cin >> Grad;
				cout << "Enter your feedback for " <<book << endl;
				cin >> FedBack;

				Subject_Student we;
				we.setNameOfBook(book);
				we.setAuther(name_of_Auther);
				we.setmax(max);
				we.setmin(Min);
				we.setsent(Semester);
				we.setgrad(Grad);
				we.setfed(FedBack);
				alaa.push_back(we);

			}
		}
		

		StudentControler::i()->SetStudent(FirstName,i, LastName, PhoneNumber, Email, age, sem,alaa);
		//cout << subject_for_student.size();
	}
	
	this is end of student

		*/
	

	









}
/*


	int size;
	cout << "Enter Number Of Subject" << endl;
	cin >> size;
	//Subject_Controller::s()->SetSize(size);
	for (int i = 0; i < size; i++) {
		string name,author,sem;
		int page,min,max;

		cout << "Enter Name OF book" << endl;
		cin >> name;

		cout << "Enter Number Of page" << endl;
		cin >> page;

		cout << "Enter Name of Author" << endl;
		cin >> author;

		cout << "Enter semster" << endl;
		cin >> sem;

		cout << "Enter min" << endl;
		cin >> min;

		cout << "Enter max" << endl;
		cin >> max;

		Subject_Controller::s()->addSubject(name,  page, author, min, max,sem);


	}
	cout << "Enter semster " << endl;
	string sem;
	cin >> sem;
	//Subject_Controller::s()->showData();

	Subject_Controller::s()->search(sem);
	int size_fortest = Subject_Controller::s()->getsize_for_Data();
	vector<Meta_Date_Subject> a= Subject_Controller::s()->getMa();
	for (int i = 0; i < size_fortest; i++) {
		cout << a[i].getNameOfBook() << endl;
		cout << a[i].gets()<<endl;
		cout << a[i].getAuther() << endl;

	}
	//StudentControler::i()->setSubjects()

	//int size_For_ve = Subject_Controller::s()





	}

	try {

		int size;
		cout << "enter Size" << endl;
		cin >> size;
		StudentControler::i()->setSize(size);
		for (int i = 0; i < size; i++) {

			int age;
			string n;

			cout << "set Age of student" << endl;
			cin >> age;
			cout << "set name" << endl;
			cin >> n;

			StudentControler::i()->SetStudent(age, i, n);
		}

		//StudentControler::i()->getAllStudent();
	}
	catch(exception e) {
		cout << e.what();
	}


}


	Student* alaa = new Student[10];
	for (int i = 0; i < 10; i++) {
		string ayman;
		cout << "Enter name" << endl;
		cin >> ayman;
		alaa[i].setFirstName(ayman);

	}

	*/