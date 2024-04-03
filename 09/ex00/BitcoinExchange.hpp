#pragma once

#include <iostream>
#include <map>
#include <string>
#include <fstream>
#include <cstdlib>
#include <utility> //std::pair

class BitcoinExchange {
  private:
    std::map<std::string, double> bitcoinPrices;
    BitcoinExchange();
  public:
    ~BitcoinExchange();
    BitcoinExchange(const BitcoinExchange & other);
    BitcoinExchange & operator=(const BitcoinExchange & op);

    BitcoinExchange(const std::string file);

    int		exchanger(std::string file);
    void  showDateValue(std::string line);
    int   verifyData(std::string line, std::string &date, float *value);
    int   isValid(std::string date);
    float getBitcoinPrices(std::string date);
};