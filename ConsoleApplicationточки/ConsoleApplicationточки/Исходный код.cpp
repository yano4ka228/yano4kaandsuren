#include <iostream>
#include <string.h>
using namespace std;
void rush(int x, int y) {
	if (x>0 && y>0) {
cout << "o";
for (int i = 0; i < x - 2;i++)
	
{
cout << "-";
}
if (x != 1)
{
cout << "o";
}
for (int i = 0; i < y - 2;i++) {
cout << endl;
if (y != 1) {
if (y >= 3) {
for (int j = 0; j < x - 1; j++) {
if (j == 0 || j + 1 == x)
cout << "|";
else cout << " ";
}
cout << "|";
}
}
}
if (y != 1) {
cout << endl;
cout << "o";

for (int i = 0; i < x - 2;i++)
{
cout << "-";
}
if (x != 1)
{
cout << "o";
}
}
}
}
int main()
{
rush(5, 5);
system("pause");
return (0);

}