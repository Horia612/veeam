/************************************************************
 *     Spataru Horia-Stefan , horiaspataru543@gmail.com     *
 ************************************************************/

/************************************************************
 *                                                          *
 *                    I N C L U D E S                       *
 *                                                          *
 ************************************************************/

#include "veeam.h"

/************************************************************
 *                                                          *
 *                    M A I N   F U N C T I O N             *
 *                                                          *
 ************************************************************/

int main()
{
    std::string sourceFolder = "C:\HORIA\WORK\VEEAM\source";
    std::string destinationFolder = "C:\HORIA\WORK\VEEAM\replica";

    std::string sourceFile = sourceFolder + "test.txt";
    std::string destinationFile = destinationFolder + "test.txt";

    try
    {
        copyFile(sourceFolder, destinationFolder);
    }
    catch (const std::exception& e)
    {
        std::cerr << "Error: " << e.what() << std::endl;
    }

    return 0;
}

/************************************************************
 *                                                          *
 *                  O T H E R   F U N C T I O N S           *
 *                                                          *
 ************************************************************/

void veeam_v_show()
{
    veeam_v_number();
    fout << veeam_chr_word << '\n';
}

void veeam_v_number()
{
    fin >> veeam_chr_num;
    veeam_chr_word[0]=veeam_chr_num;
}

void copyFile(const std::string& sourcePath, const std::string& destinationPath)
{
    std::ifstream sourceFile(sourcePath, std::ios::binary);
    std::ofstream destinationFile(destinationPath, std::ios::binary);

    if (sourceFile && destinationFile)
    {
        destinationFile << sourceFile.rdbuf();
        std::cout << "File copied successfully!" << std::endl;
    }
    else
    {
        std::cerr << "Error: Unable to copy file!" << std::endl;
    }
}
