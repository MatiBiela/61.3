#include <iostream>
#include <fstream>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;

int main(int argc, char** argv) {
	
	int t[1001];
	int r,r1,r2,r3,rk;
	int liczba;
	
	ifstream input;
	ifstream output;
	
	input.open("bledne.txt");
	output.open("wynik3.txt");
	if(input.good()) {
		while(!input.eof()) {
			input >> liczba;
			for(int i=0; i<liczba; i++)
			input >> t[i];
			r1 = t[1] - t[0];
			r2 = t[2]-t[1];
			if(r1 == r2){
			r = r1;
			r >> output;
			}
			else {
				rk = t[liczba-1] - t[liczba-2];
			//	r4 = t[5] - t [4];
				r >> output;
			if (rk == r1) {
				r = r1;
				r >> output;
			}
			else {
				r = rk;
				r >> output;
			}
			if (rk == r2) {
				r = r2;	
				r >> output;			
			}
				else {
					r = rk;
					r >> output;
				}
 			}
		}
	}
	input.close();
	output.close()
	
	return 0;
}

