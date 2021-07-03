#include<iostream>

using namespace std;
#define MAXI 50


void bubbleshort(int dizi[], int boyut)
{
	for(int i = 0; i<boyut; i++)
	{
		for (int j = 1; j <boyut - i; j++)
		{
			if (dizi[j-1] > dizi[j])
			{
				int dummy = dizi[j];
				dizi[j] = dizi[j-1];
				dizi[j-1] = dummy;
			}
		}
	}
}


int main()
{
	int boyut;
	cout << "dizinin boyutunu giriniz: ";
	cin >> boyut;
	int sayi_dizisi[MAXI];
	cout << endl;
	for (int i = 0; i < boyut; i++)
	{
		cin >> sayi_dizisi[i];
	}
	cout << endl;
	bubbleshort(sayi_dizisi, boyut);
	for (int i = 0; i <boyut; i++)
	{
		cout << sayi_dizisi[i] << ",";
	}
	
	


}