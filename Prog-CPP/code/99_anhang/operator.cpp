#include <iostream>
#include <stdexcept>

class MyArray {
private:
    int data[5];
public:
    // Costruttore per inizializzare i dati
    MyArray() {for(int i = 0; i < 5; ++i) data[i] = i * 10;}

    // 1. Versione Non-Const (Lettura e Scrittura)
    int& operator[](int index) {
        return data[index];
    }

    // 2. Versione Const (Solo Lettura)
    const int& operator[](int index) const {
        return data[index];
    }
};