#include "Data.hpp"
#include "Serializer.hpp"
#include <sstream>

int	main(void)
{

  Data data;
	uintptr_t ptr;

  std::cout << "Before Serializer: " << &data << std::endl;
  data.setString("Hello");
  data.setValue(42);
  ptr = Serializer::serialize(&data);


  std::cout << "After Serializer: " << ptr << std::endl;
  std::cout << "Inside of my data: " << data.getString() << std::endl;
  std::cout << "Inside of my data: " << data.getValue() << std::endl;


  Data *other_data = Serializer::deserialize(ptr);

  std::cout << "Now deserializing: " << other_data << std::endl;
  std::cout << "Inside of my new data: " << other_data->getString() << std::endl;
  std::cout << "Inside of my new data: " << other_data->getValue() << std::endl;

	return (0);
}