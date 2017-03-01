#include <elapsedMillis.h>
#include <FastLED.h>
#define LED_COUNT 90   
struct CRGB leds[LED_COUNT];

#include "Wire.h"
#define DS3231_I2C_ADDRESS 0x68



//array 1
elapsedMillis timeElapsedOne;
elapsedMillis timeElapsedOneA;
elapsedMillis timeElapsedOneX;
byte LEDindexOne;
byte LEDindexOneA;
byte StartSecondLoopOne;
int offTimeOne;
byte RunOnceSwitchOne;
byte hueOne;
byte satOne;
byte valOne;
byte arrayTailLengthOne;
byte arrayPeakOne;

//array 2
elapsedMillis timeElapsedTwo;
elapsedMillis timeElapsedTwoA;
elapsedMillis timeElapsedTwoX;
byte LEDindexTwo;
byte LEDindexTwoA;
byte StartSecondLoopTwo;
int offTimeTwo;
byte RunOnceSwitchTwo;
byte hueTwo;
byte satTwo;
byte valTwo;
byte arrayTailLengthTwo;
byte arrayPeakTwo;


//array 3
elapsedMillis timeElapsedThree;
elapsedMillis timeElapsedThreeA;
elapsedMillis timeElapsedThreeX;
byte LEDindexThree;
byte LEDindexThreeA;
byte StartSecondLoopThree;
int offTimeThree;
byte RunOnceSwitchThree;
byte hueThree;
byte satThree;
byte valThree;
byte arrayTailLengthThree;
byte arrayPeakThree;


//array 4
elapsedMillis timeElapsedFour;
elapsedMillis timeElapsedFourA;
elapsedMillis timeElapsedFourX;
byte LEDindexFour;
byte LEDindexFourA;
byte StartSecondLoopFour;
int offTimeFour;
byte RunOnceSwitchFour;
byte hueFour;
byte satFour;
byte valFour;
byte arrayTailLengthFour;
byte arrayPeakFour;

//array 5
elapsedMillis timeElapsedFive;
elapsedMillis timeElapsedFiveA;
elapsedMillis timeElapsedFiveX;
byte LEDindexFive;
byte LEDindexFiveA;
byte StartSecondLoopFive;
int offTimeFive;
byte RunOnceSwitchFive;
byte hueFive;
byte satFive;
byte valFive;
byte arrayTailLengthFive;
byte arrayPeakFive;


//array 6
elapsedMillis timeElapsedSix;
elapsedMillis timeElapsedSixA;
elapsedMillis timeElapsedSixX;
byte LEDindexSix;
byte LEDindexSixA;
byte StartSecondLoopSix;
int offTimeSix;
byte RunOnceSwitchSix;
byte hueSix;
byte satSix;
byte valSix;
byte arrayTailLengthSix;
byte arrayPeakSix;

//array 7
elapsedMillis timeElapsedSeven;
elapsedMillis timeElapsedSevenA;
elapsedMillis timeElapsedSevenX;
byte LEDindexSeven;
byte LEDindexSevenA;
byte StartSecondLoopSeven;
int offTimeSeven;
byte RunOnceSwitchSeven;
byte hueSeven;
byte satSeven;
byte valSeven;
byte arrayTailLengthSeven;
byte arrayPeakSeven;


//array 8
elapsedMillis timeElapsedEight;
elapsedMillis timeElapsedEightA;
elapsedMillis timeElapsedEightX;
byte LEDindexEight;
byte LEDindexEightA;
byte StartSecondLoopEight;
int offTimeEight;
byte RunOnceSwitchEight;
byte hueEight;
byte satEight;
byte valEight;
byte arrayTailLengthEight;
byte arrayPeakEight;



