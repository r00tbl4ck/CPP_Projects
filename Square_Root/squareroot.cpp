#include <iostream>

int main(){
  int squareroot = 0;
  int number;

  std::cout << "Number: " << std::endl;
  std::cin >> number;

  while (squareroot * squareroot < number){
      squareroot+=1;
  }

  if (squareroot * squareroot != number) --squareroot;

  std::cout << "Square root: "<< squareroot << std::endl;
  
  return 0;
}
