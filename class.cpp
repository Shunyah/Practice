#include <iostream>
#include <map>
#include <string>

int main()
{

std::map<int, int> schools;
int n, number, maxCount = 0;
std::string a, b;

std::cin >> n;

for (int i = 0; i < n; i++) {
std::cin >> a >> b >> number;
if(schools.count(number) < 1)
schools[number] = 0;
else {
schools[number]++;
maxCount = std::max(maxCount, schools[number]);
}
}

for(auto e : schools) {
if (e.second == maxCount) std::cout << e.first;
}

return 0;
}


