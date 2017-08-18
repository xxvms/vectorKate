#include <iostream>
#include <vector>
#include <algorithm>
#include "Person.h"

void print(int i)
{
    std::cout << i << ' ';
}

bool odd(int i)
{
    return i%2;
}


int main() {

    std::vector<int> vector;
    vector.push_back(9);
    vector.push_back(6);
    vector.push_back(3);
    vector.push_back(2);
    vector.push_back(3);


    for (auto i = vector.begin(); i != vector.end(); i++){
        std::cout << *i << " ";
    }

    std::cout << '\n';

    int j = vector[2];

    for (auto i = vector.rbegin(); i != vector.rend(); i++){
        std::cout << *i << " ";
    }

    std::cout << '\n';
    std::vector<Person> vectorPerson;

    Person John("John", "Snow", 123);
    Person Tyrion("Tyrion", "Lannister", 890);

    vectorPerson.reserve(2);
    vectorPerson.push_back(John);
    vectorPerson.push_back(Tyrion);


    for (auto item = vectorPerson.begin(); item != vectorPerson.end(); item++){
        std::cout << item->Get_name() << " " << '\n';
    }


    std::cout << "*******************************" << '\n';
    std::cout << "Contents of vector: " << '\n';
    std::for_each(vector.begin(), vector.end(), print);
    std::cout << '\n';

    std::cout << "*******************************" << '\n';
    std::cout << "odd elemetnts in vector: ";
    auto odd_number = std::find_if(vector.begin(), vector.end(), odd);
    while (odd_number != vector.end())
    {
        std::cout << *odd_number << " ";
        odd_number = find_if(++odd_number, vector.end(), odd);
    }
    std::cout << '\n';

    std::cout << "*******************************" << '\n';
    std::cout << "sorting vector: ";
    std::sort(vector.begin(), vector.end());
    std::for_each(vector.begin(), vector.end(), print);



    return 0;
}