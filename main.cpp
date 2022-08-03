#include <iostream>

struct Test {
  int a;
  int b;
};

void not_free_poiner() {
  Test* t = new Test();
}

int main(/*int argc, char* argv[]*/) {
  /* Пример утечки памяти сработает по завершению прораммы */
  not_free_poiner();

  int array[10] = {0};

  /* Для генерирования исключения сделать больше 10-ти */
  const int array_size_for_iteration = 10;
  //  const int array_size_for_iteration = 11;

  for (int it = 0; it < array_size_for_iteration; ++it) {
    std::cout << it << ": " << array[it] << std::endl;
  }

  return EXIT_SUCCESS;
}
