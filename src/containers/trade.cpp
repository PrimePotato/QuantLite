//
// Created by naked on 26/08/2018.
//

#include "trade.h"

Option::Option(double k, date dt): strike(k), expiry(dt) {}

FxOption::FxOption(double k, date dt) : Option(k, dt) {

}
