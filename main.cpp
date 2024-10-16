#include <iostream>

constexpr int N_ELEMENTS = 100;

int main()
{
    int *b = new int[NELEMENTS]; // Név elírás N_ELEMENTS
    std::cout << '1-100 ertekek duplazasa' // karakterhez használatos idézőjel hiba + hiányzó pontosvessző
    for (int i = 0;)  //for ciklusban hiány 
    {
        b[i] = i * 2;
    }
    for (int i = 0; i; i++)
    {
        std::cout << "Ertek:" 
    }    
    std::cout << "Atlag szamitasa: " << std::endl;
    int atlag;
    for (int i = 0; i < N_ELEMENTS, i++) // for cikluson belül pontosvessző helyett sima vessző
    {
        atlag += b[i]  //pontosvessző hiány
    }
    atlag /= N_ELEMENTS;
    std::cout << "Atlag: " << atlag << std::endl;
    return 0;
}
