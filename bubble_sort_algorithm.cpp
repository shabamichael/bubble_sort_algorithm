

#include <iostream>

int main()
{
	int arr[] = { 64,34,25,12,22,11,90 };
	int n = std::size(arr);

	for (int pass = 0; pass < n - 1; ++pass)
	{
		for (int j = 0; j < n - pass - 1; ++j)
		{
			if (arr[j] > arr[j + 1])
			{
				int temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}
	for (int i = 0; i < n; i++)
		std::cout << arr[i] << " ";

	return 0;
}
