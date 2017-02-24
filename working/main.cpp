/*
 *
 * Practice pq and template
 *
 */
#include <iostream>
#include "PQ.h"
using namespace std;
void test_pq_int() {
    unique_ptr<PQ <int> > p_int_pq (new PQ <int> ());
    vector<int> v = { 11, 22, 44, 55, 33};
    p_int_pq->push_vec(v);
    p_int_pq->push_element(66);
    p_int_pq->print();
}
void test_pq_char() {
    unique_ptr<PQ <char> > p_int_pq (new PQ <char> ());
    vector<char> v = { '1', '2', '4', '5', '3'};
    p_int_pq->push_vec(v);
    p_int_pq->push_element('6');
    p_int_pq->print();
}
void test_pq_Person() {
    unique_ptr<PQ <Person> > p_int_pq (new PQ <Person> ());
    vector<Person> v = { {"boalin", 23} };
    p_int_pq->push_vec(v);
    p_int_pq->push_element(Person("dad",50));
    p_int_pq->print();
}
int main () {
  test_pq_int();
  test_pq_char();
  test_pq_Person();
}