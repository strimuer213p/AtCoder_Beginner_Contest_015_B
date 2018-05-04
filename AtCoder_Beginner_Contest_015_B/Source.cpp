/*
問題文
高橋くんは、上司から
会社で作っている N 個のソフトウェアに平均でどれくらいのバグがあるか調べろ
ただし、バグがないソフトは調査母数に含めるな
と指示されました。
しかも、上司は小数が嫌いです。とはいえ、バグ数の平均値を過小報告するわけにもいかないので、値を切り上げて報告することにしました。
高橋くんは、素早くバグ数の平均値をまとめて上司に報告する必要があります。 ソフトウェアごとのバグ数が与えられるので、バグが含まれるソフトウェアの、バグ数の平均値を小数で切り上げて求めてください。
*/

#include<iostream>
#include<vector>
#include<cmath>

int main() {
	int n,j=0;
	double sum=0;
	std::cin >> n;

	std::vector<int> v(n);
	for (int& x : v) {
		std::cin >> x;
	}

	for (int i = 0; i < v.size(); i++) {
		if (v[i] == 0) {
			continue;
		}
		sum += v[i];
		j++;
	}

	std::cout << std::ceil(sum / j) << std::endl;

	return 0;
}