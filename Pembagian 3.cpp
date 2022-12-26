#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	cout<<"=========================================="<<endl;
  cout << "         ALFIN NURUL YAMIN " << endl;
  cout << "==========================================" << endl;
  cout << endl;

  int matr[100][100];
  int y, x, i, j;

  cout << "Input jumlah baris matriks: ";
  cin >> y;

  cout << "Input jumlah kolom matriks: ";
  cin >> x;
  cout << endl;

  for(i = 0; i < y ; i++){
    for(j = 0; j < x; j++){
      cout << "Baris " <<i+1<<", kolom "<<j+1<< " = ";
      cin >> matr[i][j];
    }
    cout << endl;
  }

cout<<"Nilai Dibagi 3"<<endl;

for (i=0; i<y;i++)
{
	for (j=0;j<x;j++)
	{
		if(matr[i][j]%3==0){
				cout<<" "<<matr[i][j];
		}
		
	}

 } 
 cout<<endl;
 cout<<"Nilai Dibagi 5"<<endl;

for (i=0; i<y;i++)
{
	for (j=0;j<x;j++)
	{
		if(matr[i][j]%5==0){
				cout<<" "<<matr[i][j];
		}
		
	}

 } 
 cout<<endl;
 cout<<"Nilai Dibagi 7"<<endl;

for (i=0; i<y;i++)
{
	for (j=0;j<x;j++)
	{
		if(matr[i][j]%7==0){
				cout<<" "<<matr[i][j];
		}
		
	}

 } 
 cout<<endl;
  return 0;
}
