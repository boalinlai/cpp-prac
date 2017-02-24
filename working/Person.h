//
// Created by Boa-Lin Lai on 2/24/17.
//

#ifndef WORKING_PERSON_H
#define WORKING_PERSON_H
#include <iostream>
#include <string>
using namespace std;
struct Person {
  string name;
  int age;
  Person(string name, int age): name(name), age(age) {};
  friend ostream& operator<<(ostream& os, const Person& person);
  friend bool operator < (const Person & a ,const Person & b) {
    return a.age < b.age;
  }
  friend bool operator > (const Person & a ,const Person & b) {
    return a.age > b.age;
  }
};
ostream& operator<<(ostream& os, const Person& person) {
  os << person.name << ':' << person.age;
  return os;

}
#endif //WORKING_PERSON_H
