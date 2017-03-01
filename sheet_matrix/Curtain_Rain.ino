void cascade () {

  
if (timeCascade > interval) { cascadeCounter++; timeCascade = 0;}

//array 1
while (RunOnceSwitchOne == 0){
arrayTailLengthOne = random (arrayTailLengthMin, arrayTailLengthMax); offTimeOne = random (min_offTime,max_offTime); LEDindexOne = random (0,max_dropLength); RunOnceSwitchOne = 1;}

if (cascadeCounter > 0 && cascadeCounter <= arrayLength*2) {

if (LEDindexOne < arrayLength) {


 leds[arrayTopOne[LEDindexOne]] = CHSV (hueOne, satOne, valOne); LEDS.show(); 

if (timeElapsedOne > interval) {
LEDindexOne++; timeElapsedOne = 0; } }
if (LEDindexOne >= arrayTailLengthOne) {StartSecondLoopOne = 1;}

if (LEDindexOneA < arrayLength && StartSecondLoopOne == 1) {
leds[arrayTopOne[LEDindexOneA]] = CHSV (0, 0, 0); LEDS.show(); 
if (timeElapsedOneA > interval) {
LEDindexOneA++; timeElapsedOneA = 0; }}
}


//array 2
while (RunOnceSwitchTwo == 0){
arrayTailLengthTwo = random (arrayTailLengthMin, arrayTailLengthMax); offTimeTwo = random (min_offTime,max_offTime); LEDindexTwo = random (0,max_dropLength); RunOnceSwitchTwo = 1;}

if (cascadeCounter > 1 && cascadeCounter <= arrayLength*2+1) {

if (LEDindexTwo < arrayLength) {
leds[arrayTopTwo[LEDindexTwo]] = CHSV (hueTwo, satTwo, valTwo); LEDS.show(); 
if (timeElapsedTwo > interval) {
LEDindexTwo++; timeElapsedTwo = 0; } }
if (LEDindexTwo == arrayTailLengthTwo) {StartSecondLoopTwo = 1;}

if (LEDindexTwoA < arrayLength && StartSecondLoopTwo == 1) {
leds[arrayTopTwo[LEDindexTwoA]] = CHSV (0, 0, 0); LEDS.show(); 
if (timeElapsedTwoA > interval) {
LEDindexTwoA++; timeElapsedTwoA = 0; }}
}

//array 3
while (RunOnceSwitchThree == 0){
arrayTailLengthThree = random (arrayTailLengthMin, arrayTailLengthMax); offTimeThree = random (min_offTime,max_offTime); LEDindexThree = random (0,max_dropLength); RunOnceSwitchThree = 1;}

if (cascadeCounter > 2 && cascadeCounter <= arrayLength*2 + 2) {

if (LEDindexThree < arrayLength) {
leds[arrayTopThree[LEDindexThree]] = CHSV (hueThree, satThree, valThree); LEDS.show(); 
if (timeElapsedThree > interval) {
LEDindexThree++; timeElapsedThree = 0; } }
if (LEDindexThree == arrayTailLengthThree) {StartSecondLoopThree = 1;}

if (LEDindexThreeA < arrayLength && StartSecondLoopThree == 1) {
leds[arrayTopThree[LEDindexThreeA]] = CHSV (0, 0, 0); LEDS.show(); 
if (timeElapsedThreeA > interval) {
LEDindexThreeA++; timeElapsedThreeA = 0; }}
}




//array 4
while (RunOnceSwitchFour == 0){
arrayTailLengthFour = random (arrayTailLengthMin, arrayTailLengthMax); offTimeFour = random (min_offTime,max_offTime); LEDindexFour = random (0,max_dropLength); RunOnceSwitchFour = 1;}

if (cascadeCounter > 3 && cascadeCounter <= arrayLength*2 + 3){

if (LEDindexFour < arrayLength) {
leds[arrayTopFour[LEDindexFour]] = CHSV (hueFour, satFour, valFour); LEDS.show(); 
if (timeElapsedFour > interval) {
LEDindexFour++; timeElapsedFour = 0; } }
if (LEDindexFour == arrayTailLengthFour) {StartSecondLoopFour = 1;}

if (LEDindexFourA < arrayLength && StartSecondLoopFour == 1) {
leds[arrayTopFour[LEDindexFourA]] = CHSV (0, 0, 0); LEDS.show(); 
if (timeElapsedFourA > interval) {
LEDindexFourA++; timeElapsedFourA = 0; }}
}


//array 5
while (RunOnceSwitchFive == 0){
arrayTailLengthFive = random (arrayTailLengthMin, arrayTailLengthMax); offTimeFive = random (min_offTime,max_offTime); LEDindexFive = random (0,max_dropLength); RunOnceSwitchFive = 1;}

if (cascadeCounter > 4 && cascadeCounter <= arrayLength*2 + 4){

if (LEDindexFive < arrayLength) {
leds[arrayTopFive[LEDindexFive]] = CHSV (hueFive, satFive, valFive); LEDS.show(); 
if (timeElapsedFive > interval) {
LEDindexFive++; timeElapsedFive = 0; } }
if (LEDindexFive == arrayTailLengthFive) {StartSecondLoopFive = 1;}

if (LEDindexFiveA < arrayLength && StartSecondLoopFive == 1) {
leds[arrayTopFive[LEDindexFiveA]] = CHSV (0, 0, 0); LEDS.show(); 
if (timeElapsedFiveA > interval) {
LEDindexFiveA++; timeElapsedFiveA = 0; }}
}



//array 6
while (RunOnceSwitchSix == 0){
arrayTailLengthSix = random (arrayTailLengthMin, arrayTailLengthMax); offTimeSix = random (min_offTime,max_offTime); LEDindexSix = random (0,max_dropLength); RunOnceSwitchSix = 1;}

if (cascadeCounter > 5 && cascadeCounter <= arrayLength*2 + 5){

if (LEDindexSix < arrayLength) {
leds[arrayTopSix[LEDindexSix]] = CHSV (hueSix, satSix, valSix); LEDS.show(); 
if (timeElapsedSix > interval) {
LEDindexSix++; timeElapsedSix = 0; } }
if (LEDindexSix == arrayTailLengthSix) {StartSecondLoopSix = 1;}

if (LEDindexSixA < arrayLength && StartSecondLoopSix == 1) {
leds[arrayTopSix[LEDindexSixA]] = CHSV (0, 0, 0); LEDS.show(); 
if (timeElapsedSixA > interval) {
LEDindexSixA++; timeElapsedSixA = 0; }}
}


//array 7
while (RunOnceSwitchSeven == 0){
arrayTailLengthSeven = random (arrayTailLengthMin, arrayTailLengthMax); offTimeSeven = random (min_offTime,max_offTime); LEDindexSeven = random (0,max_dropLength); RunOnceSwitchSeven = 1;}

if (cascadeCounter > 6 && cascadeCounter <= arrayLength*2 + 6){

if (LEDindexSeven < arrayLength) {
leds[arrayTopSeven[LEDindexSeven]] = CHSV (hueSeven, satSeven, valSeven); LEDS.show(); 
if (timeElapsedSeven > interval) {
LEDindexSeven++; timeElapsedSeven = 0; } }
if (LEDindexSeven == arrayTailLengthSeven) {StartSecondLoopSeven = 1;}

if (LEDindexSevenA < arrayLength && StartSecondLoopSeven == 1) {
leds[arrayTopSeven[LEDindexSevenA]] = CHSV (0, 0, 0); LEDS.show(); 
if (timeElapsedSevenA > interval) {
LEDindexSevenA++; timeElapsedSevenA = 0; }}
}

//array 8 
while (RunOnceSwitchEight == 0){
arrayTailLengthEight = random (arrayTailLengthMin, arrayTailLengthMax); offTimeEight = random (min_offTime,max_offTime); LEDindexEight = random (0,max_dropLength); RunOnceSwitchEight = 1;}

if (cascadeCounter > 7 && cascadeCounter <= arrayLength*2 + 7){

if (LEDindexEight < arrayLength) {
leds[arrayTopEight[LEDindexEight]] = CHSV (hueEight, satEight, valEight); LEDS.show(); 
if (timeElapsedEight > interval) {
LEDindexEight++; timeElapsedEight = 0; } }
if (LEDindexEight == arrayTailLengthEight) {StartSecondLoopEight = 1;}

if (LEDindexEightA < arrayLength && StartSecondLoopEight == 1) {
leds[arrayTopEight[LEDindexEightA]] = CHSV (0, 0, 0); LEDS.show(); 
if (timeElapsedEightA > interval) {
LEDindexEightA++; timeElapsedEightA = 0; }}
}


//array 9 
while (RunOnceSwitchNine == 0){
arrayTailLengthNine = random (arrayTailLengthMin, arrayTailLengthMax); offTimeNine = random (min_offTime,max_offTime); LEDindexNine = random (0,max_dropLength); RunOnceSwitchNine = 1;}

if (cascadeCounter > 8 && cascadeCounter <= arrayLength*2 + 8){

if (LEDindexNine < arrayLength) {
leds[arrayTopNine[LEDindexNine]] = CHSV (hueNine, satNine, valNine); LEDS.show(); 
if (timeElapsedNine > interval) {
LEDindexNine++; timeElapsedNine = 0; } }
if (LEDindexNine == arrayTailLengthNine) {StartSecondLoopNine = 1;}

if (LEDindexNineA < arrayLength && StartSecondLoopNine == 1) {
leds[arrayTopNine[LEDindexNineA]] = CHSV (0, 0, 0); LEDS.show(); 
if (timeElapsedNineA > interval) {
LEDindexNineA++; timeElapsedNineA = 0; }}
}

//array 10
while (RunOnceSwitchTen == 0){
arrayTailLengthTen = random (arrayTailLengthMin, arrayTailLengthMax); offTimeTen = random (min_offTime,max_offTime); LEDindexTen = random (0,max_dropLength); RunOnceSwitchTen = 1;}

if (cascadeCounter > 9 && cascadeCounter <= arrayLength*2 + 9){

if (LEDindexTen < arrayLength) {
leds[arrayTopTen[LEDindexTen]] = CHSV (hueTen, satTen, valTen); LEDS.show(); 
if (timeElapsedTen > interval) {
LEDindexTen++; timeElapsedTen = 0; } }
if (LEDindexTen == arrayTailLengthTen) {StartSecondLoopTen = 1;}

if (LEDindexTenA < arrayLength && StartSecondLoopTen == 1) {
leds[arrayTopTen[LEDindexTenA]] = CHSV (0, 0, 0); LEDS.show(); 
if (timeElapsedTenA > interval) {
LEDindexTenA++; timeElapsedTenA = 0; }}
} 

if (cascadeCounter >= arrayLength*2+11) {
  LEDindexOneA = 0; LEDindexOne = 0; StartSecondLoopOne = 0; timeElapsedOneX = 0; RunOnceSwitchOne = 0;
  LEDindexTwoA = 0; LEDindexTwo = 0; StartSecondLoopTwo = 0; timeElapsedTwoX = 0; RunOnceSwitchTwo = 0;
  LEDindexThreeA = 0; LEDindexThree = 0; StartSecondLoopThree = 0; timeElapsedThreeX = 0; RunOnceSwitchThree = 0;
  LEDindexFourA = 0; LEDindexFour = 0; StartSecondLoopFour = 0; timeElapsedFourX = 0; RunOnceSwitchFour = 0;  
  LEDindexFiveA = 0; LEDindexFive = 0; StartSecondLoopFive = 0; timeElapsedFiveX = 0; RunOnceSwitchFive = 0;
  LEDindexSixA = 0; LEDindexSix = 0; StartSecondLoopSix = 0; timeElapsedSixX = 0; RunOnceSwitchSix = 0;
  LEDindexSevenA = 0; LEDindexSeven = 0; StartSecondLoopSeven = 0; timeElapsedSevenX = 0; RunOnceSwitchSeven = 0;
  LEDindexEightA = 0; LEDindexEight = 0; StartSecondLoopEight = 0; timeElapsedEightX = 0; RunOnceSwitchEight = 0;
  LEDindexNineA = 0; LEDindexNine = 0; StartSecondLoopNine = 0; timeElapsedNineX = 0; RunOnceSwitchNine = 0;
  LEDindexTenA = 0; LEDindexTen = 0; StartSecondLoopTen = 0; timeElapsedTenX = 0; RunOnceSwitchTen = 0;
  cascadeCounter = 0;}

}

