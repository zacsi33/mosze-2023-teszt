#include <iostream>

constexpr int N_ELEMENTS = 100;

int main()
{
    // 1. NELEMENTS hibás volt, N_ELEMENTS a helyes konstans
    int *b = new int[N_ELEMENTS]; 
    
    // 2. Kettős idézőjel kell a stringekhez, és hiányzott a pontosvessző a végéről
    std::cout << "1-100 ertekek duplazasa" << std::endl; 
    
    // 3. A for ciklus hiányos volt (hiányzott a feltétel és az inkrementálás)
    for (int i = 0; i < N_ELEMENTS; i++) 
    {
        b[i] = (i + 1) * 2; // (Opcionális) 1-100 közötti értékek duplázása
    }
    
    // 4. A ciklusfeltétel (i) nem volt megfelelő, és hiányzott a kiíratás vége
    for (int i = 0; i < N_ELEMENTS; i++)
    {
        std::cout << "Ertek: " << b[i] << std::endl;
    }    
    
    std::cout << "Atlag szamitasa: " << std::endl;
    
    // 5. Az átlagot inicializálni kell 0-ra, és double célszerűbb a precizitáshoz
    double atlag = 0; 
    
    // 6. A for ciklusban vessző helyett pontosvessző kell az elválasztáshoz
    for (int i = 0; i < N_ELEMENTS; i++)
    {
        atlag += b[i]; // Hiányzó pontosvessző pótolva
    }
    
    atlag /= N_ELEMENTS;
    std::cout << "Atlag: " << atlag << std::endl;

    // 7. Memória felszabadítása (jó gyakorlat)
    delete[] b;

    return 0;
}