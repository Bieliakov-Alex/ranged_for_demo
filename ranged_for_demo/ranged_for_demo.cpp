// https://en.cppreference.com/w/cpp/language/range-for

#include <iostream>

int main()
{
    constexpr size_t array_length = 3;

    int test[array_length] = {1, 2, 3};

    for (size_t i = 0; i < array_length; ++i) {
        std::cout << test[i] << "\n";
    }

    for (auto& element : test) {
        ++element;
    }

    for (auto element : test) {
        std::cout << element << "\n";
    }

    return 0;
}