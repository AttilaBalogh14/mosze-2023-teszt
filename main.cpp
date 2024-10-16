#include <iostream>

constexpr int N_ELEMENTS = 100;

int main()
{
    int *b = new int[N_ELEMENTS]; // Név elírás N_ELEMENTS
    std::cout << "1-100 ertekek duplazasa" << std::endl; // karakterhez használatos idézőjel hiba + hiányzó pontosvessző
    for (int i = 1;i<=N_ELEMENTS;i++)  //for ciklusban hiány 
    {
        b[i] = i * 2;
    }
    for (int i = 1; i<= N_ELEMENTS; i++)
    {
        std::cout << "Ertek: " << b[i] << std::endl;
    }    
    std::cout << "Atlag szamitasa: " << std::endl;
    int atlag = 0;
    int osszeg = 0;
    for (int i = 1; i <= N_ELEMENTS; i++) // for cikluson belül pontosvessző helyett sima vessző
    {
        osszeg += b[i];  //pontosvessző hiány
    }
    atlag = osszeg / N_ELEMENTS;
    std::cout << "Atlag: " << atlag << std::endl;
    return 0;
}
