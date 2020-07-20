
#include <vector>
#include <iostream>
int main() 
{ 
    std :: vector <int> vec1 {1, 2, 3, 4, 5}; 
    std :: vector <int> vec2 {7, 7, 7, 7, 7}; 
  
    // Imprimir elementos 
    std :: cout << "Vector1 contiene :"; 
    for(int i = 0; i < vec1.size(); i++) 
        std :: cout << " " << vec1[i]; 
    std :: cout << "\n"; 
      
    // Imprimir elementos 
    std :: cout << "Vector2 contiene :"; 
    for(unsigned int i = 0; i < vec2.size(); i++) 
        std :: cout << " " << vec2[i]; 
    std :: cout << "\n\n"; 
      
    // std :: move función
    //mueve los primero 4 elemntos de vec1 después del 7
    std :: move (vec1.begin(), vec1.begin() + 4, vec2.begin() + 1); 
      
    // Imprimri elementos
    std :: cout << "Vector2 contenido después de la función std::move "; 
    for(unsigned int i = 0; i < vec2.size(); i++) 
        std :: cout << " " << vec2[i]; 
    std :: cout << "\n"; 
  
    return 0; 
} 

