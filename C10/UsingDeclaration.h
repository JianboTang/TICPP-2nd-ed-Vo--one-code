//: C10:UsingDeclaration.h
// From Thinking in C++, 2nd Edition
// Available at http://www.BruceEckel.com
// (c) Bruce Eckel 2000
// Copyright notice in Copyright.txt
#ifndef USINGDECLARATION_H
#define USINGDECLARATION_H

#include <iostream>

namespace U {
  inline void f() {
  	std::cout << "U::f()" << std::endl;
  }
  inline void g() {
  	std::cout << "U::g()" << std::endl;}
}
namespace V {
  inline void f() {
  	std::cout << "V::f()" << std::endl;}
  inline void g() {
  	std::cout << "v::f()" << std::endl;}
} 
#endif // USINGDECLARATION_H ///:~
