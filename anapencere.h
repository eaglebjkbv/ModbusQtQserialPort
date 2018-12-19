#ifndef ANAPENCERE_H
#define ANAPENCERE_H

#include <QMainWindow>
class QSerialPort;

namespace Ui {
class AnaPencere;
}

class AnaPencere : public QMainWindow
{
    Q_OBJECT

public:
    explicit AnaPencere(QWidget *parent = nullptr);
    ~AnaPencere();
    QSerialPort* serialPort;
    unsigned int crc_chk(unsigned char* data, unsigned char length);


private slots:

    void on_pushButton_2_clicked();

    void on_pushButton_clicked();
    void readData();

    void on_pushButtonGonder_clicked();

private:
    Ui::AnaPencere *ui;
    QByteArray rData;
};

#endif // ANAPENCERE_H
