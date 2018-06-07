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
std::string* alphabet[27][letter_height];


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
	alphabet[0][0] = &lines[0];
	alphabet[0][1] = &lines[1]; 
	alphabet[0][2] = &lines[2];
	alphabet[0][3] = &lines[3];
	alphabet[0][4] = &lines[4];
	alphabet[0][5] = &lines[3];
	alphabet[0][6] = &lines[3];

	//B
	alphabet[1][0] = &lines[5];
	alphabet[1][1] = &lines[3];
	alphabet[1][2] = &lines[3];
	alphabet[1][3] = &lines[5];
	alphabet[1][4] = &lines[3];
	alphabet[1][5] = &lines[3];
	alphabet[1][6] = &lines[5];

	//C
	alphabet[2][0] = &lines[6];
	alphabet[2][1] = &lines[3];
	alphabet[2][2] = &lines[7];
	alphabet[2][3] = &lines[7];
	alphabet[2][4] = &lines[7];
	alphabet[2][5] = &lines[3];
	alphabet[2][6] = &lines[6];

	//D
	alphabet[3][0] = &lines[5];
	alphabet[3][1] = &lines[3];
	alphabet[3][2] = &lines[3];
	alphabet[3][3] = &lines[3];
	alphabet[3][4] = &lines[3];
	alphabet[3][5] = &lines[3];
	alphabet[3][6] = &lines[5];

	//E
	alphabet[4][0] = &lines[4];
	alphabet[4][1] = &lines[7];
	alphabet[4][2] = &lines[7];
	alphabet[4][3] = &lines[8];
	alphabet[4][4] = &lines[7];
	alphabet[4][5] = &lines[7];
	alphabet[4][6] = &lines[4];

	//F
	alphabet[5][0] = &lines[4];
	alphabet[5][1] = &lines[7];
	alphabet[5][2] = &lines[7];
	alphabet[5][3] = &lines[8];
	alphabet[5][4] = &lines[7];
	alphabet[5][5] = &lines[7];
	alphabet[5][6] = &lines[7];

	//G
	alphabet[6][0] = &lines[6];
	alphabet[6][1] = &lines[3];
	alphabet[6][2] = &lines[7];
	alphabet[6][3] = &lines[9];
	alphabet[6][4] = &lines[3];
	alphabet[6][5] = &lines[3];
	alphabet[6][6] = &lines[6];

	//H
	alphabet[7][0] = &lines[3];
	alphabet[7][1] = &lines[3];
	alphabet[7][2] = &lines[3];
	alphabet[7][3] = &lines[4];
	alphabet[7][4] = &lines[3];
	alphabet[7][5] = &lines[3];
	alphabet[7][6] = &lines[3];

	//I
	alphabet[8][0] = &lines[4];
	alphabet[8][1] = &lines[0];
	alphabet[8][2] = &lines[0];
	alphabet[8][3] = &lines[0];
	alphabet[8][4] = &lines[0];
	alphabet[8][5] = &lines[0];
	alphabet[8][6] = &lines[4];

	//J
	alphabet[9][0] = &lines[10];
	alphabet[9][1] = &lines[10];
	alphabet[9][2] = &lines[10];
	alphabet[9][3] = &lines[10];
	alphabet[9][4] = &lines[3];
	alphabet[9][5] = &lines[3];
	alphabet[9][6] = &lines[6];

	//K
	alphabet[10][0] = &lines[11];
	alphabet[10][1] = &lines[12];
	alphabet[10][2] = &lines[13];
	alphabet[10][3] = &lines[14];
	alphabet[10][4] = &lines[13];
	alphabet[10][5] = &lines[12];
	alphabet[10][6] = &lines[11];

	//L
	alphabet[11][0] = &lines[7];
	alphabet[11][1] = &lines[7];
	alphabet[11][2] = &lines[7];
	alphabet[11][3] = &lines[7];
	alphabet[11][4] = &lines[7];
	alphabet[11][5] = &lines[7];
	alphabet[11][6] = &lines[4];

	//M
	alphabet[12][0] = &lines[3];
	alphabet[12][1] = &lines[15];
	alphabet[12][2] = &lines[16];
	alphabet[12][3] = &lines[17];
	alphabet[12][4] = &lines[3];
	alphabet[12][5] = &lines[3];
	alphabet[12][6] = &lines[3];  

	//N
	alphabet[13][0] = &lines[3];
	alphabet[13][1] = &lines[18];
	alphabet[13][2] = &lines[19];
	alphabet[13][3] = &lines[17];
	alphabet[13][4] = &lines[20];
	alphabet[13][5] = &lines[21];
	alphabet[13][6] = &lines[3];

	//O
	alphabet[14][0] = &lines[6];
	alphabet[14][1] = &lines[3];
	alphabet[14][2] = &lines[3];
	alphabet[14][3] = &lines[3];
	alphabet[14][4] = &lines[3];
	alphabet[14][5] = &lines[3];
	alphabet[14][6] = &lines[6];

	//P
	alphabet[15][0] = &lines[5];
	alphabet[15][1] = &lines[3];
	alphabet[15][2] = &lines[3];
	alphabet[15][3] = &lines[5];
	alphabet[15][4] = &lines[7];
	alphabet[15][5] = &lines[7];
	alphabet[15][6] = &lines[7];

	//Q
	alphabet[16][0] = &lines[6];
	alphabet[16][1] = &lines[3];
	alphabet[16][2] = &lines[3];
	alphabet[16][3] = &lines[3];
	alphabet[16][4] = &lines[20];
	alphabet[16][5] = &lines[11];
	alphabet[16][6] = &lines[22];

	//R
	alphabet[17][0] = &lines[5];
	alphabet[17][1] = &lines[3];
	alphabet[17][2] = &lines[3];
	alphabet[17][3] = &lines[5];
	alphabet[17][4] = &lines[12];
	alphabet[17][5] = &lines[11];
	alphabet[17][6] = &lines[3];

	//S
	alphabet[18][0] = &lines[6];
	alphabet[18][1] = &lines[3];
	alphabet[18][2] = &lines[7];
	alphabet[18][3] = &lines[6];
	alphabet[18][4] = &lines[10];
	alphabet[18][5] = &lines[3];
	alphabet[18][6] = &lines[6];

	//T
	alphabet[19][0] = &lines[4];
	alphabet[19][1] = &lines[0];
	alphabet[19][2] = &lines[0];
	alphabet[19][3] = &lines[0];
	alphabet[19][4] = &lines[0];
	alphabet[19][5] = &lines[0];
	alphabet[19][6] = &lines[0];

	//U
	alphabet[20][0] = &lines[3];
	alphabet[20][1] = &lines[3];
	alphabet[20][2] = &lines[3];
	alphabet[20][3] = &lines[3];
	alphabet[20][4] = &lines[3];
	alphabet[20][5] = &lines[3];
	alphabet[20][6] = &lines[6];

	//V
	alphabet[21][0] = &lines[3];
	alphabet[21][1] = &lines[3];
	alphabet[21][2] = &lines[3];
	alphabet[21][3] = &lines[3];
	alphabet[21][4] = &lines[2];
	alphabet[21][5] = &lines[1];
	alphabet[21][6] = &lines[0];

	//W
	alphabet[22][0] = &lines[3];
	alphabet[22][1] = &lines[17];
	alphabet[22][2] = &lines[17];
	alphabet[22][3] = &lines[17];
	alphabet[22][4] = &lines[17];
	alphabet[22][5] = &lines[17];
	alphabet[22][6] = &lines[23];

	//X
	alphabet[23][0] = &lines[3];
	alphabet[23][1] = &lines[2];
	alphabet[23][2] = &lines[1];
	alphabet[23][3] = &lines[0];
	alphabet[23][4] = &lines[1];
	alphabet[23][5] = &lines[2];
	alphabet[23][6] = &lines[3];

	///Y
	alphabet[24][0] = &lines[3];
	alphabet[24][1] = &lines[2];
	alphabet[24][2] = &lines[1];
	alphabet[24][3] = &lines[0];
	alphabet[24][4] = &lines[0];
	alphabet[24][5] = &lines[0];
	alphabet[24][6] = &lines[0];

	//Z
	alphabet[25][0] = &lines[4];
	alphabet[25][1] = &lines[24];
	alphabet[25][2] = &lines[25];
	alphabet[25][3] = &lines[0];
	alphabet[25][4] = &lines[26];
	alphabet[25][5] = &lines[27];
	alphabet[25][6] = &lines[4];

	//SPACE
	alphabet[26][0] = &lines[28];
	alphabet[26][1] = &lines[28];
	alphabet[26][2] = &lines[28];
	alphabet[26][3] = &lines[28];
	alphabet[26][4] = &lines[28];
	alphabet[26][5] = &lines[28];
	alphabet[26][6] = &lines[28];

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
			lines[i] += *alphabet[character_map[c]][i];
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
