#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_set>

void erase_odd_numbers(std::vector<int>& vec){
	for (int i = 0; i < vec.size(); i++){
		if (vec[i] % 2 != 0){
			vec.erase(vec.begin()+i);
		}
	}
}

// void erase_duplicates(std::vector<int>& vec){
// 	for (int i = 0; i < vec.size()-1; i++){
// 		for (int j = i+1; j < vec.size(); j++){
// 			if (vec[i] == vec[j]){
// 				vec.erase(vec.begin()+j);
// 			}
// 		}
// 	}
// }

void erase_duplicates(std::vector<int>& vec){
	std::unordered_set<int> s(vec.begin(), vec.end());
	vec.assign(s.begin(), s.end());
	std::reverse(vec.begin(),vec.end());
}

int main(){
	std::vector<int> vec = {1,2,3,4,5,6,7,8,9,10,1,2,3,4,5,6};
	
	for (int i = 0; i < vec.size(); i++){
		std::cout << vec[i] << "\t";
	}
	std::cout << std::endl;

	erase_odd_numbers(vec);

	for (int i = 0; i < vec.size(); i++){
		std::cout << vec[i] << "\t";
	}
	std::cout << std::endl;

	erase_duplicates(vec);

	for (int i = 0; i < vec.size(); i++){
		std::cout << vec[i] << "\t";
	}
	std::cout << std::endl;

	return 0;
}