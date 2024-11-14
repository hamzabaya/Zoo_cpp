#include <iostream>
#include "Animal.h"
#include "Mammal.h"
#include "Bird.h"
#include "Reptile.h"
#include "Zoo.h"

using namespace std;

int main() {
    Mammal* mammal1 = new Mammal("hamza", "Golden", "Carnivore", "Grassland", "Roar", false, 5, 90.5, 1.1, "Tawny");
    Bird* bird1 = new Bird("baya", "Green", "Herbivore", "Jungle", "soundbird", true, 2, 0.5, 0.25, 0.5);
    Reptile* reptile1 = new Reptile("rep", "Grenn", "Carnivore", "Desert", "soundrep", false, 3, 10.0, 1.2, "Scaled");

    Mammal* mammal2 = new Mammal("kungfupanda", "black and white", "herbivorous", "Forest", "dont know", false, 4, 100.0, 1.2, "bubbled");
    Bird* bird2 = new Bird("Eagle", "Brown", "Carnivore", "Mountains", "Screech", false, 7, 5.0, 0.9, 2.0);
    Reptile* reptile2 = new Reptile("Gecko", "Green", "Insectivore", "Tropical", "Click", true, 1, 0.1, 0.15, "Smooth");

    Zoo myZoo("civilized world");

    myZoo.addAnimal(mammal1);
    myZoo.addAnimal(bird1);
    myZoo.addAnimal(reptile1);
    myZoo.addAnimal(mammal2);
    myZoo.addAnimal(bird2);
    myZoo.addAnimal(reptile2);

    cout << "Listing all animals in the Zoo:\n";
    myZoo.listAnimals();

    string searchName = "baya";
    int index = myZoo.searchAnimalByName(searchName);
    if (index != -1) {
        cout << "\nAnimal " << searchName << " found at index: " << index << "\n";
    } else {
        cout << "\nAnimal " << searchName << " not found in the Zoo.\n";
    }

    string removeName = "hamza";
    cout << "\nRemoving animal with name: " << removeName << "\n";
    myZoo.removeAnimalByName(removeName);

    cout << "\nListing animals in the Zoo after removal:\n";
    myZoo.listAnimals();

    cout << "\nAverage age of Mammals: " << myZoo.averageAgeForType("Mammal") << "\n";
    cout << "Average age of Birds: " << myZoo.averageAgeForType("Bird") << "\n";
    cout << "Average age of Reptiles: " << myZoo.averageAgeForType("Reptile") << "\n";

    delete mammal1;
    delete bird1;
    delete reptile1;
    delete mammal2;
    delete bird2;
    delete reptile2;

    return 0;
}
