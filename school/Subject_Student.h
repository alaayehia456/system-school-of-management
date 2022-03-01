//#include "Meta_Date_Subject.h"
class Subject_Student :public Meta_Date_Subject{
private:
	int Grad;
	string FedBack;

public:
	void setgrad(int g) {
		this->Grad = g;
	}

	int getgrad() {
		return this->Grad;
	}

	void setfed(string f) {
		this->FedBack = f;

	}


	string getf() {
		return this->FedBack;
	}

	


	

};