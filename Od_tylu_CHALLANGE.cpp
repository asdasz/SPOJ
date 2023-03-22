#include<iostream>
int main() {
	int i = 0, t[1008];
	while (std::cin >> t[i], i++)i--;std::cout<<t[i];
	while (i--) std::cout << t[i];
}