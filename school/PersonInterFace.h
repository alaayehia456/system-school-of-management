#pragma once
#include<string>

class PersonInterFace {
	//Date Member

private:
	string FirstName;
	string LastName;
	int age;
	string PhoneNumber;
	string Email;
public:
	
PersonInterFace(){}

	void setFirstName(string name) {

		
			while (name == " "||name == "@")
			{
				cout << "Sorry Please Set Valued Data" << endl;
				cin >> name;
				
			}
			transform(name.begin(), name.end(), name.begin(), ::tolower);
			this->FirstName = name;
		
	}
	string getFirstName() {

		return this->FirstName;
	}

	void setLastName(string Lastname) {

		while (Lastname == " " || Lastname == "@")
		{
			cout << "Sorry Please Set Valued Data" << endl;
			cin >> Lastname;

		}
		
			transform(LastName.begin(), LastName.end(), LastName.begin(), ::tolower);

			this->LastName = Lastname;
		
	}
	string GetLastName() {
		return this->LastName;
	}

	void setAge(int Age) {
		
		while (Age > 20 || Age < 5 )
		{
			cout << "Please set valed Age" << endl;
			cin >> Age;
		}
		this->age = Age;
	}
	int GetAge() {

		return this->age;
	}

	void setPhoneNummber(string Phone) {
		
		while (Phone.size() != 11)
		{
			cout << "This PhoneNumber is not Valued" << endl;
			cin >> Phone;
		}
		this->PhoneNumber = Phone;
	}
	string getPhonenumber() {

		return this->PhoneNumber;
	}

	void setEmail(string email) {
		if (email == " ") {
			throw exception("Please Write the Email");
		}
		while (email == " ")
		{
			cout << "Please Write the Email" << endl;
			cin >> email;
		}
		this->Email = email;
		
	}
	string GetEmail() {
		return this->Email;
	}

	


	};

