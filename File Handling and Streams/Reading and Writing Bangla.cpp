// Your First C++ Program

#include <iostream>
#include<bits/stdc++.h>

using namespace std;

int main() {
    cout << "Hello World!\n";
    fstream file1, file2;
	file1.open("read.txt", ios::out);
	if(!file1){
		cout<<"no..\n";	
	}else{
		file1 << "হুম দেখি কি হয় ";
		file1.close();		
	}
	
	file1.open("read.txt", ios::in);
	file2.open("write.txt", ios::out);
	if(!file2){
		cout<<"nooo..\n";
	}else{
		char ch;
		file1 >> noskipws;
		while (file1)
		{
			file1 >> ch;
			file2 << ch;
		}
		
	}
	file2.close();
	file1.close();
	return 0;
}
