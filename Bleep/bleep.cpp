include <iostream>
#include <string>
#include "functions.hpp"

int main() {

  std::string word = "broccoli";
  std::string text = "I love to eat broccoli, I usually put broccoli in my pasta and also when making noodles for me and my broccoli family!";

bleep(word, text);
for (int i = 0; i < text.size(); i++){
  std::cout<<text[i];
}

std::cout<<"\n";

}