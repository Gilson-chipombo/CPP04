#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"


int main() {
    std::cout << "\n--- Teste individual de destrutores via ponteiros para Animal ---\n";
    const Animal* j = new Dog();
    const Animal* i = new Cat();

    std::cout << "\nChamando makeSound individualmente:\n";
    j->makeSound();
    i->makeSound();

    std::cout << "\nDeletando j e i:\n";
    delete j;
    delete i;

    std::cout << "\n--- Teste com array de Animal* ---\n";
    const int size = 10;
    Animal* animals[size];

    // Criar 5 Dogs e 5 Cats
    for (int idx = 0; idx < size; ++idx) {
        if (idx < size / 2) 
            animals[idx] = new Dog();
        else
            animals[idx] = new Cat();
    }

    std::cout << "\nVerificando tipos e sons:\n";
    for (int idx = 0; idx < size; ++idx) {
        std::cout << "[" << idx << "] Tipo: " << animals[idx]->getType() << " → ";
        animals[idx]->makeSound();
    }

    std::cout << "\nDeletando todos os animais do array:\n";
    for (int idx = 0; idx < size; ++idx) {
        delete animals[idx]; // Deve destruir corretamente cada Dog/Cat + Brain + Animal
    }

    std::cout << "\n--- Fim dos testes ---\n";
    return 0;
}
