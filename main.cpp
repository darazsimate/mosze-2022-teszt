#include <iostream>

constexpr int N_ELEMENTS = 100;

int main()
{
    int *b = new int[NELEMENTS]; // N_ELEMENTS
    std::cout << '1-100 ertekek duplazasa' // " " ;
    for (int i = 0;) // ciklus feltétel hiányos
    {
        b[i] = i * 2;
    }
    for (int i = 0; i; i++) // ciklus feltétel hibás
    {
        std::cout << "Ertek:" // pontos vessző
    }    
    std::cout << "Atlag szamitasa: " << std::endl;
    int atlag; 
    for (int i = 0; i < N_ELEMENTS, i++)  // ; helyett , 
    {
        atlag += b[i] // pontos vessző hiányzik
    }
    atlag /= N_ELEMENTS;
    std::cout << "Atlag: " << atlag << std::endl;
    return 0;
}
