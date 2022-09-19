#include <iostream>

constexpr int N_ELEMENTS = 100;

int main()
{
    int *b = new int[N_ELEMENTS]; // N_ELEMENTS
    std::cout << "1-100 ertekek duplazasa" << std::endl; // " " ;
    for ( int i = 1; i <= N_ELEMENTS; i++) // ciklus feltétel hiányos
    {
        b[i] = i * 2;
    }
    for ( int i = 1; i <= N_ELEMENTS; i++) // ciklus feltétel hibás
    {
        std::cout << "Ertek:" << std::endl; // pontos vessző, endl
        std::cout << b[i] << std::endl;
    }    
    std::cout << "Atlag szamitasa: " << std::endl;
    int atlag; 
    for ( int i = 1; i <= N_ELEMENTS; i++)  // ; helyett , 
    {
        atlag += b[i]; // pontos vessző hiányzik
    }
    atlag /= N_ELEMENTS;
    std::cout << "Atlag: " << atlag << std::endl;
    return 0;

     std::cout << "Dornyi Péter írta " std::endl;
}
