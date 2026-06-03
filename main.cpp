
#include <iostream>
using namespace std;

int main()
{
	int N;
	cin >> N;

	// TODO
	for (int i = 0; i < N; i++) {
        for (int j = N - 1 - i; j < N; j++) {
            cout << i << " , " << j << endl;
        }
    }

    return 0;
}
