#pragma once

class StudentControler {
private:
	static StudentControler* s;  //singelton design pattern
	vector<Student> student;
	
	
	



public:
	StudentControler()
	{
	};
	~StudentControler()
	{
		//if (sin != NULL)
			//delete[] sin;
	};
	
	



	

	void SetStudent(string firstname, int i, string Lastname, string Phone, string Email, int age, string sem,vector<Subject_Student> sub)
	{
		Student s;
		s.setFirstName(firstname);
		s.setLastName(Lastname);
		s.setPhoneNummber(Phone);
		s.setEmail(Email);
		s.setAge(age);
		s.setsemester(sem);
		s.setSubject(sub);
		
		int sizea;
		cin >> sizea;
		//Meta_Date_Subject* subject = new Subject_Student[sizea];
		 
		/*
		for (int i = 0; i < arry_to_get_subject_for_student.size(); i++) {
			if (arry_to_get_subject_for_student[i].gets() == sem) {
			
				
			}
		}
		*/
		//s.setSubject(subject);;
		

	}
	
	void printStudent() {
		for (int i = 0; i < student.size(); i++) {
			cout<<"FirstName "<<student[i].getFirstName()<<endl;
			cout << "LastName " << student[i].GetLastName() << endl;
			cout << "Age " << student[i].GetAge() << endl;
			cout << "Phone Number " << student[i].getPhonenumber() << endl; 
			cout << "Email " << student[i].GetEmail() << endl;
			cout << "Semster " << student[i].getSemester() << endl;
			
			for (int j = 0; j < student[i].getsubject().size(); j++) {
				cout<<"NameOfSubject " << student[i].getsubject()[j].getNameOfBook() << endl;
				cout << "Number Of Subject " << student[i].getsubject()[j].getPage() << endl;
				cout << "Name Of Author " << student[i].getsubject()[j].getAuther() << endl;
				cout << "Minmun of subject " << student[i].getsubject()[j].getMin() << endl;
				cout << "Maxmun of subject " << student[i].getsubject()[j].getmax() << endl;
				cout << "grad " << student[i].getsubject()[j].getgrad() << endl;
				cout << "FeedBack " << student[i].getsubject()[j].getf() << endl;



			}



			

		}
	}

	void deleteStudent(string semster,string firstname,string lastname) {

		for (int i = 0; i < student.size(); i++) {
			if (student[i].getFirstName() == firstname && student[i].GetLastName() == lastname && student[i].getSemester() == semster) {
				student.erase(student.begin() + i);
			}
		}


	}

	void update(string semster, string firstname, string lastname) {
		int numOfStudent;

		for (int i = 0; i< student.size(); i++) {

			if (student[i].getFirstName() == firstname && student[i].GetLastName() == lastname && student[i].getSemester() == semster) {
				numOfStudent = i;
			}
			if (i == student.size() - 1) {
				cout << "We can not find this student " << endl;
				break;
			}
		}

		int num;
		cout << "choose number of your opreation " << endl;
		cout << " 1- Edtie first name " << student[numOfStudent].getFirstName() << endl;
		cout << " 2- Edtie last name " << student[numOfStudent].GetLastName() << endl;
		cout << " 3- Edtie Age " << student[numOfStudent].GetAge() << endl;
		cout << " 4- Edtie phone number " << student[numOfStudent].getPhonenumber() << endl;
		cout << " 5- Edtie E-mail" << student[numOfStudent].GetEmail() << endl;
		cout << " 6- Edtie semster " << student[numOfStudent].getSemester() << endl;
		cout << " 7- Edtie subject " << endl;
		cin >> num;
		switch (num)
		{

		case 1:
		{
			cout << "type new name " << endl;
			string name;
			student[numOfStudent].setFirstName(name);

		}
		break;

		case 2:
		{
			cout << "type new name " << endl;
			string name;
			student[numOfStudent].setLastName(name);
		}
		break;

		case 3:
		{
			cout << "type new Age " << endl;
			int name;
			student[numOfStudent].setAge(name);
		}
		break;

		case 4:
		{
			cout << "type new phone number " << endl;
			string name;
			student[numOfStudent].setPhoneNummber(name);
		}
		break;

		case 5:
		{
			cout << "type new email " << endl;
			string name;
			student[numOfStudent].setEmail(name);
		}
		break;
		case 6:
		{
			cout << "type new semster " << endl;
			string semster;
			student[numOfStudent].setsemester(semster);
			vector<Subject_Student> alaa;
			for (int i = 0; i < Subject_Controller::s()->get().size(); i++) {

				if (Subject_Controller::s()->get()[i].gets() == semster) {
					string book = Subject_Controller::s()->get()[i].getNameOfBook();
					int Number_of_page = Subject_Controller::s()->get()[i].getPage();
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
					cout << "Enter your feedback for " << book << endl;
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

			student[numOfStudent].setSubject(alaa);

		}
		break;

		case 7:
		{
			string name;
			cout << "Enter name of subject" << endl;
			cin >> name;
			int numOfSubject;
			for (int j = 0; j < student[numOfStudent].getsubject().size(); j++) {

				if (student[numOfStudent].getsubject()[j].getNameOfBook() == name && student[numOfStudent].getsubject()[j].gets() == semster) {
					numOfSubject = j;



				}

			}
			cout << " 8- Edite Grad of " << student[numOfStudent].getsubject()[numOfSubject].getNameOfBook() << endl;
			cout << " 9- Edite feedback  " << student[numOfStudent].getsubject()[numOfSubject].getNameOfBook() << endl;
			int num;
			cin >> num;
			if (num == 8) {
				cout << "Enter new grad " << endl;
				int grad;
				cin >> grad;
				student[numOfStudent].getsubject()[numOfSubject].setgrad(grad);
			}
			else if (num == 9) {
				cout << "Enter new feedback " << endl;
				string grad;
				cin >> grad;
				student[numOfStudent].getsubject()[numOfSubject].setfed(grad);
			}
			else {
				cout << "can not find any thing " << endl;
			}

		}
		break;


		default:
			cout << "can not understand " << endl;
			break;
		}

		
		






	}


	vector<Student> getAllStudent()
	{
		return student;
	}
	

		

	static StudentControler* i()  //singelton design pattern
	{

		if (s == NULL)
			s = new StudentControler();
		return s;
	}





};
