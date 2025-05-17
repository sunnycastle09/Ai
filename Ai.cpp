#include <iostream>
#include <vector>
#include <string> 

void sentense();
void Data();

std::vector<std::string> data;
std::string Adata = "i ate apple/i love cat z/i ate cat z";

int main()
{
	
}

void Data() { //일단 어절 한개 추출 그리고 그 어절의 뒤에오는 어절 추출 여기서 다른 문장에서 처음어절을 찾고 그 뒤에 오는 어절을 vector로 저장해야함 
	
}

void sentense() {//vector에 문장담음
	int i = 0;
	std::string tmp;
	for (;;) {
		if (Adata[i] != '/') {
			tmp += Adata[i];
		}
		else {
			data.push_back(tmp);
			tmp.clear();
		}
		i++;
		if (Adata[i] == '\0') {
			break;
		}
	}
}