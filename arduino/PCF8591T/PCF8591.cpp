/**
 PCF8591.cpp
 PCF8591 I2Cインターフェース8ビットA/D & D/Aコンバータチップを利用する為のArduino用クラス
 
*/

#include "PCF8591.h"

//コンストラクタ
PCF8591::PCF8591(){
  
}

//デストラクタ
PCF8591::~PCF8591(){
  end();
}

//i2c 初期処理
void PCF8591::begin(void){
  Wire.begin();
}

//終了処理
void PCF8591::end(void){

}

//バイトデータ読み込み
byte PCF8591::read(const int i2cAddr,const int adc){
  byte result;
  
  Wire.beginTransmission(i2cAddr);
  Wire.write(adc);
  Wire.endTransmission();
  //delay(10);
  
  Wire.requestFrom(i2cAddr, 2);
  while(Wire.available()){
    result = Wire.read();
    result = Wire.read();
  }
  
  return result;
}
