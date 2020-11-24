#include <iostream>
#include <string>
using std::string;
//made by austin wu, the code is so bad i wanna throw up if ur my employer plz dont judge me from looking at this
void calculatePaceorMPH();

int main() {
    string calcualteAnother = "";

    do{
    calculatePaceorMPH();
    std::cout << "Calculate another?: ";
    std::cin >> calcualteAnother;

    }while(calcualteAnother == "yes");

    return 0;
}



void calculatePaceorMPH(){

    bool okInput;
    int calculateTypeNunm = 0;
    do {
        std::cout << "Calculate Treadmill mph to Pace or Pace to mph: " << "\n" << "Calculate Pace to MPH: 1" << "\n"
                  << "Calculate MPH to Pace: 2" << "\n";

        std::cin >> calculateTypeNunm;

        switch (calculateTypeNunm) {
            case 1:
                okInput = 1;
                break;

            case 2:
                okInput = 1;
                break;

            default:
                okInput = 0;
                std::cout << "Type a valid Answer\n";
                break;

        }
    }while (okInput == 0);


    float inputMPH;
    int outputPaceMin;
    int outputPaceSec;
    int inputPaceMin;
    float inputPaceSec;
    float outputMPH;

    //pace to mph
    if(calculateTypeNunm == 2){
        std::cout << "MPH: ";
        std::cin >> inputMPH;
        float totalSecPace = 3600 / inputMPH;
        int outputPaceMin = static_cast<int>(totalSecPace) / 60;
        float outputPaceSec = static_cast<int>(totalSecPace) % 60;
        std::cout << "Pace: " << outputPaceMin << ":" << outputPaceSec << "\n";
    }
    //mph to pace

    else{
        std::cout << "Pace min: ";
        std::cin >> inputPaceMin;
        std::cout << "Pace sec: ";
        std::cin >> inputPaceSec;
        float totalSecPace = (inputPaceMin * 60) + inputPaceSec;
        outputMPH = 3600.0 / totalSecPace;
        std::cout << "MPH: " << outputMPH << "\n";
    }
}