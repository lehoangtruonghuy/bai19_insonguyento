// bai19_insonguyento.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int main()
{
   cout << " KIEM TRA SO CO PHAI SO NGUYEN TO KHONG !\n";
   int	so;
   cout << " Nhap So: "; cin >> so;
   int dem = 0;
   for (int i = 1; i <= so; i++)
   {
	   // neu chia het thi tang dem len 1 : so % i == 0
	   if (so % i == 0)
	   {
		   dem ++;
	   }
   }
   cout << " so dem = " << dem << endl;
   if ( dem == 2){
	   cout << " so " << so << " la so nguyen to \n";
   }
   else {
	   cout << " so " << so << " khong phai so nguyen to \n";
   }
   return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
