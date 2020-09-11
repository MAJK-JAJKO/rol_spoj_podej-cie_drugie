#include <iostream>
#include <vector>
using namespace std;

int main()
{
	int t, n,x;
	
	std::cin >> t;
	for(int i=0; i<t;i++)
	{
		vector<int> tab;
	

		std::cin >> n;
		for(int i = 0; i < n; i++)
		{
			cin >> x;
			tab.push_back(x);
		}
		x = tab[0];
		tab.erase(tab.begin());
		tab.push_back(x);
		for (int i = 0; i < tab.size(); i++)
		{
			cout << tab[i]<< " ";
		}
	}
	return 0;
}