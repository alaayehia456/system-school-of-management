
class Student :public PersonInterFace {

private:
	string Semester;
	//vector<Subject_Student> s; //compstion to can test this funtction without to test anthor class
	int size = 4;
	vector<Subject_Student> subject;

public:
	Student() {};
	void setsemester(string s) {

		this->Semester = s;
	}
	string getSemester() {

		return this->Semester;
	}

	
	void setSubject(vector<Subject_Student> s) {
		
		this->subject = s;
	}

	vector<Subject_Student> getsubject() {
		return this->subject;
	}
	

};