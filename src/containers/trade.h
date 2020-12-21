//
// Created by naked on 25/08/2018.
//

#ifndef FINANALYTICS_OPTION_H
#define FINANALYTICS_OPTION_H

#include <chrono>
#include <boost/date_time/gregorian/gregorian.hpp>
#include <iostream>
#include <vector>
#include <string>

using namespace boost::gregorian;

class Trade {
public:
    std::string counterParty;
    date tradeDate;
};


class Option: Trade {
public:
    double strike;
    date expiry;
    Option(double k, date dt);
};

class FxOption: Option {
public:
    double strike;
    date expiry;
    FxOption(double k, date dt);
};

class Portfolio{
public:
    std::vector<Trade> trades;
};

#endif //FINANALYTICS_OPTION_H
