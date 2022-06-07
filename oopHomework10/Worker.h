#pragma once
class Worker {
	short _id;
	string _name;
	string _surname;
	size_t _age;
	size_t _pageCount;
public:
	static short _StaticId;
	Worker()
	{
		_id = _StaticId++;
	}
	Worker(string name, string surname, size_t age, size_t pageCount)
		:Worker()
	{
		_name = name;
		_surname = surname;
		_age = age;
		_pageCount = pageCount;
	}



	friend istream& operator>>(istream& input, Worker& w);
	friend ostream& operator<<(ostream& output, const Worker& w);
};

short Worker::_StaticId = 0;
istream& operator>>(istream& input, Worker& w) {
	cout << "\nName: ";
	cin >> w._name;
	cout << "\nSurname: ";
	cin >> w._surname;
	cout << "\nAge: ";
	cin >> w._age;
	cout << "\nPage Count: ";
	cin >> w._pageCount;
	return input;
}

ostream& operator<<(ostream& output, const Worker& w) {
	cout <<"Id: "<<w._id<<endl << "Name: " << w._name << endl << "Surname: " << w._surname << endl << "Age: " << w._age << endl << "Page count: " << w._pageCount << endl;
	return output;
}

