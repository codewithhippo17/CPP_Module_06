#include "Serializer.hpp"

int main()
{
    Data myData;
    myData.id = 42;
    myData.name = "Hippo";

    std::cout << "Original address: " << &myData << "\n";

    uintptr_t raw = Serializer::serialize(&myData);
    std::cout << "Serialized raw integer: " << raw << "\n";

    Data* deserializedPtr = Serializer::deserialize(raw);

    std::cout << "Deserialized address: " << deserializedPtr << "\n";
    std::cout << "ID: " << deserializedPtr->id << "\n";
    std::cout << "Name: " << deserializedPtr->name << "\n";

    return 0;
}
