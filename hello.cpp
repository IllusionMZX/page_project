#include <iostream>
using namespace std
class Student{
private:
  int num;
  string name;
public:
  Student(int num,string name):num(num), name(name){}
  ~Student(){}

};
int main(){
  Student stu1(1,"Lihua");
  cout<<"Hello world"<<endl;
  return 0;
  
}
