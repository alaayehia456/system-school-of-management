#pragma once

class Subject_Controller {
private:
	static Subject_Controller* subject;  //singelton design pattern
	vector<Meta_Date_Subject> materal;
	int size;


public:
	Subject_Controller(){}
	~Subject_Controller() {
		
		

	}
	
	void addSubject(string nameOfBook,int NumberPages,string Author,int min,int max,string Sem) {
		Meta_Date_Subject a;
		a.setNameOfBook(nameOfBook);
		a.setPage(NumberPages);
		a.setAuther(Author);
		a.setmin(min);
		a.setmax(max);
		a.setsent(Sem);
		materal.push_back(a);

		

	
}


		void Delete_subject_from_student(string name_of_sub, string Semster) {

			for (int i = 0; i < materal.size(); i++) {
				if (materal[i].getNameOfBook() == name_of_sub &&
					materal[i].gets() == Semster) {
					materal.erase(materal.begin() + i);
				}

			}

		}


	
	void showData() {
		for (int i = 0; i < materal.size(); i++) {
			cout<<"Name of book "<< materal[i].getNameOfBook() << endl;
			cout << "Name of Author " << materal[i].getAuther() << endl;
			cout << "Number of Page "<< materal[i].getPage() << endl;
			cout << "Min Grad " << materal[i].getMin() << endl;
			cout << "Max Grad " << materal[i].getmax() << endl;
			cout << "Semster " << materal[i].gets() << endl;
		}
	}
	
	void edite(string semster,string nameOfSubject) {
		int numOfSubject;
		bool isfind=false;

		for (int i = 0; i < materal.size(); i++) {

			if (materal[i].getNameOfBook() == nameOfSubject && materal[i].gets() == semster) {
				numOfSubject = i;
				isfind = true;

			}
		}
		if (isfind == true) {
			cout << "Choice which topic Do you want to change" << endl;
			int choose;
			cout << " 1- name of subject" << endl;
			cout << " 2- Number of pages" << endl;
			cout << " 3- name of author" << endl;
			cout << " 4- minmun" << endl;
			cout << " 5- maxmun" << endl;
			cout << " 6- semster" << endl;
			cin >> choose;
			switch (choose)
			{

			case 1:
			{
				cout << materal[numOfSubject].getNameOfBook() << endl;
				string name;
				cout << "Enter new name" << endl;
				cin >> name;
				materal[numOfSubject].setNameOfBook(name);
			}

			break;

			case 2:
			{
				cout << materal[numOfSubject].getPage() << endl;
				int page;
				cout << "Enter new number of page" << endl;
				cin >> page;
				materal[numOfSubject].setPage(page);
			}
			break;

			case 3:
			{
				cout << materal[numOfSubject].getAuther() << endl;
				string author;
				cout << "Enter new name of Auther" << endl;
				cin >> author;
				materal[numOfSubject].setAuther(author);
			}
			break;

			case 4:
			{
				cout << materal[numOfSubject].getMin() << endl;
				int min;
				cout << "Enter new minmum limite" << endl;
				cin >> min;
				materal[numOfSubject].setmin(min);
			}
			break;

			case 5:
			{
				cout << materal[numOfSubject].getmax() << endl;
				int max;
				cout << "Enter new maxmum limite" << endl;
				cin >> max;
				materal[numOfSubject].setmax(max);
			}
			break;

			case 6:
			{
				cout << materal[numOfSubject].gets() << endl;
				string semster;
				cout << "Enter new semster" << endl;
				cin >> semster;
				materal[numOfSubject].setsent(semster);
			}
			break;

			default:
				cout << "this is not a valid of value" << endl;
				break;

			}



		}
		else {
			cout << "we can not find semster or nameOfSubject" << endl;
		}



	}


	

	vector<Meta_Date_Subject> get() {
		return this->materal;
	}

	

	static Subject_Controller* s()   //singelton design pattern
	{
		if (subject == NULL) {
			subject = new Subject_Controller();
		}
		return subject;
	}


		

	
	

	

	

};
