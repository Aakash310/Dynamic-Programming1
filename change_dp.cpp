#include <iostream>

int get_change(int m) {
  int arr[3] = {1,3,4};
  int minNumCoins[m+1];
  minNumCoins[0] = 0 ;
  for( int i = 1 ; i <= m ; i++){
  	minNumCoins[i]=1000;
  	for(int j = 0 ; j < 3 ; j++){
  		if(i >= arr[j]){
  			int NumCoins = minNumCoins[i-arr[j]] + 1;
  			if(NumCoins < minNumCoins[i]){
  				minNumCoins[i] = NumCoins;
			  }
		  }
	  }
  }
  int coins = minNumCoins[m];
  return coins;
}

int main() {
  int m;
  std::cin >> m;
  std::cout << get_change(m) << '\n';
}
