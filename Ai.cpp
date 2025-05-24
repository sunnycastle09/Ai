#include <iostream>
#include <vector>
#include <sstream>

void sentense();
void Data();

std::vector<std::string> data;
std::string Adata = "i ate apple/i ate cat/i love cat/";
std::vector<std::string> Avector;
std::vector<std::vector<std::string>> Bvector;
std::string word;       

int main()
{    ////////////////////////////////////////       중요한거: 그냥 seekg()쓰는법 배워서 ssi커서 위치 바꾸는 법 배워라
    //Avector.push_back("i");// 초기값 설정
    //Bvector[0].push_back("ate");
    //Avector.push_back("ate");
    //Bvector[1].push_back("apple");
    sentense();
    int b = 0, num = 0;
    std::string tmp;
    Bvector.resize(100);
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
            Bvector[b].push_back(word);
            b++;
            if (num==b+1)
                break;
        }
    }
    std::cout << Avector[0]<<" " << Bvector[0][0] << " " << Avector[1] << " " << Bvector[1][0];
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