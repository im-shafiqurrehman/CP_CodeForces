#include <iostream>
#include <string>
using namespace std;

void Solve {
	int n, k ;
	cin>>n>>k;
    vector<int> Hallomoi(n);
    for(int n : Hallomoi){
    	cin>>Hallomoi[n];
	};
	
	if (k<2 && Hallomoi != sort(Hallomoi.begin() , Hallomoi.end())){
		cout<<"No";
	}

	int temp;
	for(int i=Hallomoi.size(); i>0;i--){
		for(int j = 0 ; j<i;i++){
			if(Hallomoi[i] < Hallomoi[i+1]){
				
				temp = Hallomoi[i];
				Hallomoi[i] = Hallomoi[i+1];
				Hallomoi[i+1] == temp;
			}							
			  
			}
		}
	}
    
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        Solve();
    }
    return 0;
}
