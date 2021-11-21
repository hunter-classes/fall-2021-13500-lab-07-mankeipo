//hello im kirsten shyu ! 

#include <iostream>
using namespace std;
#include "funcs.h"
#include <fstream>

int main() {
  ifstream fin("bad-code.cpp"); 
  if(fin.fail()) { 
        cerr << "File cannot be opened"; 
        exit(1);
  }
  string x;
  int count1 = 0;
  int count2 = 0;
  cout << "<-----Bad-code.cpp----->" << endl; 
  while(getline(fin, x)) {
	bool swap = false;
	x = removeLeadingSpaces(x);
	if(x[0] == '}') {
		count2++;
		swap = true;
	}
	for(int i = 0; i < count1 - count2; i++) {
                x = "\t" + x;
        }
	if(swap){
		count2--;
		count2 += countChar(x, '}');
	} else {
		count2 += countChar(x, '}');
	}
	count1 += countChar(x, '{');
	cout << x << endl;
  }
  fin.close();
  cout << endl;
  count1 = 0;
  count2 = 0;
  cout << "<-----Bad-code2.cpp----->" << endl;
  fin.open("bad-code2.cpp");
  if(fin.fail()) {
        cerr << "File cannot be opened";
        exit(1);
  }
  while(getline(fin, x)) {
        bool swap = false;
        x = removeLeadingSpaces(x);
        if(x[0] == '}') {
                count2++;
                swap = true;
        }
        for(int i = 0; i < count1 - count2; i++) {
                x = "\t" + x;
        }
        if(swap){
                count2--;
                count2 += countChar(x, '}');
        } else {
                count2 += countChar(x, '}');
        }
        count1 += countChar(x, '{');
        cout << x << endl;
  }
  fin.close();
  cout << endl;
  count1 = 0;
  count2 = 0;
  cout << "<-----Bad-code3.cpp----->" << endl;
  fin.open("bad-code3.cpp");
  if(fin.fail()) {
        cerr << "File cannot be opened";
        exit(1);
  }
  while(getline(fin, x)) {
        bool swap = false;
        x = removeLeadingSpaces(x);
        if(x[0] == '}') {
                count2++;
                swap = true;
        }
        for(int i = 0; i < count1 - count2; i++) {
                x = "\t" + x;
        }
        if(swap){
                count2--;
                count2 += countChar(x, '}');
        } else {
                count2 += countChar(x, '}');
        }
        count1 += countChar(x, '{');
        cout << x << endl;
  }
  fin.close();
}
