//
// Created by Boa-Lin Lai on 2/24/17.
// template function should be implemented in header files...
//
#ifndef WORKING_PQ_H
#define WORKING_PQ_H
#include<vector>
#include <queue>
#include <iostream>
#include "Person.h"
using namespace std;
template <typename T>
class PQ {
private:
    struct cmp_less_than {
        bool operator () (const T a, const T b) {
          return a < b;
        }
    };
    struct cmp_greater_than {
      bool operator () (const T a, const T b) {
            return a > b;
      }
    };
    priority_queue<T> pq_default;
    priority_queue<T, vector<T>, cmp_less_than> pq_less;
    priority_queue<T, vector<T>, cmp_greater_than> pq_greater;
public:
    PQ() {};
    void push_vec(const vector<T> v);
    void push_element(T);
    void print();
};

// implementation of template



template <typename T>
void PQ<T>::print() {
  cout << "print out default" << endl;
    while (pq_default.size()) {
        cout << pq_default.top() << endl;
        pq_default.pop();
    }
  cout << "print out less" << endl;
  while (pq_less.size()) {
    cout << pq_less.top() << endl;
    pq_less.pop();
  }
  cout << "print out greater" << endl;
  while (pq_greater.size()) {
    cout << pq_greater.top() << endl;
    pq_greater.pop();
  }
}

template <typename T>
void PQ<T>::push_vec(const vector<T> v) {
  cout << "push elements into 3 PQ" << endl;
  for (auto& e : v) {
    cout << "push element: " << e << endl;
    pq_default.emplace(e);
    pq_less.emplace(e);
    pq_greater.emplace(e);
  }

}

template <typename T>
void PQ<T>::push_element(T e) {
  cout << "push elements into 3 PQ" << endl;
  pq_default.emplace(e);
  pq_less.emplace(e);
  pq_greater.emplace(e);
}
#endif //WORKING_PQ_H
