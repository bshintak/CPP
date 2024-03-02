#include "Data.hpp"
#include "Serializer.hpp"
#include <sstream>

int	main(void)
{
	// Data d;
	// std::stringstream addr1;
	// std::stringstream addr2;

  Data data;
	uintptr_t ptr;

  std::cout << "Before Serualizar: " << &data << std::endl;
  ptr = Serializer::serialize(&data);
  data.str = "Hellooooooo";

  std::cout << "After Serializer: " << ptr << std::endl;
  std::cout << "Inside of my data: " << data.str << std::endl;


  Data other_data = *(Serializer::deserialize(ptr));

  std::cout << "Now deserializing: " << &other_data << std::endl;
  std::cout << "Inside of my new data: " << other_data.str << std::endl;

	return (0);
}