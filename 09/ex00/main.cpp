#include "BitcoinExchange.hpp"

int main (int ac, char **av) {
  if (ac != 2){
    std::cerr << "Error: could not open file."  << std::endl;
    return -1;
  }
  BitcoinExchange btc("data_null.csv");
  btc.exchanger(av[1]);
  return 0;
}