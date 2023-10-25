#ifndef ITEMPWORKER_HPP
#define ITEMPWORKER_HPP


class ITempWorker {
public:
   ITempWorker();
   virtual ~ITempWorker();

   virtual int logWorkedHours(int hours) = 0;

};

#endif // EMPLOYEE_HPP