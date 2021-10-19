#include <iostream>
using namespace std;
#include "funcs.h"

int main() {
  string x;
  string print;
  int count = 0;
  while(getline(cin, x)) {
	count -= countChar(x, '}');
	for(int i = 0; i < count; i++) {
                print += "\t";
        }
  	print += removeLeadingSpaces(x);
	count += countChar(x, '{');
	print += "\n";
  }
  cout << print << endl;
  return 0;
}
