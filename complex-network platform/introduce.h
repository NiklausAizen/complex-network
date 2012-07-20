#include <fstream>
#include <iostream>
using namespace std;
void Read_from_readme(){
	char ch;
	ifstream infile("readme.dat");
	while(infile){
		infile.get(ch);
		cout<<ch;	
	}
	cout<<endl;
}