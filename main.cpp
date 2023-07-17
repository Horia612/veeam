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
    veeam_v_show();
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