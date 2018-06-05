#include <string>
#include <iostream>
#include <map>

const int letter_height = 7;

int main()
{
	std::map<char, int> letters = {
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
		{' ', 26}
	};
	std::string alphabet[27][letter_height];


	//      #    
	//     # #   
	//    #   #  
	//   #     # 
	//   ####### 
	//   #     # 
	//   #     #
	alphabet[0][0] = "   #   "; 
	alphabet[0][1] = "  # #  "; 
	alphabet[0][2] = " #   # ";
	alphabet[0][3] = "#     #";
	alphabet[0][4] = "#######";
	alphabet[0][5] = "#     #";
	alphabet[0][6] = "#     #";

	//   ######  
	//   #     # 
	//   #     # 
	//   ######  
	//   #     # 
	//   #     # 
	//   ###### 
	alphabet[1][0] = "###### ";
	alphabet[1][1] = "#     #";
	alphabet[1][2] = "#     #";
	alphabet[1][3] = "###### ";
	alphabet[1][4] = "#     #";
	alphabet[1][5] = "#     #";
	alphabet[1][6] = "###### ";

	//    #####  
	//   #     # 
	//   #       
	//   #       
	//   #       
	//   #     # 
	//    ##### 
	alphabet[2][0] = " ##### ";
	alphabet[2][1] = "#     #";
	alphabet[2][2] = "#      ";
	alphabet[2][3] = "#      ";
	alphabet[2][4] = "#      ";
	alphabet[2][5] = "#     #";
	alphabet[2][6] = " ##### ";

	//   ######  
	//   #     # 
	//   #     # 
	//   #     # 
	//   #     # 
	//   #     # 
	//   ###### 
	alphabet[3][0] = "###### ";
	alphabet[3][1] = "#     #";
	alphabet[3][2] = "#     #";
	alphabet[3][3] = "#     #";
	alphabet[3][4] = "#     #";
	alphabet[3][5] = "#     #";
	alphabet[3][6] = "###### ";

	//   ####### 
	//   #       
	//   #       
	//   #####   
	//   #       
	//   #       
	//   ####### 
	alphabet[4][0] = "#######";
	alphabet[4][1] = "#      ";
	alphabet[4][2] = "#      ";
	alphabet[4][3] = "#####  ";
	alphabet[4][4] = "#      ";
	alphabet[4][5] = "#      ";
	alphabet[4][6] = "#######";

	//   ####### 
	//   #       
	//   #       
	//   #####   
	//   #       
	//   #       
	//   #       
	alphabet[5][0] = "#######";
	alphabet[5][1] = "#      ";
	alphabet[5][2] = "#      ";
	alphabet[5][3] = "#####  ";
	alphabet[5][4] = "#      ";
	alphabet[5][5] = "#      ";
	alphabet[5][6] = "#      ";

	//    #####  
	//   #     # 
	//   #       
	//   #  #### 
	//   #     # 
	//   #     # 
	//    #####  
	alphabet[6][0] = " ##### ";
	alphabet[6][1] = "#     #";
	alphabet[6][2] = "#      ";
	alphabet[6][3] = "#  ####";
	alphabet[6][4] = "#     #";
	alphabet[6][5] = "#     #";
	alphabet[6][6] = " ##### ";

	//   #     # 
	//   #     # 
	//   #     # 
	//   ####### 
	//   #     # 
	//   #     # 
	//   #     #
	alphabet[7][0] = "#     #";
	alphabet[7][1] = "#     #";
	alphabet[7][2] = "#     #";
	alphabet[7][3] = "#######";
	alphabet[7][4] = "#     #";
	alphabet[7][5] = "#     #";
	alphabet[7][6] = "#     #";

	//   ### 
	//    #  
	//    #  
	//    #  
	//    #  
	//    #  
	//   ### 
	alphabet[8][0] = "#######";
	alphabet[8][1] = "   #   ";
	alphabet[8][2] = "   #   ";
	alphabet[8][3] = "   #   ";
	alphabet[8][4] = "   #   ";
	alphabet[8][5] = "   #   ";
	alphabet[8][6] = "#######";

	//         # 
	//         # 
	//         # 
	//         # 
	//   #     # 
	//   #     # 
	//    ##### 
	alphabet[9][0] = "      #";
	alphabet[9][1] = "      #";
	alphabet[9][2] = "      #";
	alphabet[9][3] = "      #";
	alphabet[9][4] = "#     #";
	alphabet[9][5] = "#     #";
	alphabet[9][6] = " ##### ";

	//   #    #  
	//   #   #   
	//   #  #    
	//   ###     
	//   #  #    
	//   #   #   
	//   #    #  
	alphabet[10][0] = "#    # ";
	alphabet[10][1] = "#   #  ";
	alphabet[10][2] = "#  #   ";
	alphabet[10][3] = "###    ";
	alphabet[10][4] = "#  #   ";
	alphabet[10][5] = "#   #  ";
	alphabet[10][6] = "#    # ";

	//   #       
	//   #       
	//   #       
	//   #       
	//   #       
	//   #       
	//   ####### 
	alphabet[11][0] = "#      ";
	alphabet[11][1] = "#      ";
	alphabet[11][2] = "#      ";
	alphabet[11][3] = "#      ";
	alphabet[11][4] = "#      ";
	alphabet[11][5] = "#      ";
	alphabet[11][6] = "#######";

	//   #     # 
	//   ##   ## 
	//   # # # # 
	//   #  #  # 
	//   #     # 
	//   #     # 
	//   #     # 
	alphabet[12][0] = "#     #";
	alphabet[12][1] = "##   ##";
	alphabet[12][2] = "# # # #";
	alphabet[12][3] = "#  #  #";
	alphabet[12][4] = "#     #";
	alphabet[12][5] = "#     #";
	alphabet[12][6] = "#     #";  

	//   #     # 
	//   ##    # 
	//   # #   # 
	//   #  #  # 
	//   #   # # 
	//   #    ## 
	//   #     # 
	alphabet[13][0] = "#     #";
	alphabet[13][1] = "##    #";
	alphabet[13][2] = "# #   #";
	alphabet[13][3] = "#  #  #";
	alphabet[13][4] = "#   # #";
	alphabet[13][5] = "#    ##";
	alphabet[13][6] = "#     #";

	//   ####### 
	//   #     # 
	//   #     # 
	//   #     # 
	//   #     # 
	//   #     # 
	//   ####### 
	alphabet[14][0] = " ##### ";
	alphabet[14][1] = "#     #";
	alphabet[14][2] = "#     #";
	alphabet[14][3] = "#     #";
	alphabet[14][4] = "#     #";
	alphabet[14][5] = "#     #";
	alphabet[14][6] = " ##### ";

	//   ######  
	//   #     # 
	//   #     # 
	//   ######  
	//   #       
	//   #       
	//   #       
	alphabet[15][0] = "###### ";
	alphabet[15][1] = "#     #";
	alphabet[15][2] = "#     #";
	alphabet[15][3] = "###### ";
	alphabet[15][4] = "#      ";
	alphabet[15][5] = "#      ";
	alphabet[15][6] = "#      ";

	//    #####  
	//   #     # 
	//   #     # 
	//   #     # 
	//   #   # # 
	//   #    #  
	//    #### # 
	alphabet[16][0] = " ##### ";
	alphabet[16][1] = "#     #";
	alphabet[16][2] = "#     #";
	alphabet[16][3] = "#     #";
	alphabet[16][4] = "#   # #";
	alphabet[16][5] = "#    # ";
	alphabet[16][6] = " #### #";

	//   ######  
	//   #     # 
	//   #     # 
	//   ######  
	//   #   #   
	//   #    #  
	//   #     # 
	alphabet[17][0] = "###### ";
	alphabet[17][1] = "#     #";
	alphabet[17][2] = "#     #";
	alphabet[17][3] = "###### ";
	alphabet[17][4] = "#   #  ";
	alphabet[17][5] = "#    # ";
	alphabet[17][6] = "#     #";

	//    #####  
	//   #     # 
	//   #       
	//    #####  
	//         # 
	//   #     # 
	//    #####  
	alphabet[18][0] = " ##### ";
	alphabet[18][1] = "#     #";
	alphabet[18][2] = "#      ";
	alphabet[18][3] = " ##### ";
	alphabet[18][4] = "      #";
	alphabet[18][5] = "#     #";
	alphabet[18][6] = " ##### ";

	//   ####### 
	//      #    
	//      #    
	//      #    
	//      #    
	//      #    
	//      #    
	alphabet[19][0] = "#######";
	alphabet[19][1] = "   #   ";
	alphabet[19][2] = "   #   ";
	alphabet[19][3] = "   #   ";
	alphabet[19][4] = "   #   ";
	alphabet[19][5] = "   #   ";
	alphabet[19][6] = "   #   ";

	//   #     # 
	//   #     # 
	//   #     # 
	//   #     # 
	//   #     # 
	//   #     # 
	//    #####  
	alphabet[20][0] = "#     #";
	alphabet[20][1] = "#     #";
	alphabet[20][2] = "#     #";
	alphabet[20][3] = "#     #";
	alphabet[20][4] = "#     #";
	alphabet[20][5] = "#     #";
	alphabet[20][6] = " ##### ";

	//   #     # 
	//   #     # 
	//   #     # 
	//   #     # 
	//    #   #  
	//     # #   
	//      #    
	alphabet[21][0] = "#     #";
	alphabet[21][1] = "#     #";
	alphabet[21][2] = "#     #";
	alphabet[21][3] = "#     #";
	alphabet[21][4] = " #   # ";
	alphabet[21][5] = "  # #  ";
	alphabet[21][6] = "   #   ";

	//   #     # 
	//   #  #  # 
	//   #  #  # 
	//   #  #  # 
	//   #  #  # 
	//   #  #  # 
	//    ## ##  
	alphabet[22][0] = "#     #";
	alphabet[22][1] = "#  #  #";
	alphabet[22][2] = "#  #  #";
	alphabet[22][3] = "#  #  #";
	alphabet[22][4] = "#  #  #";
	alphabet[22][5] = "#  #  #";
	alphabet[22][6] = " ## ## ";

	//   #     # 
	//    #   #  
	//     # #   
	//      #    
	//     # #   
	//    #   #  
	//   #     # 
	alphabet[23][0] = "#     #";
	alphabet[23][1] = " #   # ";
	alphabet[23][2] = "  # #  ";
	alphabet[23][3] = "   #   ";
	alphabet[23][4] = "  # #  ";
	alphabet[23][5] = " #   # ";
	alphabet[23][6] = "#     #";

	//   #     # 
	//    #   #  
	//     # #   
	//      #    
	//      #    
	//      #    
	//      #    
	alphabet[24][0] = "#     #";
	alphabet[24][1] = " #   # ";
	alphabet[24][2] = "  # #  ";
	alphabet[24][3] = "   #   ";
	alphabet[24][4] = "   #   ";
	alphabet[24][5] = "   #   ";
	alphabet[24][6] = "   #   ";

	//   ####### 
	//        #  
	//       #   
	//      #    
	//     #     
	//    #      
	//   #######
	alphabet[25][0] = "#######";
	alphabet[25][1] = "     # ";
	alphabet[25][2] = "    #  ";
	alphabet[25][3] = "   #   ";
	alphabet[25][4] = "  #    ";
	alphabet[25][5] = " #     ";
	alphabet[25][6] = "#######";

	//SPACE
	alphabet[26][0] = "       ";
	alphabet[26][1] = "       ";
	alphabet[26][2] = "       ";
	alphabet[26][3] = "       ";
	alphabet[26][4] = "       ";
	alphabet[26][5] = "       ";
	alphabet[26][6] = "       ";



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
			lines[i] += alphabet[letters[c]][i];
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
