//7.cpp

#include<iostream>
#include<map>
using namespace std;

int main(){
	string name;
	long int po;
	char ans;
	
	map<string ,long int>population;
	population["Maharashtra"]=128256452;
	population["Arunachal Pradesh"]=1327174;
	population["Assam"]=32753261;
	population["Bihar"]=95409077;
	population["Uttar Pradesh"]=199812341;
	population["West Bengal"]=91276115;
	population["Madhya Pradesh"]=72626809;
	population["Tamil Nadu"]=72147030;
	population["Rajasthan"]=68548437;
	
	int n=population.size();
	cout<<"\n\t Number of records:"<<n;
	cout<<"\n";
	
	map<string ,long int>::iterator p;
	cout<<"\n\t List of States with Population \n\t";
	
	for(p=population.begin();p!=population.end();p++){
		cout<<p->first<<": "<<p->second<<"\n\t";
	}
	do{
		cout<<"\n\t Enter name of State to searched";
		cin>>name;
		po=population[name];
		if(po==0){
			cout<<"Record not found";
		}else{
			cout<<"\n\tPopulation of "<<name<<" is "<<po;
			cout<<"\n";
		}
		cout<<"\n\t Do you want to continue(y/n)";
		cin>>ans;
	}while(ans=='y');
	
	return 0;
}

