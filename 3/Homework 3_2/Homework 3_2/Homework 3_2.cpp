#include <iostream>
#include <string>
#include <fstream>
#include <Windows.h>

class Addresses
{
public:
    std::string city = "Unknown";
    std::string street = "Unknown";
    int houseNumber = 0;
    int apartmentNumber = 0;
};

int main()
{
    setlocale(LC_ALL, "Russian");
    std::ifstream inputFile("in.txt");
    if (!inputFile.is_open()) { std::cout << "Ошибка! Файл не может быть открыт!"; }
    else
    {
        int amount{};
        inputFile >> amount;
        Addresses* arr = new Addresses[amount];
        for (int count = 0; count < amount; count++)
        {
            inputFile >> arr[count].city;
            inputFile >> arr[count].street;
            inputFile >> arr[count].houseNumber;
            inputFile >> arr[count].apartmentNumber;
        }
        inputFile.close();


        
        Addresses temp;
        for (int count = 0; count < amount - 1; count++)
        {
            for (int seek = count + 1; seek < amount; seek++)
            if (arr[count].city.compare(arr[seek].city) > 0)
            {
                temp = arr[count];
                arr[count] = arr[seek];
                arr[seek] = temp;
            }

        }



        std::ofstream outputFile("out.txt");
        if (!outputFile.is_open()) { std::cout << "Ошибка! Файл не может быть открыт!"; }
        else
        {
            outputFile << amount << std::endl;
            for (int count = 0; count < amount; count++)
            {
                outputFile << arr[count].city << ", " << arr[count].street << ", " << arr[count].houseNumber << ", " << arr[count].apartmentNumber << std::endl;
            }
        }
        outputFile.close();
        delete[] arr;
    }
    return 0;
}