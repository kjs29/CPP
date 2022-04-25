//Syntax for For Loop
https://youtu.be/l6HzdW65c4I

for (initialization; condition; increment or decrement) {
codeblock to be executed
}

* Order
First iteration

1.initialization
2.Check condition(true)
3.codeblock to be executed
4.increment or decrement

Second iteration
1.Check condition(true)
2.codeblock to be executed
3.increment or decrement.

Third iteration
.
.
.
Last iteration.
1.Check condition(false)
Finished.

---example
//it prints hello world nth times I type.
#include <iostream>

using namespace std;

int main () {
	
	int a;
	int b;
	cout << "Enter a number : ";
	cin >> b;
	for (a=1;a<=b;a++) {
		cout <<"hello world"<<a<<"\n";
	}
	
	return 0;
}