//6.cpp

#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

class person{
	string name;
	string DOB;
	long int Mob;
	public:
	void getdata(){
		cout<<"\n Enter Name,DOB and Mobile number"<<endl;
		cin>>name>>DOB>>Mob;
	}	
	
	bool operator == (const person &p1){
		return (name == p1.name);
	}
	
	friend void display(person &p);
	
	void setname(string na){
		name=na;
	}
	
	string getname(){
		return name;
	}
	
	string getDOB(){
		return DOB;
	}
	
	long int getMob(){
		return Mob;
	}
};

void display(person &p){
	cout<<p.name<<" "<<p.DOB<<" "<<p.Mob<<endl;
}

void search(vector<person>v1){
	string na;
	cout<<"\n Enter name to searched"<<endl;
	cin>>na;
	
	person temp;
	temp.setname(na);
	vector<person>::iterator p;
	p=find(v1.begin(),v1.end(),temp);
	
	if(p!=v1.end()){
		cout<<"\n Name found"<<endl;
		display(*p);
		
	}else{
		cout<<"\n Not found"<<endl;
	}
}

bool comparebyname(person &p1,person &p2){
	return p1.getname()<p2.getname();
}

int main(){
	person p;
	vector<person>v1;
	cout<<"\n Insert data in  vector"<<endl;
	for (int i=0;i<2;i++){
		p.getdata();
		v1.push_back(p);
	}
	cout<<"\n Display containt from vector"<<endl;
	for_each(v1.begin(),v1.end(),display);
	
	cout<<"\n Searching Operation"<<endl;
	search(v1);
	
	cout<<"\n Sorting "<<endl;
	sort(v1.begin(),v1.end(),comparebyname);
	
	cout<<"\n Sorted data"<<endl;
	
	for_each(v1.begin(),v1.end(),display);
	
	return 0;
}










