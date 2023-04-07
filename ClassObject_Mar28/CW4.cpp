#include <iostream>
using namespace std;

// ------------------------------
//       Class Declarations
// ------------------------------
class Moon {
    private:
        string name;
        double distance; // distance to the planet it is the moon of (km)
        double mass; // kg
        double diameter; // km
    public:
        Moon() {}
        Moon(string n, double dist, double m, double diam) {
            name = n;
            distance = dist;
            mass = m;
            diameter = diam;
        }
        string getName() {
            return name;
        }
        double getDistance() {
            return distance;
        }
        double getMass() {
            return mass;
        }
        double getDiameter() {
            return diameter;
        }
};

class Planet {
    private:
        string name;
        double distance; // distance from sun's center (km)
        double mass; // kg
        double diameter; // km
        int numMoons;
        Moon topMoons[3]; // top 3 moons of the planet
    public:
        Planet() {
            for (int i = 0; i < 3; i++) {
                topMoons[i] = Moon();
            }
        }
        Planet(string n, double dist, double m, double diam, int moonCnt)
            : name(n), distance(dist), mass(m), diameter(diam) {
            numMoons = moonCnt;
            for (int i = 0; i < 3; i++) {
                topMoons[i] = Moon();
            }
        }
        Planet(string n, double dist, double m, double diam, int moonCnt, Moon tM[3])
            : name(n), distance(dist), mass(m), diameter(diam) {
            numMoons = moonCnt;
            for (int i = 0; i < min(moonCnt, 3); i++) {
                topMoons[i] = tM[i];
            }
            for (int i = moonCnt; i < 3; i++) {
                topMoons[i] = Moon();
            }
        }
        string getName() {
            return name;
        }
        double getDistance() {
            return distance;
        }
        double getMass() {
            return mass;
        }
        double getDiameter() {
            return diameter;
        }
        int getNumMoons() {
            return numMoons;
        }
        Moon getMoon(int id) {
            if (id >= 0 && id < 3) return topMoons[id];
            return Moon();
        }
};

// ------------------------------
//            Functions
// ------------------------------

// Declarations
void createPlanets();
void runProgram();

double distanceP(Planet a, Planet b);
string findMoon(Moon x, Planet arr[9]);

Planet solarSystem[9];

// Main
int main() {
    runProgram();
}

// Function definitions
void runProgram() {
    createPlanets();
    cout << "Distance between Earth and Venus is " << distanceP(solarSystem[2], solarSystem[1]) << " km.\n";

    Moon ariel("Ariel", 190900, 12.9e20, 1158);
    cout << ariel.getName() << " is found on " << findMoon(ariel, solarSystem) << ".\n";
}

void createPlanets() {
    // Distance = semi-major axis (orbital distance, distance from center of sun or planet)
    // Diameter = volumetric mean radius (or along-orbit axis radius) * 2
    Planet mercury("Mercury", 57.909e6, 0.33010e24, 2439.7 * 2, 0);
    
    Planet venus("Venus", 108.210e6, 4.8673e24, 6051.8 * 2, 0);

    Moon earthMoons[3] = {
        Moon("Moon", 0.3844e6, 0.07346e24, 1737.4 * 2)
    };
    Planet earth("Earth", 149.598e6, 5.9722e24, 6371.0 * 2, 1, earthMoons);

    Moon marsMoons[3] = {
        Moon("Phobos", 9378, 10.6e15, 11.4 * 2),
        Moon("Deimos", 23459, 2.4e15, 6.0 * 2)
    };
    Planet mars("Mars", 227.956e6, 0.64169e24, 3389.5 * 2, 2, marsMoons);

    Moon jupiterMoons[3] = {
        Moon("Io", 422e3, 89.3e21, 3643),
        Moon("Europa", 671e3, 48e21, 3122),
        Moon("Ganymede", 1070e3, 148.2e21, 5262)
    };
    Planet jupiter("Jupiter", 778.479e6, 1898.13e24, 69911 * 2, 92, jupiterMoons);

    // Mass: https://nssdc.gsfc.nasa.gov/planetary/factsheet/saturniansatfact.html
    // Semi-major axis, diameter: https://sites.google.com/carnegiescience.edu/sheppard/moons/saturnmoons
    Moon saturnMoons[3] = {
        Moon("Titan", 1221865, 1345.5e20, 5150),
        Moon("Hyperion", 1500933, 0.056e20, 266),
        Moon("Iapetus", 3560854, 18.1e20, 1436)
    };
    Planet saturn("Saturn", 1432.041e6, 568.32e24, 58232 * 2, 83, saturnMoons);

    // Mass: https://nssdc.gsfc.nasa.gov/planetary/factsheet/uraniansatfact.html
    // Semi-major axis, diameter: https://sites.google.com/carnegiescience.edu/sheppard/moons/uranusmoons
    Moon uranusMoons[3] = {
        Moon("Ariel", 190900, 12.9e20, 1158),
        Moon("Umbriel", 266000, 12.2e20, 1169),
        Moon("Titania", 436300, 34.2e20, 1578)
    };
    Planet uranus("Uranus", 2867.043e6, 86.811e24, 25362 * 2, 27, uranusMoons);

    // Semi-major axis, mass: https://nssdc.gsfc.nasa.gov/planetary/factsheet/neptuniansatfact.html
    // Diameter: https://sites.google.com/carnegiescience.edu/sheppard/moons/neptunemoons
    Moon neptuneMoons[3] = {
        Moon("Naiad", 48.227e3, 0.002e20, 58),
        Moon("Thalassa", 50.075e3, 0.004e20, 80),
        Moon("Despina", 52.526e3, 0.02e20, 148)
    };
    Planet neptune("Neptune", 4514.953e6, 102.409e24, 24622 * 2, 14, neptuneMoons);

    // Semi-major axis: https://nssdc.gsfc.nasa.gov/planetary/factsheet/plutofact.html
    // Mass, diameter: Chat-GPT
    Moon plutoMoons[3] = {
        Moon("Charon", 19596, 1.586e21, 1212),
        Moon("Styx", 42650, 1.5e15, 20),
        Moon("Nix", 48690, 5.0e16, 45)
    };
    Planet pluto("Pluto", 5869.656e6, 0.01303e24, 1188 * 2, 5);

    solarSystem[0] = mercury;
    solarSystem[1] = venus;
    solarSystem[2] = earth;
    solarSystem[3] = mars;
    solarSystem[4] = jupiter;
    solarSystem[5] = saturn;
    solarSystem[6] = uranus;
    solarSystem[7] = neptune;
    solarSystem[8] = pluto;
}


double distanceP(Planet a, Planet b) { // returns the distance between the planets (just subtract the distance from sun)
    return abs(a.getDistance() - b.getDistance());
}

string findMoon(Moon x, Planet arr[9]) { // returns the name of the planet the moon is on
    for (int i = 0; i < 9; i++) {
        int numMoons = arr[i].getNumMoons();
        for (int j = 0; j < min(numMoons, 3); j++) {
            if (arr[i].getMoon(j).getName() == x.getName()) {
                return arr[i].getName();
            }
        }
    }
    return "-1";
}