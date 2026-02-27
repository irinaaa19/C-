#include <iostream>
#include "profile.cpp"

int main() {

  Profile sam ("Sam Drakkila",30,"New York", "USA", "he/him");
  std::cout<< sam.view_profile();

}


