#include <iostream> // Preprocesser declaration to enable output to stdio (copied from Emil)
using namespace std; // Without this I'd have to write //std.cout (copied from Emil - how frequent would std.cout be required?)

int main()

{
	int i = 1, sum = 0;
	while (i < 1000)
	
	{
		if (i % 5 == 0) 
		
		{
			sum += i;
		}
		else if (i % 3 == 0)
		{
			sum += i;
		}
		i++;
	}
	cout << sum;
	return 0;
}
		

