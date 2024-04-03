#include "BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange() {}
BitcoinExchange::~BitcoinExchange() {}

BitcoinExchange::BitcoinExchange(const BitcoinExchange & other) {
  *this = other;
}

BitcoinExchange & BitcoinExchange::operator=(const BitcoinExchange & op) {
  if (this != &op)
		this->bitcoinPrices.insert(op.bitcoinPrices.begin(),
				op.bitcoinPrices.end());
	return *this;
}

BitcoinExchange::BitcoinExchange(const std::string file) {
  std::ifstream data(file.c_str());
  std::string line;
  std::string date;
  double value;
    
  if (data.is_open()) {
      while (std::getline(data, line)) {
          std::cout << "\033[1;35mReading line:\033[0m " << line << std::endl;
          size_t pos = line.find(',');
          if (pos != std::string::npos) { // checks if the comma was found
              std::cout << "\033[1;34mComma found at position:\033[0m " << pos << std::endl;
              date = line.substr(0, pos);
              std::cout << "\033[1;33mDate:\033[0m " << date << std::endl;
              value = std::atof(line.substr(pos + 1).c_str());
              std::cout << "\033[1;33mValue:\033[0m " << value << std::endl;
              this->bitcoinPrices.insert(std::pair <std::string, double>(date, value));
          }
      }
      data.close();
  } 
  else {
        std::cerr << "Error: could not open file."  << std::endl;
  }
}

int BitcoinExchange::exchanger(std::string file) {
  std::ifstream	data(file.c_str()); // read

  if (!data.is_open() || bitcoinPrices.empty()) {
    std::cerr << "Error: could not open file." << std::endl;
    return -1;
  }
  std::string line;
  std::getline(data, line);
  
  while (std::getline(data, line)) {
      showDateValue(line);
  }
  data.close();
	return 0;
}

void BitcoinExchange::showDateValue(std::string line)
{
	std::string	date;
	float		value;
	float		total;

	if (verifyData(line, date, &value) == -1)
		return ;
	total = getBitcoinPrices(date) * value;
	std::cout << date << " => " << value << " = " << total << std::endl;
}

int BitcoinExchange::verifyData(std::string line, std::string &date, float *value) {
    size_t pos = line.find('|');
    if (pos == std::string::npos || line[pos - 1] != ' ' || line[pos + 1] != ' ') {
        std::cerr << "Error: bad input" << " => " << line << std::endl;
        return -1;
    }
    *value = std::atof(line.substr(pos + 1).c_str());
    if (*value > 1000 || *value < 0) {
        std::cerr << "Error: the number is not between 0 and 1000" << std::endl;
        return -1;
    }
    date = line.substr(0, pos - 1);
    if (isValid(date) == -1) {
        std::cerr << "Error: not a valid date." << std::endl;
        return -1;
    }
    return 0;
}

int BitcoinExchange::isValid(std::string date) {
    size_t firstDash = date.find('-');
    size_t secondDash = date.rfind('-');
    if (firstDash == std::string::npos || secondDash == std::string::npos || firstDash == secondDash)
        return -1;

    int year = std::atoi(date.substr(0, firstDash).c_str());
    int month = std::atoi(date.substr(firstDash + 1, secondDash).c_str());
    int day = std::atoi(date.substr(secondDash + 1).c_str());

    if (month < 1 || month > 12 || day < 1 || day > 31)
        return -1;
    if (day > 30 && (month == 4 || month == 6 || month == 9 || month == 11))
        return -1;
    if (month == 2) {
        if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0) {
            if (day > 29)
                return -1;
        } else {
            if (day > 28)
                return -1;
        }
    }
    return 0;
}

float BitcoinExchange::getBitcoinPrices(std::string date) {
    std::map<std::string, double>::iterator it = bitcoinPrices.lower_bound(date); // lower_bound - find the first element in the map that is greater than or equal to the provided date
    if (it != bitcoinPrices.end() && it->first == date) {
        return it->second; // A data existe, retorna o valor associado diretamente
    }
    // Se a data fornecida não estiver no mapa, procurar a data mais próxima (menor)
    if (it == bitcoinPrices.begin()) {
        return 0; // Se a data fornecida for anterior à primeira data no mapa, retorne 0
    }
    // Retrocede para a data mais próxima (menor)
    --it;

    return it->second;
}




