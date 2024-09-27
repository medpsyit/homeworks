#include <iostream>
#include <string>

struct addresses
{
    std::string city;
    std::string street;
    int houseNumber;
    int apartmentNumber;
    int index;
};

void print_address(addresses& curr)
{
    std::cout << "Город: " << curr.city << '\n'
        << "Улица: " << curr.street << '\n'
        << "Номер дома: " << curr.houseNumber << '\n'
        << "Номер квартиры: " << curr.apartmentNumber << '\n'
        << "Индекс: " << curr.index << '\n' << std::endl;
}


int main()
{
    setlocale(LC_CTYPE, "rus");
    addresses* curr_array = new addresses[3];
    curr_array[0].city = "Москва";
    curr_array[0].street = "Арбат";
    curr_array[0].houseNumber = 12;
    curr_array[0].apartmentNumber = 8;
    curr_array[0].index = 123456;

    curr_array[1].city = "Ижевск";
    curr_array[1].street = "Пушкина";
    curr_array[1].houseNumber = 59;
    curr_array[1].apartmentNumber = 143;
    curr_array[1].index = 953769;

    curr_array[2].city = "Новосибирск";
    curr_array[2].street = "Ленина";
    curr_array[2].houseNumber = 35;
    curr_array[2].apartmentNumber = 79;
    curr_array[2].index = 643075;

    print_address(curr_array[0]);
    print_address(curr_array[1]);
    print_address(curr_array[2]);

    delete[] curr_array;
    return 0;
}
