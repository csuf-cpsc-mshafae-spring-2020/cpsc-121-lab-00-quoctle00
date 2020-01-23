// Quoc Le
// CPSC 121-03
// quoctle00@csu.fullerton.edu

#include <iostream>
using namespace std;

int main(int argc, char *argv[]){

  if(argc < 3){
    cout << "need more info or inputs" << endl;
  }

  string user_name = argv[1];

  string times_to_print = argv[2];
  int times_to_print_int = std::stoi(times_to_print);

for(int i = 0; i < times_to_print_int; i++) {
  cout << "Hello " << user_name << "! " << endl;

}
  return 0;
}
