#include <iostream>
#include "funcs.h"
#include <cctype>
using namespace std;

string removeLeadingSpaces(string line) {
  string word;
  for(int i = 0; i < line.length(); i++) {
  	if(!isspace(line[i])) {
		word += line.substr(i, line.length() - i);
		break;
	}	
  }
  return word;
}

int countChar(string line, char c) {
  for(int i = 0; i < line.length(); i++) {
  	if(line[i] == c) {
		return 1;
	}
  }
  return 0;
}
