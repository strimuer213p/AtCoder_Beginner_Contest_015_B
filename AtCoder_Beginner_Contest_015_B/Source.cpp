/*
��蕶
��������́A��i����
��Ђō���Ă��� N �̃\�t�g�E�F�A�ɕ��ςłǂꂭ�炢�̃o�O�����邩���ׂ�
�������A�o�O���Ȃ��\�t�g�͒����ꐔ�Ɋ܂߂��
�Ǝw������܂����B
�������A��i�͏����������ł��B�Ƃ͂����A�o�O���̕��ϒl���ߏ��񍐂���킯�ɂ������Ȃ��̂ŁA�l��؂�グ�ĕ񍐂��邱�Ƃɂ��܂����B
��������́A�f�����o�O���̕��ϒl���܂Ƃ߂ď�i�ɕ񍐂���K�v������܂��B �\�t�g�E�F�A���Ƃ̃o�O�����^������̂ŁA�o�O���܂܂��\�t�g�E�F�A�́A�o�O���̕��ϒl�������Ő؂�グ�ċ��߂Ă��������B
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