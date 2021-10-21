#include <iostream>
using namespace std;
#include "funcs.h"

int main() {
  string x;
  //string print;
  int count1 = 0;
  int count2 = 0;
  while(getline(cin, x)) {
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
  //cout << print << endl;
  return 0;
}
