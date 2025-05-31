#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	string name;
	string contectnumber;
	
	cout<<"enter name";
	getline (cin,name);
	
	cout<<"enter contect number";
	getline (cin,contectnumber);
	
	ofstream outfile("contects txt",ios::app);{
	if(outfile.is_open()){
		outfile<<"name"<<name<<"contect"<<contectnumber<<endl;
		outfile.close();
		cout<<"contect savad successfully \n";
	}else{
		cout<<"error opening file \n";
	}
	ifstream infile("contect txt");
	string line;
	cout<<"saved contect \n";
	while  (getline(infile,line)){
		cout<<line<<endl;
	}
	infile.close();
	}
	return 0;
}

