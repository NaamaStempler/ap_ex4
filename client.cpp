#include "Udp.h"
#include "Driver.h"
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

using namespace std;

int main(int argc, char *argv[]) {
    std::cout << "Hello, from client" << std::endl;

    cout << argv[1] << endl;
    Udp udp(0, atoi(argv[1]));
    udp.initialize();

    char buffer[1024];
    /*int idOfDriver, ageOfDriver, experienceOfDriver, idVehicelOfDriver;
    char statusOfDriver, dummy;
    Driver newDriver;
    //getting input
    cin >> idOfDriver >> dummy >> ageOfDriver >> dummy >> statusOfDriver >> dummy
        >> experienceOfDriver >> dummy >> idVehicelOfDriver;
    //creating driver
    newDriver = Driver(idOfDriver, ageOfDriver, Marital(statusOfDriver)
            ,experienceOfDriver,idVehicelOfDriver);
    //serializing
*/
    //creating driver obj and serialize->sendDATA
    udp.sendData("driver+id");
    //getting the cab -> diserialize
    udp.reciveData(buffer, sizeof(buffer));
    //attach the cab to driver in the member
    //CabFactory *newCab = diserializebuffer
    //newDriver.setCab(newCab)
    cout << "client got: " << buffer << endl;
    udp.reciveData(buffer, sizeof(buffer));
    cout << "client got: " << buffer << endl;


//loop trip
    return 0;
}