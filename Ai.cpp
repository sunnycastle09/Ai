#include <iostream>
#include <vector>
#include <sstream>

void sentense();
void Data();

std::vector<std::string> data;
std::string Adata = "i ate apple/i ate cat/i love cat/";
std::vector<std::string> Avector;
std::vector<std::string> Bvector;
std::string word;       

int main()
{   
    sentense();
    int b = 0, num = 0;
    std::string tmp;
    for (int i = 1;i < data.size();i++) {
        std::istringstream iss(data[i]);
        std::istringstream a(data[i]);  
        while (a>>tmp) {
            num++;
        }
        iss >> word;
        while (1) {
            Avector.push_back(word);
            iss >> word;
            Bvector.push_back(word);
            b++;
            if (num==b+1)
                break;
        }
    }
    std::cout << Avector[0] << " " << Bvector[0] << " " << Avector[1] << " " << Bvector[1];
}

void Data() {
}

void sentense() { // Populate the vector with sentences
   int i = 0;
   std::string tmp;
   for (;;) {
       if (Adata[i] != '/') {
           tmp += Adata[i];
       } else {
           data.push_back(tmp);
           tmp.clear();
       }
       i++;
       if (Adata[i] == '\0') {
           break;
       }
   }
}