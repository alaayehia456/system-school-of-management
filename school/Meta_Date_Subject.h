
class Meta_Date_Subject {
	//Date Member
private :
	string name_of_book;
	int Number_of_page;
	string name_of_Auther;
	string Semester;
	int Min;
	int max;

public:
	Meta_Date_Subject(){}

	void setNameOfBook(string book) {
		this->name_of_book= book;
	}

	string getNameOfBook() {
		return this->name_of_book;
	}

	void setPage(int page) {

		this->Number_of_page = page;
	}

	int getPage() {
		return this->Number_of_page;
	}

	void setAuther(string auther) {
		this->name_of_Auther = auther;
	}

	string getAuther() {
		return this->name_of_Auther;
	}

	void setmin(int min) {
		this->Min=min;
	}

	int getMin() {

		return this->Min;

	}

	void setmax(int maX){
		this->max = maX;
	
	}

	int getmax() {
		
		return this->max;
	}

	void setsent(string s) {
		this->Semester = s;
	}

	string gets() {
		return this->Semester;
	}



};