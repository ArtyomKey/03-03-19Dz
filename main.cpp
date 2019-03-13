#include <iostream>
#include "double_stack.h"
using namespace std;

void dump(double_stack& st){
  for(int i = 0; i < (st.getsize()+1); i++){
    cout << st[i] << " ";
  }
  cout << "\n";
}
int main() {
  double_stack st;
  st.push(5);
  st.push(4);
  st.push(3);
  st.push(6);
  dump(st);
  cout << st.pop();
  cout << "\n";
  dump(st);
}