//array 9
elapsedMillis timeElapsedNine;
elapsedMillis timeElapsedNineA;
elapsedMillis timeElapsedNineX;
byte LEDindexNine;
byte LEDindexNineA;
byte StartSecondLoopNine;
int offTimeNine;
byte RunOnceSwitchNine;
byte hueNine;
byte satNine;
byte valNine;
byte arrayTailLengthNine;
byte arrayPeakNine;


//array 10
elapsedMillis timeElapsedTen;
elapsedMillis timeElapsedTenA;
elapsedMillis timeElapsedTenX;
byte LEDindexTen;
byte LEDindexTenA;
byte StartSecondLoopTen;
int offTimeTen;
byte RunOnceSwitchTen;
byte hueTen;
byte satTen;
byte valTen;
byte arrayTailLengthTen;
byte arrayPeakTen;

byte cascadeCounter;
elapsedMillis timeCascade;

byte arrayLength = 9;
byte arrayTailLength = 9;
byte arrayTailLengthMin = 3;
byte arrayTailLengthMax = 9; 
int interval = 300;
byte max_dropLength = 0;
byte min_dropLength = 0;
int max_offTime = 10000;
int min_offTime = 1000;
byte masterHue = 30;
byte masterSat = 255;
byte masterVal = 90;
byte masterVariableSwitch = 1;

int arrayTopOne[] = {81, 82, 83, 84, 85, 86, 87, 88, 89};
int arrayBottomOne[] ={89, 88, 87, 86, 85, 84, 83, 82, 81};
int arrayLeftOne[] = {81, 80, 63, 62, 45, 44, 27, 26, 9, 8};
int arrayRightOne[] = {8, 9, 26, 27, 44, 45, 62, 63, 80, 81};

int arrayTopTwo[] = {80, 79, 78, 77, 76, 75, 74, 73, 72};
int arrayBottomTwo[] = {72,73, 74, 75, 76, 77, 78, 79, 80};
int arrayLeftTwo [] = {82 ,79, 64, 61, 46, 43, 28, 25, 10, 7};
int arrayRightTwo[] = {7, 10, 25, 28, 43, 46, 61, 64, 79, 82};

int arrayTopThree[] = {63, 64, 65, 66, 67, 68, 69, 70, 71};
int arrayBottomThree [] = {71, 70, 69, 68, 67, 66, 65, 64, 63};
int arrayLeftThree [] = {83, 78, 65, 60, 47, 42, 29, 24, 11, 6};
int arrayRightThree [] = {6, 11, 24, 29, 42, 47, 60, 65, 78, 83};

int arrayTopFour[] = {62, 61, 60, 59, 58, 57, 56, 55, 54};
int arrayBottomFour[] = {54, 55, 56, 57, 58, 59, 60, 61, 62};
int arrayLeftFour [] = {84, 77, 66, 59, 48, 41, 30, 23, 12, 5};
int arrayRightFour[] = {5, 12, 23, 30, 41, 48, 59, 66, 77, 84};


int arrayTopFive[] = {45, 46, 47, 48, 49, 50, 51, 52, 53};
int arrayBottomFive[] = {53, 52, 51, 50, 49, 48, 47, 46, 45};
int arrayLeftFive[] = {85, 76, 67, 58, 49, 40, 31, 22, 13, 4};
int arrayRightFive[] = {4, 13, 22, 31, 40, 49, 58, 67, 76, 85};


int arrayTopSix[] = {44, 43, 42, 41, 40, 39, 38, 37, 36};
int arrayBottomSix[] = {36, 37, 38, 39, 40, 41, 42, 43, 44};
int arrayLeftSix[] = {86, 75, 68, 57, 50, 39, 32, 21, 14, 3};
int arrayRightSix[] = {3, 14, 21, 32, 39, 50, 57, 68, 75, 86};


int arrayTopSeven[] = {27, 28, 29, 30, 31, 32, 33, 34, 35};
int arrayBottomSeven[] = {35, 34, 33, 32, 31, 30, 29, 28, 27};
int arrayLeftSeven[] = {87, 74, 69, 56, 51, 38, 33, 20, 15, 2};
int arrayRightSeven[] = {2, 15, 20, 33, 38, 51, 56, 69, 74, 87};


