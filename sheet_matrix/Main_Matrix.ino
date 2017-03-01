void graphic_equaliser () {




//array 1
while (RunOnceSwitchOne == 0){
arrayPeakOne = random (arrayTailLengthMin, arrayTailLengthMax); Serial.println(arrayPeakOne); LEDindexOneA = arrayPeakOne; offTimeOne = random (min_offTime,max_offTime); LEDindexOne = random (0,max_dropLength); RunOnceSwitchOne = 1;}

if (timeElapsedOneX > offTimeOne) {

if (LEDindexOne < arrayPeakOne) {
 if (orientation == 0) { leds[arrayTopOne[LEDindexOne]] = CHSV (hueOne, satOne, valOne); LEDS.show();} 
 if (orientation == 1) { leds[arrayRightOne[LEDindexOne]] = CHSV (hueOne, satOne, valOne); LEDS.show(); }
 if (orientation == 2) { leds[arrayBottomOne[LEDindexOne]] = CHSV (hueOne, satOne, valOne); LEDS.show(); }
 if (orientation == 3) { leds[arrayLeftOne[LEDindexOne]] = CHSV (hueOne, satOne, valOne); LEDS.show(); }
if (timeElapsedOne > interval) {
LEDindexOne++; timeElapsedOne = 0; } }
if (LEDindexOne >= arrayPeakOne) {StartSecondLoopOne = 1;}

if (LEDindexOneA > 0 && StartSecondLoopOne == 1) {
if (timeElapsedOneA > interval) {
LEDindexOneA--; timeElapsedOneA = 0; }}
if (orientation == 0) {leds[arrayTopOne[LEDindexOneA]] = CHSV (0, 0, 0); LEDS.show(); }
if (orientation == 1) {leds[arrayRightOne[LEDindexOneA]] = CHSV (0, 0, 0); LEDS.show(); }
if (orientation == 2) {leds[arrayBottomOne[LEDindexOneA]] = CHSV (0, 0, 0); LEDS.show(); }
if (orientation == 3) {leds[arrayLeftOne[LEDindexOneA]] = CHSV (0, 0, 0); LEDS.show();}
if (LEDindexOneA == 0) { LEDindexOne = 0; StartSecondLoopOne = 0; timeElapsedOneX = 0; RunOnceSwitchOne = 0;}
}


//array 2
while (RunOnceSwitchTwo == 0){
arrayPeakTwo = random (arrayTailLengthMin, arrayTailLengthMax); LEDindexTwoA = arrayPeakTwo; offTimeTwo = random (min_offTime,max_offTime); LEDindexTwo = random (0,max_dropLength); RunOnceSwitchTwo = 1;}

if (timeElapsedTwoX > offTimeTwo) {

if (LEDindexTwo < arrayPeakTwo) {
if (orientation == 0) { leds[arrayTopTwo[LEDindexTwo]] = CHSV (hueTwo, satTwo, valTwo); LEDS.show(); }
if (orientation == 1) {leds[arrayRightTwo[LEDindexTwo]] = CHSV (hueTwo, satTwo, valTwo); LEDS.show();}
if (orientation == 2) { leds[arrayBottomTwo[LEDindexTwo]] = CHSV (hueTwo, satTwo, valTwo); LEDS.show(); }
if (orientation == 3) { leds[arrayLeftTwo[LEDindexTwo]] = CHSV (hueTwo, satTwo, valTwo); LEDS.show();}
if (timeElapsedTwo > interval) {
LEDindexTwo++; timeElapsedTwo = 0; } }
if (LEDindexTwo >= arrayPeakTwo) {StartSecondLoopTwo = 1;}

if (LEDindexTwoA > 0 && StartSecondLoopTwo == 1) {
if (timeElapsedTwoA > interval) {
LEDindexTwoA--; timeElapsedTwoA = 0; }}
if (orientation == 0) { leds[arrayTopTwo[LEDindexTwoA]] = CHSV (0, 0, 0); LEDS.show(); }
if (orientation == 1) {leds[arrayRightTwo[LEDindexTwoA]] = CHSV (0, 0, 0); LEDS.show(); }
if (orientation == 2) {leds[arrayBottomTwo[LEDindexTwoA]] = CHSV (0, 0, 0); LEDS.show();}
if (orientation == 3) {leds[arrayLeftTwo[LEDindexTwoA]] = CHSV (0, 0, 0); LEDS.show();}
if (LEDindexTwoA == 0) { LEDindexTwo = 0; StartSecondLoopTwo = 0; timeElapsedTwoX = 0; RunOnceSwitchTwo = 0;}
}



//array 3

while (RunOnceSwitchThree == 0){
arrayPeakThree = random (arrayTailLengthMin, arrayTailLengthMax); LEDindexThreeA = arrayPeakThree; offTimeThree = random (min_offTime,max_offTime); LEDindexThree = random (0,max_dropLength); RunOnceSwitchThree = 1;}

if (timeElapsedThreeX > offTimeThree) {

if (LEDindexThree < arrayPeakThree) {
if (orientation == 0) { leds[arrayTopThree[LEDindexThree]] = CHSV (hueThree, satThree, valThree); LEDS.show(); }
if (orientation == 1) {leds[arrayRightThree[LEDindexThree]] = CHSV (hueThree, satThree, valThree); LEDS.show();}
if (orientation == 2) {leds[arrayBottomThree[LEDindexThree]] = CHSV (hueThree, satThree, valThree); LEDS.show(); }
if (orientation == 3) {leds[arrayLeftThree[LEDindexThree]] = CHSV (hueThree, satThree, valThree); LEDS.show();}
if (timeElapsedThree > interval) {
LEDindexThree++; timeElapsedThree = 0; } }
if (LEDindexThree >= arrayPeakThree) {StartSecondLoopThree = 1;}

if (LEDindexThreeA > 0 && StartSecondLoopThree == 1) {
if (timeElapsedThreeA > interval) {
LEDindexThreeA--; timeElapsedThreeA = 0; }}
if (orientation == 0) {leds[arrayTopThree[LEDindexThreeA]] = CHSV (0, 0, 0); LEDS.show(); }
if (orientation == 1) {leds[arrayRightThree[LEDindexThreeA]] = CHSV (0, 0, 0); LEDS.show();}
if (orientation == 2) {leds[arrayBottomThree[LEDindexThreeA]] = CHSV (0, 0, 0); LEDS.show();}
if (orientation == 3) {leds[arrayLeftThree[LEDindexThreeA]] = CHSV (0, 0, 0); LEDS.show();}
if (LEDindexThreeA == 0) { LEDindexThree = 0; StartSecondLoopThree = 0; timeElapsedThreeX = 0; RunOnceSwitchThree = 0;}
}


//array 4

while (RunOnceSwitchFour == 0){
arrayPeakFour = random (arrayTailLengthMin, arrayTailLengthMax); LEDindexFourA = arrayPeakFour; offTimeFour = random (min_offTime,max_offTime); LEDindexFour = random (0,max_dropLength); RunOnceSwitchFour = 1;}

if (timeElapsedFourX > offTimeFour) {

if (LEDindexFour < arrayPeakFour) {
if (orientation == 0) {leds[arrayTopFour[LEDindexFour]] = CHSV (hueFour, satFour, valFour); LEDS.show(); }
if (orientation == 1) {leds[arrayRightFour[LEDindexFour]] = CHSV (hueFour, satFour, valFour); LEDS.show();}
if (orientation == 2) {leds[arrayBottomFour[LEDindexFour]] = CHSV (hueFour, satFour, valFour); LEDS.show(); }
if (orientation == 3) {leds[arrayLeftFour[LEDindexFour]] = CHSV (hueFour, satFour, valFour); LEDS.show();}
if (timeElapsedFour > interval) {
LEDindexFour++; timeElapsedFour = 0; } }
if (LEDindexFour >= arrayPeakFour) {StartSecondLoopFour = 1;}

if (LEDindexFourA > 0 && StartSecondLoopFour == 1) {
if (timeElapsedFourA > interval) {
LEDindexFourA--; timeElapsedFourA = 0; }}
if (orientation == 0) {leds[arrayTopFour[LEDindexFourA]] = CHSV (0, 0, 0); LEDS.show(); }
if (orientation == 1) {leds[arrayRightFour[LEDindexFourA]] = CHSV (0, 0, 0); LEDS.show();}
if (orientation == 2) {leds[arrayBottomFour[LEDindexFourA]] = CHSV (0, 0, 0); LEDS.show(); }
if (orientation == 3) {leds[arrayLeftFour[LEDindexFourA]] = CHSV (0, 0, 0); LEDS.show();}
if (LEDindexFourA == 0) { LEDindexFour = 0; StartSecondLoopFour = 0; timeElapsedFourX = 0; RunOnceSwitchFour = 0;}
}


//array 5

while (RunOnceSwitchFive == 0){
arrayPeakFive = random (arrayTailLengthMin, arrayTailLengthMax); LEDindexFiveA = arrayPeakFive; offTimeFive = random (min_offTime,max_offTime); LEDindexFive = random (0,max_dropLength); RunOnceSwitchFive = 1;}

if (timeElapsedFiveX > offTimeFive) {

if (LEDindexFive < arrayPeakFive) {
if (orientation == 0) {leds[arrayTopFive[LEDindexFive]] = CHSV (hueFive, satFive, valFive); LEDS.show(); }
if (orientation == 1) {leds[arrayRightFive[LEDindexFive]] = CHSV (hueFive, satFive, valFive); LEDS.show();}
if (orientation == 2) {leds[arrayBottomFive[LEDindexFive]] = CHSV (hueFive, satFive, valFive); LEDS.show(); }
if (orientation == 3) {leds[arrayLeftFive[LEDindexFive]] = CHSV (hueFive, satFive, valFive); LEDS.show();}
if (timeElapsedFive > interval) {
LEDindexFive++; timeElapsedFive = 0; } }
if (LEDindexFive >= arrayPeakFive) {StartSecondLoopFive = 1;}

if (LEDindexFiveA > 0 && StartSecondLoopFive == 1) {
if (timeElapsedFiveA > interval) {
LEDindexFiveA--; timeElapsedFiveA = 0; }}
if (orientation == 0) {leds[arrayTopFive[LEDindexFiveA]] = CHSV (0, 0, 0); LEDS.show(); }
if (orientation == 1) {leds[arrayRightFive[LEDindexFiveA]] = CHSV (0, 0, 0); LEDS.show();}
if (orientation == 2) {leds[arrayBottomFive[LEDindexFiveA]] = CHSV (0, 0, 0); LEDS.show(); }
if (orientation == 3) {leds[arrayLeftFive[LEDindexFiveA]] = CHSV (0, 0, 0); LEDS.show();}
if (LEDindexFiveA == 0) { LEDindexFive = 0; StartSecondLoopFive = 0; timeElapsedFiveX = 0; RunOnceSwitchFive = 0;}
}



//array 6

while (RunOnceSwitchSix == 0){
arrayPeakSix = random (arrayTailLengthMin, arrayTailLengthMax); LEDindexSixA = arrayPeakSix; offTimeSix = random (min_offTime,max_offTime); LEDindexSix = random (0,max_dropLength); RunOnceSwitchSix = 1;}

if (timeElapsedSixX > offTimeSix) {

if (LEDindexSix < arrayPeakSix) {
if (orientation == 0) {leds[arrayTopSix[LEDindexSix]] = CHSV (hueSix, satSix, valSix); LEDS.show(); }
if (orientation == 1) {leds[arrayRightSix[LEDindexSix]] = CHSV (hueSix, satSix, valSix); LEDS.show(); }
if (orientation == 2) {leds[arrayBottomSix[LEDindexSix]] = CHSV (hueSix, satSix, valSix); LEDS.show(); }
if (orientation == 3) {leds[arrayLeftSix[LEDindexSix]] = CHSV (hueSix, satSix, valSix); LEDS.show(); }
if (timeElapsedSix > interval) {
LEDindexSix++; timeElapsedSix = 0; } }
if (LEDindexSix >= arrayPeakSix) {StartSecondLoopSix = 1;}

if (LEDindexSixA > 0 && StartSecondLoopSix == 1) {
if (timeElapsedSixA > interval) {
LEDindexSixA--; timeElapsedSixA = 0; }}
if (orientation == 0) {leds[arrayTopSix[LEDindexSixA]] = CHSV (0, 0, 0); LEDS.show(); }
if (orientation == 1) {leds[arrayRightSix[LEDindexSixA]] = CHSV (0, 0, 0); LEDS.show(); }
if (orientation == 2) {leds[arrayBottomSix[LEDindexSixA]] = CHSV (0, 0, 0); LEDS.show(); }
if (orientation == 3) {leds[arrayLeftSix[LEDindexSixA]] = CHSV (0, 0, 0); LEDS.show(); }
if (LEDindexSixA == 0) { LEDindexSix = 0; StartSecondLoopSix = 0; timeElapsedSixX = 0; RunOnceSwitchSix = 0;}
}


//array 7

while (RunOnceSwitchSeven == 0){
arrayPeakSeven = random (arrayTailLengthMin, arrayTailLengthMax); LEDindexSevenA = arrayPeakSeven; offTimeSeven = random (min_offTime,max_offTime); LEDindexSeven = random (0,max_dropLength); RunOnceSwitchSeven = 1;}

if (timeElapsedSevenX > offTimeSeven) {

if (LEDindexSeven < arrayPeakSeven) {
if (orientation == 0) {leds[arrayTopSeven[LEDindexSeven]] = CHSV (hueSeven, satSeven, valSeven); LEDS.show(); }
if (orientation == 1) {leds[arrayRightSeven[LEDindexSeven]] = CHSV (hueSeven, satSeven, valSeven); LEDS.show(); }
if (orientation == 2) {leds[arrayBottomSeven[LEDindexSeven]] = CHSV (hueSeven, satSeven, valSeven); LEDS.show(); }
if (orientation == 3) {leds[arrayLeftSeven[LEDindexSeven]] = CHSV (hueSeven, satSeven, valSeven); LEDS.show(); }
if (timeElapsedSeven > interval) {
LEDindexSeven++; timeElapsedSeven = 0; } }
if (LEDindexSeven >= arrayPeakSeven) {StartSecondLoopSeven = 1;}

if (LEDindexSevenA > 0 && StartSecondLoopSeven == 1) {
if (timeElapsedSevenA > interval) {
LEDindexSevenA--; timeElapsedSevenA = 0; }}
if (orientation == 0) {leds[arrayTopSeven[LEDindexSevenA]] = CHSV (0, 0, 0); LEDS.show(); }
if (orientation == 1) {leds[arrayRightSeven[LEDindexSevenA]] = CHSV (0, 0, 0); LEDS.show(); }
if (orientation == 2) {leds[arrayBottomSeven[LEDindexSevenA]] = CHSV (0, 0, 0); LEDS.show(); }
if (orientation == 3) {leds[arrayLeftSeven[LEDindexSevenA]] = CHSV (0, 0, 0); LEDS.show(); }
if (LEDindexSevenA == 0) { LEDindexSeven = 0; StartSecondLoopSeven = 0; timeElapsedSevenX = 0; RunOnceSwitchSeven = 0;}
}


//array 8

while (RunOnceSwitchEight == 0){
arrayPeakEight = random (arrayTailLengthMin, arrayTailLengthMax); LEDindexEightA = arrayPeakEight; offTimeEight = random (min_offTime,max_offTime); LEDindexEight = random (0,max_dropLength); RunOnceSwitchEight = 1;}

if (timeElapsedEightX > offTimeEight) {

if (LEDindexEight < arrayPeakEight) {
if (orientation == 0) {leds[arrayTopEight[LEDindexEight]] = CHSV (hueEight, satEight, valEight); LEDS.show(); }
if (orientation == 1) {leds[arrayRightEight[LEDindexEight]] = CHSV (hueEight, satEight, valEight); LEDS.show(); }
if (orientation == 2) {leds[arrayBottomEight[LEDindexEight]] = CHSV (hueEight, satEight, valEight); LEDS.show(); }
if (orientation == 3) {leds[arrayLeftEight[LEDindexEight]] = CHSV (hueEight, satEight, valEight); LEDS.show(); }
if (timeElapsedEight > interval) {
LEDindexEight++; timeElapsedEight = 0; } }
if (LEDindexEight >= arrayPeakEight) {StartSecondLoopEight = 1;}

if (LEDindexEightA > 0 && StartSecondLoopEight == 1) {
if (timeElapsedEightA > interval) {
LEDindexEightA--; timeElapsedEightA = 0; }}
if (orientation == 0) {leds[arrayTopEight[LEDindexEightA]] = CHSV (0, 0, 0); LEDS.show(); }
if (orientation == 1) {leds[arrayRightEight[LEDindexEightA]] = CHSV (0, 0, 0); LEDS.show(); }
if (orientation == 2) {leds[arrayBottomEight[LEDindexEightA]] = CHSV (0, 0, 0); LEDS.show(); }
if (orientation == 3) {leds[arrayLeftEight[LEDindexEightA]] = CHSV (0, 0, 0); LEDS.show(); }
if (LEDindexEightA == 0) { LEDindexEight = 0; StartSecondLoopEight = 0; timeElapsedEightX = 0; RunOnceSwitchEight = 0;}
}


//array 9

while (RunOnceSwitchNine == 0){
arrayPeakNine = random (arrayTailLengthMin, arrayTailLengthMax); LEDindexNineA = arrayPeakNine; offTimeNine = random (min_offTime,max_offTime); LEDindexNine = random (0,max_dropLength); RunOnceSwitchNine = 1;}

if (timeElapsedNineX > offTimeNine) {

if (LEDindexNine < arrayPeakNine) {
if (orientation == 0) {leds[arrayTopNine[LEDindexNine]] = CHSV (hueNine, satNine, valNine); LEDS.show(); }
if (orientation == 1) {leds[arrayRightNine[LEDindexNine]] = CHSV (hueNine, satNine, valNine); LEDS.show(); }
if (orientation == 2) {leds[arrayBottomNine[LEDindexNine]] = CHSV (hueNine, satNine, valNine); LEDS.show(); }
if (orientation == 3) {leds[arrayLeftNine[LEDindexNine]] = CHSV (hueNine, satNine, valNine); LEDS.show(); }
if (timeElapsedNine > interval) {
LEDindexNine++; timeElapsedNine = 0; } }
if (LEDindexNine >= arrayPeakNine) {StartSecondLoopNine = 1;}

if (LEDindexNineA > 0 && StartSecondLoopNine == 1) {
if (timeElapsedNineA > interval) {
LEDindexNineA--; timeElapsedNineA = 0; }}
if (orientation == 0) {leds[arrayTopNine[LEDindexNineA]] = CHSV (0, 0, 0); LEDS.show(); }
if (orientation == 1) {leds[arrayRightNine[LEDindexNineA]] = CHSV (0, 0, 0); LEDS.show(); }
if (orientation == 2) {leds[arrayBottomNine[LEDindexNineA]] = CHSV (0, 0, 0); LEDS.show(); }
if (orientation == 3) {leds[arrayLeftNine[LEDindexNineA]] = CHSV (0, 0, 0); LEDS.show(); }
if (LEDindexNineA == 0) { LEDindexNine = 0; StartSecondLoopNine = 0; timeElapsedNineX = 0; RunOnceSwitchNine = 0;}
}


//array 10

while (RunOnceSwitchTen == 0){
arrayPeakTen = random (arrayTailLengthMin, arrayTailLengthMax); LEDindexTenA = arrayPeakTen; offTimeTen = random (min_offTime,max_offTime); LEDindexTen = random (0,max_dropLength); RunOnceSwitchTen = 1;}

if (timeElapsedTenX > offTimeTen) {

if (LEDindexTen < arrayPeakTen) {
if (orientation == 0) {leds[arrayTopTen[LEDindexTen]] = CHSV (hueTen, satTen, valTen); LEDS.show(); }
if (orientation == 1) {}
if (orientation == 2) {leds[arrayBottomTen[LEDindexTen]] = CHSV (hueTen, satTen, valTen); LEDS.show(); }
if (orientation == 3) {}
if (timeElapsedTen > interval) {
LEDindexTen++; timeElapsedTen = 0; } }
if (LEDindexTen >= arrayPeakTen) {StartSecondLoopTen = 1;}

if (LEDindexTenA > 0 && StartSecondLoopTen == 1) {
if (timeElapsedTenA > interval) {
LEDindexTenA--; timeElapsedTenA = 0; }}
if (orientation == 0) {leds[arrayTopTen[LEDindexTenA]] = CHSV (0, 0, 0); LEDS.show(); }
if (orientation == 1) {}
if (orientation == 2) {leds[arrayBottomTen[LEDindexTenA]] = CHSV (0, 0, 0); LEDS.show(); }
if (orientation == 3) {}
if (LEDindexTenA == 0) { LEDindexTen = 0; StartSecondLoopTen = 0; timeElapsedTenX = 0; RunOnceSwitchTen = 0;}
}
  
}

