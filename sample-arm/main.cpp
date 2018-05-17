#include <iostream>

#include <onmt/onmt.h>

int main()
{
  // Create a new Translator object.
  auto translator = onmt::TranslatorFactory::build("./data/demo-train.t7");

  // Translate a tokenized sentence.
  std::cout << translator->translate("Good morning") << std::endl;  

  return 0;
}
