#include <iostream>

template <typename T>
void iter(T *arr, size_t len, void (*func)(T &))
{
    for (size_t i = 0; i < len; i++)
    {
        func(arr[i]);
    }
}

template <typename T>
void print(T& item)
{
    std::cout << item << std::endl;
}

int main()
{
    int int_array[] = {
        1, 79, 28, 122, 777, 5
    };

    char char_array[] = {
        'a', '2', 'b', '2', 'p', 'x'
    };

    std::string string_array[] = {
        "Pascal", "Mendel", "Nightingale", "Tesla", "Newton", "Hengel"
    };

    iter<int>(int_array, 6, &print<int>);
    iter<char>(char_array, 6, &print<char>);
    iter<std::string>(string_array, 6, &print<std::string>);
}
