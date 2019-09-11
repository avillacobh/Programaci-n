#include <iostream> //directiva del procesador

int main()
/*
  Notas:
  -cout: imprimit en pantalla
  -\n: nueva linea 
*/
  
{
  int w = 0;
  
  std::cout <<"¿Cuál es tu masa en kilogramos?" <<std::endl;

  std::cin >> w;

  if(w<=60) {
    std::cout<<"estas flaco\n";
  }

  else
    {
    std:cout<< "estas gordo";
    }
    
  return 0;
}
