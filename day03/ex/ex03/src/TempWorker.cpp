#include "TempWorker.hpp"

TempWorker::TempWorker(int hourlyValue) : Employee(hourlyValue) {}

int TempWorker::executeWorkday() {
    logWorkedHours(7);
    return 7;
}
