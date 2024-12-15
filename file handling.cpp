//4.cpp

#include<iostream>
#include<fstream>

using namespace std;

class student{
	public:
	int rollno;
	string name;
	int age;
	
	void add(){
		int n;
		ofstream myfile;
		myfile.open("Student.txt", ios::app); 
		cout<<"Number of student you want to add";
		cin>>n;
		
		
		for(int i=1;i<=n;i++){
		
			cout << "For student "<< i << endl;
		
			cout << "Enter roll number: ";
			cin>>rollno;
		
			cout << "Enter name: ";
			cin>>name;
		
			cout << "Enter age: ";
			cin>>age;
			
			myfile << rollno << " " << name << " " << age << endl;
		}
		
		myfile.close();
	}
};

int main(){
	student s1;
	s1.add();
	return 0;
}