#include <iostream>
using namespace std;
#include "funcs.h"

int main() {
  string x;
  string print;
  int count = 0;
  while(getline(cin, x)) {
  	print += removeLeadingSpaces(x);
	print += "\n";
	count += countChar(x, '{');
        count -= countChar(x, '}');
	for(int i = 0; i < count; i++) {
		print += "\t";
	}
  }
  cout << print << endl;
  return 0;
}
