#include <Arduino.h>
#include <DS1302.h>
#include "U8g2lib.h"

Ds1302 rtc(8, 9, 10);

//void initRTCTime(void) {         //初始化，进行初始时间的设置
//    rtc.writeProtect(false);     //去掉写保护
//    rtc.halt(false);          //清除时钟停止标志
//    Time t(2021,8,4,14,35,30,3);//新建时间
//}

//void Ds1302Write(int i, int i1);

void Ds1302Init(){
    char n;
    Ds1302Write(0x8E,0X00);
    for (n=0;n<7;n++){
        Ds1302Write(WRITE_RTC_ADDR[n],TIME[n]);
    }
}


void setup() {

// write your initialization code here
}

void loop() {
// write your code here
}

