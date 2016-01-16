//: C11:ReferenceToPointer.cpp
// From Thinking in C++, 2nd Edition
// Available at http://www.BruceEckel.com
// (c) Bruce Eckel 2000
// Copyright notice in Copyright.txt
#include <iostream>
using namespace std;

void increment(int*& i) { i++; }

int main() {
  int x = 10; 
  int* i = &x;
  cout << "i = " << i << endl;
  cout << "*i = " << (*i) << endl;
  increment(i);
  cout << "i = " << i << endl;
  cout << "*i = " << (*i) << endl;
} ///:~
