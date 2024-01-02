#include <iostream>
using namespace std;
int main() {
    int rows;
    cout << "Enter the number of rows for the pyramid: ";
    cin >> rows;
    for (int i = 1; i <= rows; i++) 
	{
        int num = 1;
        for (int space = 1; space <= rows - i; space++) 
		{
            cout << "  ";
        }
        for (int j = 1; j <= 2 * i - 1; ++j) 
		{
            cout << num << " ";
            if (j < i) 
			{
                num++;
            }
			else 
			{
                num--;
            }
        }
        cout << endl;
    }
    return 0;
}
