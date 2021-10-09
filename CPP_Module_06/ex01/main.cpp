#include <cstdint>
#include <string>
#include <iostream>
#include <stdint.h>

struct Data
{
	std::string name;
	int size;
	char letter;
};

uintptr_t serialize(Data* ptr)
{
	return (reinterpret_cast<uintptr_t>(ptr));
}

Data* deserialize(uintptr_t raw)
{
	return (reinterpret_cast<Data*>(raw));
}

int main()
{
	Data data;
	Data *deserializedData;

	data.name = "melaena";
	data.size = 777;
	data.letter = 'm';

	uintptr_t	serializedData;

	serializedData = serialize(&data);
	deserializedData = deserialize(serializedData);
	std::cout << "name: " << deserializedData->name;
	std::cout << " size: " << deserializedData->size;
	std::cout << " letter: " << deserializedData->letter << std::endl;
}
