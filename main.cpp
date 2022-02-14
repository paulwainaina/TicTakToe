#include <vector>
#include <iostream>

void printGame(std::vector<char>& score) {
	std::cout<< "\t" << score[0] << " | " << score[1] << " | " << score[2] << std::endl;
	std::cout<< "\t" << score[3] << " | " << score[4] << " | " << score[5] << std::endl;
	std::cout<< "\t" << score[6] << " | " << score[7] << " | " << score[8] << std::endl;
	std::cout<<std::endl;
}

int main() {
	char empty = ' ';
	std::vector<char> score(9, empty);

	for(int x = 0; x < score.size(); x++) {
		printGame(score);
		int y{ 0 };
		std::cout << "Player " << (x % 2 )+1<< " Turn ..." << std::endl;
		std::cin >> y;
		if (y <= 0 || y > 9||score[(y - 1)]!= empty) {
			std::cout << "Out of range / Position has been played" << std::endl<<std::endl;
			x--;
			continue;
		}
		score[(y-1)] = (x % 2 == 0) ? 'X' : 'O';		
		if (x >= 5) {
			if (score[0] == score[1] && score[1] == score[2] && score[2] != empty) {
				std::cout << "Player"<< (x % 2) + 1 <<" wins" << std::endl;
				break;
			}else if (score[3] == score[4] && score[4] == score[5] && score[5] != empty) {
				std::cout << "Player" << (x % 2) + 1 << " wins" << std::endl;
				break;
			}
			else if (score[6] == score[7] && score[7] == score[8] && score[8] != empty) {
				std::cout << "Player" << (x % 2) + 1 << "wins" << std::endl;
				break;
			}
			else if (score[0] == score[3] && score[3] == score[6] && score[6] != empty) {
				std::cout << "Player" << (x % 2) + 1 << " wins" << std::endl;
				break;
			}
			else if (score[1] == score[4] && score[4] == score[7] && score[7] != empty) {
				std::cout << "Player" << (x % 2) + 1 << " wins" << std::endl;
				break;
			}
			else if (score[2] == score[5] && score[5] == score[8] && score[8] != empty) {
				std::cout << "Player" << (x % 2) + 1 << " wins" << std::endl;
				break;
			}
			else if (score[0] == score[4] && score[4] == score[8] && score[8] != empty) {
				std::cout << "Player" << (x % 2) + 1 << " wins" << std::endl;
				break;
			}
			else if (score[2] == score[4] && score[4] == score[6] && score[6] != empty) {
				std::cout << "Player" << (x % 2) + 1 << " wins" << std::endl;
				break;
			}
		}
		if(x==8) {
			std::cout << "Draw !!" << std::endl;
		}		
	}
}
