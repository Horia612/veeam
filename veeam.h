#ifndef VEEAM_H_INCLUDED
#define VEEAM_H_INCLUDED

/************************************************************
 *                                                          *
 *                    I N C L U D E S                       *
 *                                                          *
 ************************************************************/

#include <iostream>
#include <fstream>
#include <string.h>

/************************************************************
 *                                                          *
 *             F I L E   D E F I N I T I O N                *
 *                                                          *
 ************************************************************/

std::ifstream fin ("input.in");
std::ofstream fout ("output.out");

/************************************************************
 *                                                          *
 *             G L O B A L   V A R I A B L E S              *
 *                                                          *
 ************************************************************/

char veeam_chr_word[]="Hello there friends!";
char veeam_chr_num;

/************************************************************
 *                                                          *
 *                  P R O T O   F U N C T I O N S           *
 *                                                          *
 ************************************************************/

void veeam_v_number();
void veeam_v_show();
void copyFile(const std::string& sourcePath, const std::string& destinationPath);

#endif // VEEAM_H_INCLUDED
