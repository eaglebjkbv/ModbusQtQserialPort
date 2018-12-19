#ifndef BENIMSERIPORT_H
#define BENIMSERIPORT_H

#include<QSerialPort>

class BenimSeriPort : public QSerialPort
{
public:
    BenimSeriPort();
    void writeData();
    void readData(char* data);
};

#endif // BENIMSERIPORT_H
