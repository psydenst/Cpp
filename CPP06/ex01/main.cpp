#include "serialize.hpp"
#include <cassert>
#include <iostream>

static void define_data(Data *person)
{
    person->name = "Pedro";
    person->age = 25;

}

static void print_data(Data *data)
{
    std::cout << "Name: " << data->name << std::endl;
    std::cout << "Age: " << data->age << std::endl;
}

int main()
{
    Data *person = new Data();
    Data *deserialized_data;
    uintptr_t serialized_data;

    std::cout << "---------- Original data: -------" << std::endl;
    define_data(person);
    print_data(person);

    std::cout << "--- After serilization ---" << std::endl;
    serialized_data = serialize(person);
    std::cout << serialized_data << std::endl;

    std::cout << "-- After deserialization: --" << std::endl;
    deserialized_data = deserialize(serialized_data);
    print_data(deserialized_data);
    delete person;
}
