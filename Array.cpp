Syntax for creating array(Arrays can contain only the same data type.)
int arrayName [size] = {element1, element2, element3 };


---example
//we can assign elements.
#include <iostream>
using namespace std;

int main () {
	
	int primeYear[5] = {2022, 2023, 2024, 2025, 2026};
	
	cout << primeYear[0];
	
	return 0;
}


---example
//we can initialize arrays without assigning elements.
#include <iostream>

using namespace std;

int main () {
	
	int primeYear[5];
	
	cout << "Your prime years will be : \n"; 
	
	for (int i = 0;i<5;i++) {
	
		primeYear[i] = 2022 + i;
		cout << primeYear[i] <<"\n";
	}
	
	return 0;
}

---
//we can also initialize an array without specifying the size of an array
#include <iostream>
int main () {
    int primeYear[] = {2022,2023,2024,2025};
    for (int a = 0; a < 4; a++) {
        std::cout << primeYear[a]<<"\n";
    }
    return 0;
}

---
//size of an array
#include <iostream>

int main () {
  int primeYear[]={2022,2023,2024,2025,2026};
  std::cout << sizeof(primeYear);
  return 0;
}

result : 
20      //the reason why we get 20 is that 
---
//To get the number of elements in the array we can write codes like this

#include <iostream>

int main () {
    int primeYear[]={2022,2023,2024,2025,2026};
    std::cout<< sizeof(primeYear)/sizeof(int);
return 0;
}

---
//Creating a multidimensional arrays
/*
string letters[2][4]; 		//this one is to declare multidimensional array without giving vaues.
string letters[2][4] = {	//this one is to declare multidimensional array assigning values.
{"a","b","c","d"},
{"e","f","g","h"}
}
*/
---example
#include <iostream>
int main () {
	std::string letters[2][4] = {
	{"a","b","c","d"},
	{"e","f","g","h"}
	};
	for (int a=0;a<2;a++){
		for (int b = 0; b<4; b++){
			std::cout << letters[a][b];
		}
	
	}
	
	return 0;
}