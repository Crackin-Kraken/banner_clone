#include <string>
#include <iostream>
#include <map>

const int letter_height = 7;

std::map<char, int> character_map = {
	{'A',  0},
	{'B',  1},
	{'C',  2},
	{'D',  3},
	{'E',  4},
	{'F',  5},
	{'G',  6},
	{'H',  7},
	{'I',  8},
	{'J',  9},
	{'K', 10},
	{'L', 11},
	{'M', 12},
	{'N', 13},
	{'O', 14},
	{'P', 15},
	{'Q', 16},
	{'R', 17},
	{'S', 18},
	{'T', 19},
	{'U', 20},
	{'V', 21},
	{'W', 22},
	{'X', 23},
	{'Y', 24},
	{'Z', 25},
	{' ', 26},
	{'0', 27},
	{'1', 28},
	{'2', 29},
	{'3', 30},
	{'4', 31},
	{'5', 32},
	{'6', 33},
	{'7', 34},
	{'8', 35},
	{'9', 36}
};

std::string lines[28];
std::string* characters[27][letter_height];


int main()
{
	lines[0] = "   #   ";
	lines[1] = "  # #  ";
	lines[2] = " #   # ";
	lines[3] = "#     #";
	lines[4] = "#######";
	lines[5] = "###### ";
	lines[6] = " ##### ";
	lines[7] = "#      ";
	lines[8] = "#####  ";
	lines[9] = "#  ####";
	lines[10] = "      #";
	lines[11] = "#    # ";
	lines[12] = "#   #  ";
	lines[13] = "#  #   ";
	lines[14] = "###    ";
	lines[15] = "##   ##";
	lines[16] = "# # # #";
	lines[17] = "#  #  #";
	lines[18] = "##    #";
	lines[19] = "# #   #";
	lines[20] = "#   # #";
	lines[21] = "#    ##";
	lines[22] = " #### #";
	lines[23] = " ## ## ";
	lines[24] = "     # ";
	lines[25] = "    #  ";
	lines[26] = "  #    ";
	lines[27] = " #     ";
	lines[28] = "       ";

	//A
	characters[0][0] = &lines[0];
	characters[0][1] = &lines[1]; 
	characters[0][2] = &lines[2];
	characters[0][3] = &lines[3];
	characters[0][4] = &lines[4];
	characters[0][5] = &lines[3];
	characters[0][6] = &lines[3];

	//B
	characters[1][0] = &lines[5];
	characters[1][1] = &lines[3];
	characters[1][2] = &lines[3];
	characters[1][3] = &lines[5];
	characters[1][4] = &lines[3];
	characters[1][5] = &lines[3];
	characters[1][6] = &lines[5];

	//C
	characters[2][0] = &lines[6];
	characters[2][1] = &lines[3];
	characters[2][2] = &lines[7];
	characters[2][3] = &lines[7];
	characters[2][4] = &lines[7];
	characters[2][5] = &lines[3];
	characters[2][6] = &lines[6];

	//D
	characters[3][0] = &lines[5];
	characters[3][1] = &lines[3];
	characters[3][2] = &lines[3];
	characters[3][3] = &lines[3];
	characters[3][4] = &lines[3];
	characters[3][5] = &lines[3];
	characters[3][6] = &lines[5];

	//E
	characters[4][0] = &lines[4];
	characters[4][1] = &lines[7];
	characters[4][2] = &lines[7];
	characters[4][3] = &lines[8];
	characters[4][4] = &lines[7];
	characters[4][5] = &lines[7];
	characters[4][6] = &lines[4];

	//F
	characters[5][0] = &lines[4];
	characters[5][1] = &lines[7];
	characters[5][2] = &lines[7];
	characters[5][3] = &lines[8];
	characters[5][4] = &lines[7];
	characters[5][5] = &lines[7];
	characters[5][6] = &lines[7];

	//G
	characters[6][0] = &lines[6];
	characters[6][1] = &lines[3];
	characters[6][2] = &lines[7];
	characters[6][3] = &lines[9];
	characters[6][4] = &lines[3];
	characters[6][5] = &lines[3];
	characters[6][6] = &lines[6];

	//H
	characters[7][0] = &lines[3];
	characters[7][1] = &lines[3];
	characters[7][2] = &lines[3];
	characters[7][3] = &lines[4];
	characters[7][4] = &lines[3];
	characters[7][5] = &lines[3];
	characters[7][6] = &lines[3];

	//I
	characters[8][0] = &lines[4];
	characters[8][1] = &lines[0];
	characters[8][2] = &lines[0];
	characters[8][3] = &lines[0];
	characters[8][4] = &lines[0];
	characters[8][5] = &lines[0];
	characters[8][6] = &lines[4];

	//J
	characters[9][0] = &lines[10];
	characters[9][1] = &lines[10];
	characters[9][2] = &lines[10];
	characters[9][3] = &lines[10];
	characters[9][4] = &lines[3];
	characters[9][5] = &lines[3];
	characters[9][6] = &lines[6];

	//K
	characters[10][0] = &lines[11];
	characters[10][1] = &lines[12];
	characters[10][2] = &lines[13];
	characters[10][3] = &lines[14];
	characters[10][4] = &lines[13];
	characters[10][5] = &lines[12];
	characters[10][6] = &lines[11];

	//L
	characters[11][0] = &lines[7];
	characters[11][1] = &lines[7];
	characters[11][2] = &lines[7];
	characters[11][3] = &lines[7];
	characters[11][4] = &lines[7];
	characters[11][5] = &lines[7];
	characters[11][6] = &lines[4];

	//M
	characters[12][0] = &lines[3];
	characters[12][1] = &lines[15];
	characters[12][2] = &lines[16];
	characters[12][3] = &lines[17];
	characters[12][4] = &lines[3];
	characters[12][5] = &lines[3];
	characters[12][6] = &lines[3];  

	//N
	characters[13][0] = &lines[3];
	characters[13][1] = &lines[18];
	characters[13][2] = &lines[19];
	characters[13][3] = &lines[17];
	characters[13][4] = &lines[20];
	characters[13][5] = &lines[21];
	characters[13][6] = &lines[3];

	//O
	characters[14][0] = &lines[6];
	characters[14][1] = &lines[3];
	characters[14][2] = &lines[3];
	characters[14][3] = &lines[3];
	characters[14][4] = &lines[3];
	characters[14][5] = &lines[3];
	characters[14][6] = &lines[6];

	//P
	characters[15][0] = &lines[5];
	characters[15][1] = &lines[3];
	characters[15][2] = &lines[3];
	characters[15][3] = &lines[5];
	characters[15][4] = &lines[7];
	characters[15][5] = &lines[7];
	characters[15][6] = &lines[7];

	//Q
	characters[16][0] = &lines[6];
	characters[16][1] = &lines[3];
	characters[16][2] = &lines[3];
	characters[16][3] = &lines[3];
	characters[16][4] = &lines[20];
	characters[16][5] = &lines[11];
	characters[16][6] = &lines[22];

	//R
	characters[17][0] = &lines[5];
	characters[17][1] = &lines[3];
	characters[17][2] = &lines[3];
	characters[17][3] = &lines[5];
	characters[17][4] = &lines[12];
	characters[17][5] = &lines[11];
	characters[17][6] = &lines[3];

	//S
	characters[18][0] = &lines[6];
	characters[18][1] = &lines[3];
	characters[18][2] = &lines[7];
	characters[18][3] = &lines[6];
	characters[18][4] = &lines[10];
	characters[18][5] = &lines[3];
	characters[18][6] = &lines[6];

	//T
	characters[19][0] = &lines[4];
	characters[19][1] = &lines[0];
	characters[19][2] = &lines[0];
	characters[19][3] = &lines[0];
	characters[19][4] = &lines[0];
	characters[19][5] = &lines[0];
	characters[19][6] = &lines[0];

	//U
	characters[20][0] = &lines[3];
	characters[20][1] = &lines[3];
	characters[20][2] = &lines[3];
	characters[20][3] = &lines[3];
	characters[20][4] = &lines[3];
	characters[20][5] = &lines[3];
	characters[20][6] = &lines[6];

	//V
	characters[21][0] = &lines[3];
	characters[21][1] = &lines[3];
	characters[21][2] = &lines[3];
	characters[21][3] = &lines[3];
	characters[21][4] = &lines[2];
	characters[21][5] = &lines[1];
	characters[21][6] = &lines[0];

	//W
	characters[22][0] = &lines[3];
	characters[22][1] = &lines[17];
	characters[22][2] = &lines[17];
	characters[22][3] = &lines[17];
	characters[22][4] = &lines[17];
	characters[22][5] = &lines[17];
	characters[22][6] = &lines[23];

	//X
	characters[23][0] = &lines[3];
	characters[23][1] = &lines[2];
	characters[23][2] = &lines[1];
	characters[23][3] = &lines[0];
	characters[23][4] = &lines[1];
	characters[23][5] = &lines[2];
	characters[23][6] = &lines[3];

	///Y
	characters[24][0] = &lines[3];
	characters[24][1] = &lines[2];
	characters[24][2] = &lines[1];
	characters[24][3] = &lines[0];
	characters[24][4] = &lines[0];
	characters[24][5] = &lines[0];
	characters[24][6] = &lines[0];

	//Z
	characters[25][0] = &lines[4];
	characters[25][1] = &lines[24];
	characters[25][2] = &lines[25];
	characters[25][3] = &lines[0];
	characters[25][4] = &lines[26];
	characters[25][5] = &lines[27];
	characters[25][6] = &lines[4];

	//SPACE
	characters[26][0] = &lines[28];
	characters[26][1] = &lines[28];
	characters[26][2] = &lines[28];
	characters[26][3] = &lines[28];
	characters[26][4] = &lines[28];
	characters[26][5] = &lines[28];
	characters[26][6] = &lines[28];

//     ###     #    #####   #####      ##  #######  #####  #######  #####   #####  
//    #   #   ##   #     # #     #    # #  #       #     # #     # #     # #     # 
//   #     # # #         #       #   #  #  #       #             # #     # #     # 
//   #     #   #       ##    ####   #   #  ######  ######       #   #####   ###### 
//   #     #   #     ##          # #######       # #     #      #  #     #       # 
//    #   #    #    #      #     #      #  #     # #     #     #   #     # #     # 
//     ###   ##### #######  #####       #   #####   #####      #    #####   ##### 
	//1


	std::string text = "JAFFA";
	std::string lines[7];
	std::cout << "Enter your text: ";
	std::getline(std::cin, text);
	std::cout << "\n\n";

	for(int i=0;i<letter_height;i++)
	{
		for(char& c : text)
		{
			c = toupper(c);
			lines[i] += *characters[character_map[c]][i];
			lines[i] += " ";
		}
	}
	for(int i=0;i<letter_height;i++)
	{
		std::cout << lines[i] << "\n";
	}

	std::cin.ignore();
	return 0;
}
