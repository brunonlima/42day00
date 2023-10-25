#ifndef ICONTRACTWORKER_HPP
#define ICONTRACTWORKER_HPP


class IContractWorker {
public:
   IContractWorker();
   virtual ~IContractWorker();

   virtual int logNonWorkedHours(int hours) = 0;
   virtual int getNonWorkedHours() const = 0;

};

#endif // EMPLOYEE_HPP