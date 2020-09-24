#include <Stack> //Söû duïng lôùp Stack.
int main()
/*
pre: Ngöôøi söû duïng nhaäp vaøo moät soá nguyeân n vaø n soá thöïc.
post: Caùc soá seõ ñöôïc in ra theo thöù töï ngöôïc.
uses: lôùp Stack vaø caùc phöông thöùc cuûa Stack.
*/
{
int n;
double item;
Stack<double> numbers;
cout <<"Type in an integer n followed by n decimal numbers."<< endl;
cout << " The numbers will be printed in reverse order." << endl;
cin >> n;
for (int i = 0; i < n; i++) {
cin >> item;
numbers.push(item);
}
cout << endl << endl;
while (!numbers.empty()) {
numbers.top(item)
cout << item << " ";
numbers.pop();
}
cout << endl;
}