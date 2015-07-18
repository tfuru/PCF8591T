/**
 PCF8591.h
 PCF8591 I2Cインターフェース8ビットA/D & D/Aコンバータチップを利用する為のArduino用クラス
 github: 
*/

#ifndef PCF8591_h
#define PCF8591_h

#include <Arduino.h>
#include "Wire.h"

#define PCF8591_ADC0 0x00
#define PCF8591_ADC1 0x01
#define PCF8591_ADC2 0x02
#define PCF8591_ADC3 0x03

class PCF8591 {

  private:
    
  public:
     PCF8591();
      ~PCF8591();
      void begin(void);
      void end(void);
      byte read(const int i2cAddr,const int readADCO);
};

#endif
