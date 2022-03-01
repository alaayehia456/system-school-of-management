#include <iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<exception>
using namespace std;

#include "PersonInterFace.h"
#include "StudentControler.h"
#include "Meta_Date_Subject.h"
#include "Subject_Student.h"
#include "Student.h"

int main(int argc, char** argv) {
	try{
	
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
		
			StudentControler::i()->SetStudent(age,i,n);
	}

	 StudentControler::i()->getAllStudent();
}catch(exception e){
		cout<<e.what();

}


	
	
	return 0;
}
