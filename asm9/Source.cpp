#include<iostream>
using namespace std;

int main() {

	int num1 = 7;
	int num2 = 4;
	int result;

	__asm {
		call arithmeticOperation
		jmp quit

		arithmeticOperation:
		mov eax, num1
			mov ebx, num2
			xor edx, edx
			div ebx
			mov result, edx
			ret

			quit:
	}

	cout << result;


	system("pause");
	return 0;
}