#include "TempWorker.hpp"

TempWorker::TempWorker(int hourlyValue) : Employee(hourlyValue) {}

void TempWorker::executeWorkday() {
    logWorkedHours(7);
}