int arrayTopEight[] = {26, 25, 24, 23, 22, 21, 20, 19, 18};
int arrayBottomEight[] = {18, 19, 20, 21, 22, 23, 24, 25, 26};
int arrayLeftEight[] = {88, 73, 70, 55, 52, 37, 34, 19, 16, 1};
int arrayRightEight[] = {1, 16, 19, 34, 37, 52, 55, 70, 73, 88};


int arrayTopNine[] = {9, 10, 11, 12, 13, 14, 15, 16, 17};
int arrayBottomNine[] = {17, 16, 15, 14, 13, 12, 11, 10, 9};
int arrayLeftNine[] = {89, 72, 71, 54, 53, 36, 35, 18, 17, 0};
int arrayRightNine[] = {0, 17, 18, 35, 36, 53, 54, 71, 72, 89};


int arrayTopTen[] = {8, 7, 6, 5, 4, 3, 2, 1, 0};
int arrayBottomTen[] = {0, 1, 2, 3, 4, 5, 6, 7, 8};



int mode = 3;
int x;
int y;


//0: from the top, 1: from the right, 2: from the bottom, 3: from the left
byte orientation = 3; 
void loop() {
if (orientation == 0) { arrayLength = 9; }
if (orientation == 1) { arrayLength = 10; }  
if (orientation == 2) { arrayLength = 9; }
if (orientation == 3) { arrayLength = 10; }

hueOne = masterHue;
satOne = masterSat;
valOne = masterVal;
hueTwo = masterHue;
satTwo = masterSat;
valTwo = masterVal;
hueThree = masterHue;
satThree = masterSat;
valThree = masterVal;
hueFour = masterHue;
satFour = masterSat;
valFour = masterVal;
hueFive = masterHue;
satFive = masterSat;
valFive = masterVal;
hueSix = masterHue;
satSix = masterSat;
valSix = masterVal;
hueSeven = masterHue;
satSeven = masterSat;
valSeven = masterVal;
hueEight = masterHue;
satEight = masterSat;
valEight = masterVal;
hueNine = masterHue;
satNine = masterSat;
valNine = masterVal;
hueTen = masterHue;
satTen = masterSat;
valTen = masterVal;


//cascade
if (mode == 4) {
  masterHue = 200;
  arrayTailLengthMin = 4;
  arrayTailLengthMax = 4;
  cascade ();
  
}

//curtain rain
if (mode == 0) {
max_offTime = 0;
min_offTime = 0;
masterHue = 40;
arrayTailLengthMin = 4;
arrayTailLengthMax = 4;
improved_matrix ();
}

//old matrix, fixed tail
if (mode == 1) {
hue_is_time ();
arrayTailLengthMin = 9;
arrayTailLengthMax = 9;
improved_matrix (); 
}

//new matrix, variable tail
if (mode == 2) {
max_offTime = 4000;
min_offTime = 1000;
interval = 400;
hue_is_time ();
improved_matrix ();
}

//equaliser prep
if (mode == 3) {
max_offTime = 0;
min_offTime = 0;
interval = 100;
max_offTime = 100;
min_offTime = 100;
masterHue = 160;
arrayTailLengthMin = 0;
arrayTailLengthMax = 9;
graphic_equaliser (); }

} //end loop



void setup() {
 FastLED.addLeds<WS2812,11,GRB>(leds, LED_COUNT);
Serial.begin (9600);
//clear leds
for (int i = 0; i< LED_COUNT; i++){
leds[i] = CHSV (0, 0, 0);
} LEDS.show();
randomSeed(analogRead(1));

 Wire.begin();
 
 
  // set the initial time here:
  // DS3231 seconds, minutes, hours, day, date, month, year
  //setDS3231time(0,23,15,1,12,2,17);

}
