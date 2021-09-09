#include <iostream>
#include <fstream>
#include <vector>

int main(){
  std::cout << "Fishing" << std::endl;
  int count = 0;
  std::string fish;
  std::string buffer;
  std::ifstream file_river("..\\src\\File\\river.txt");
  std::ofstream file_basket("..\\src\\File\\basket.txt", std::ios::app);

  if(file_river && file_basket){
    while(fish != "exit"){
    std::cout << "Enter name fish." << std::endl;
    std::cin >> fish;
      while (!file_river.eof()){
        file_river >> buffer;
        if(fish == buffer){
          file_basket << fish << "\n";
          break;
        }
      }
    }    
  }else{
    std::cout << "Couldn't open the file!" << std::endl;
  }
  // std::ifstream in_file_basket("..\\src\\File\\basket.txt");
  // int in_count = 0;
  // std::string word;
  // while(!in_file_basket.eof()){
  //   in_file_basket >> word;
  //   in_count++;
  // }
  // std::cout << "Count fish = " << in_count << std::endl;
  file_river.close();
  file_basket.close();
  // in_file_basket.close();
  return 0;
}

// Реализуйте простую симуляцию игры в рыбалку. 
// В исходном текстовом файле реки (river.txt) 
// задаётся список из видов рыб, которые можно 
// в ней поймать. Рыбок может быть сколько угодно, 
// разных видов. Виды при этом могут повторяться.

// В начале программы пользователь указывает, 
// какую именно рыбу он сейчас будет ловить — вид этой рыбы. 
// После этого из первого файла друг за другом 
// осуществляется чтение его содержимого, вид за видом. 
// Если на отдельных шагах вид совпал с указанным 
// пользователем, в выходной файл basket.txt 
// (корзинка) записывается этот вид.

// В конце программы показывается, сколько 
// было поймано рыб за текущую ловлю. 
// Программу можно запускать несколько раз, 
// при этом уже пойманные рыбы должны 
// сохраняться в файле-корзинке.



// Пример содержания исходного файла

// sunfish
// shad
// carp
// bass
// bullhead
// carp
// walleye
// catfish
// carp