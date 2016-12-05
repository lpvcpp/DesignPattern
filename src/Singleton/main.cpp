// How to run
//  g++ main.cpp -o main -std=c++0x
// ./main

#include <iostream>
#include "Singleton.h"
using namespace std;


int main() {
 Singleton *instance = Singleton::GetInstance();
 Singleton *instance2 = Singleton::GetInstance();
 

}  // return 0;
