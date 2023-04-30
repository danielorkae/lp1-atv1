#include <iostream>

#ifndef HEADER_HPP
#define HEADER_HPP

#include <map>
#include <string>
#include "avaliation-average.cpp"

using namespace std;

void route_action(int option, map<string, AvaliationAverage> &avrgs);
void add_student(map<string, AvaliationAverage> &avrgs);
void show_all(map<string, AvaliationAverage> &avrgs);

#endif
