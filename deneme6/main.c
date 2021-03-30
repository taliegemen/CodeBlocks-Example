#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define RS232 0
#define RS422 1
#define RS485 2

#define BAUD_9600 9600
#define BAUD_115200 115200
#define BAUD_38400 38400

struct SerialDevices {
    char DeviceName[64];
    int Interface;
    char ComPort[32];

    double Baudrate;
    int DataBit;
    int Parity;
    int StopBit;
};



int main()
{
    typedef enum Data{Zero, One, Two, Three, Four, Five, Six, Seven, Eight}Bit;
    enum Parity{None, Odd, Even}Value;
    enum Stop{No, Single, Dual}Bitt;

    struct SerialDevices Serial1;
    struct SerialDevices Serial2;
    struct SerialDevices Serial3;
    struct SerialDevices Serial4;

    strcpy(Serial1.DeviceName, "Calibrator");
    Serial1.Interface = RS232;
    strcpy(Serial1.ComPort, "Com3");
    Serial1.Baudrate = BAUD_115200;
    Bit = Seven;
    Value = Even;
    Bitt = Single;
    Serial1.DataBit = Bit;
    Serial1.Parity = Even;
    Serial1.StopBit = Single;

    strcpy(Serial2.DeviceName, "Multimeter");
    Serial2.Interface = RS232;
    strcpy(Serial2.ComPort, "Com4");
    Serial2.Baudrate = BAUD_9600;
    Bit = Seven;
    Value = Even;
    Bitt = Single;
    Serial2.DataBit = Bit;
    Serial2.Parity = Even;
    Serial2.StopBit = Single;

    strcpy(Serial3.DeviceName, "Power Supply");
    Serial3.Interface = RS422;
    strcpy(Serial3.ComPort, "Com6");
    Serial3.Baudrate = BAUD_9600;
    Bit = Seven;
    Value = Odd;
    Bitt = Dual;
    Serial3.DataBit = Bit;
    Serial3.Parity = Odd;
    Serial3.StopBit = Dual;

    strcpy(Serial4.DeviceName, "Test Device");
    Serial4.Interface = RS485;
    strcpy(Serial4.ComPort, "Com7");
    Serial4.Baudrate = BAUD_38400;
    Bit = Eight;
    Value = None;
    Bitt = Single;
    Serial4.DataBit = Eight;
    Serial4.Parity = None;
    Serial4.StopBit = Single;

    int GirilenPort;
    printf( "Com Port Numarası Giriniz:");
    scanf("%d", &GirilenPort);

    switch(GirilenPort){

        case 3:
            printf("Cihaz Adı: %s \n",Serial1.DeviceName);
            printf("Cihaz Arayüzü: %d \n",Serial1.Interface);
            printf("Cihaz Portu: %s \n",Serial1.ComPort);
            printf("Cihaz Baudrate: %d \n",Serial1.Baudrate);
            printf("Cihaz DataBit: %d \n",Serial1.DataBit);
            printf("Cihaz Paritesi: %d \n",Serial1.Parity);
            printf("Cihaz StopBit: %d \n",Serial1.StopBit);
            break;

        case 4:
            printf("Cihaz Adı: %s \n",Serial2.DeviceName);
            printf("Cihaz Arayüzü: %d \n",Serial2.Interface);
            printf("Cihaz Portu: %s \n",Serial2.ComPort);
            printf("Cihaz Baudrate: %d \n",Serial2.Baudrate);
            printf("Cihaz DataBit: %d \n",Serial2.DataBit);
            printf("Cihaz Paritesi: %d \n",Serial2.Parity);
            printf("Cihaz StopBit: %d \n",Serial2.StopBit);
            break;

        case 6:
            printf("Cihaz Adı: %s \n",Serial3.DeviceName);
            printf("Cihaz Arayüzü: %d \n",Serial3.Interface);
            printf("Cihaz Portu: %s \n",Serial3.ComPort);
            printf("Cihaz Baudrate: %d \n",Serial3.Baudrate);
            printf("Cihaz DataBit: %d \n",Serial3.DataBit);
            printf("Cihaz Paritesi: %d \n",Serial3.Parity);
            printf("Cihaz StopBit: %d \n",Serial3.StopBit);
            break;

        case 7:
            printf("Cihaz Adı: %s \n",Serial4.DeviceName);
            printf("Cihaz Arayüzü: %d \n",Serial4.Interface);
            printf("Cihaz Portu: %s \n",Serial4.ComPort);
            printf("Cihaz Baudrate: %d \n",Serial4.Baudrate);
            printf("Cihaz DataBit: %d \n",Serial4.DataBit);
            printf("Cihaz Paritesi: %d \n",Serial4.Parity);
            printf("Cihaz StopBit: %d \n",Serial4.StopBit);
            break;

        default:
            printf("Com Porta Cihaz Bagli Degil");
            break;
    }
    return 0;
}
