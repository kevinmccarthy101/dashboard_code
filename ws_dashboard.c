
/*
 *  File: ws_dashboard.c
 * 
 * Updated: 03Aug15
 * 
 * 
 */

#define  LINUX //WINDOWS //
//#define  DEBUG

#include "ws_dashboard.h"
#include "vt100_dashboard.h"
//#include "global_vars.c"

// Gobal Variables


parmDataT parmData[NUM_SCR][NUM_PARMS] =
	{
		{
		// 				Name        NameRow NameCol Value Format ValueRow ValueCol Unit
//Scr 1
		{Scr1Col1Row1, "Scr1 Col1 Row 1", 1, 1, 0, 1, 1, 19,"V"},				{Scr1Col2Row1, "Scr1 Col2 Row 1", 1, 28, 0, 0, 1, 46,"V"},				{Scr1Col3Row1, "Scr1 Col3 Row 1", 1, 55, 0, 1, 1, 73,"V"},
		{Scr1Col1Row2, "Scr1 Col1 Row 2", 2, 1, 0, 1, 2, 19,"V"},				{Scr1Col2Row2, "Scr1 Col2 Row 2", 2, 28, 0, 0, 2, 46,"V"},				{Scr1Col3Row2, "Scr1 Col3 Row 2", 2, 55, 0, 0, 2, 73,"A"},
		{Scr1Col1Row3, "Scr1 Col1 Row 3", 3, 1, 0, 1, 3, 19,"V"},				{Scr1Col2Row3, "Scr1 Col2 Row 3", 3, 28, 0, 0, 3, 46,"V"},				{Scr1Col3Row3, "Scr1 Col3 Row 3", 3, 55, 0, 0, 3, 73,"V"},
		{Scr1Col1Row4, "Scr1 Col1 Row 4", 4, 1, 0, 1, 4, 19,"V"},				{Scr1Col2Row4, "Scr1 Col2 Row 4", 4, 28, 0, 0, 4, 46,"A"},				{Scr1Col3Row4, "Scr1 Col3 Row 4", 4, 55, 0, 0, 4, 73,"V"},
		{Scr1Col1Row5, "Scr1 Col1 Row 5", 5, 1, 0, 1, 5, 19,"V"},				{Scr1Col2Row5, "Scr1 Col2 Row 5", 5, 28, 0, 0, 5, 46,"V"},				{Scr1Col3Row5, "Scr1 Col3 Row 5", 5, 55, 0, 0, 5, 73,"A"},
		{Scr1Col1Row6, "Scr1 Col1 Row 6", 6, 1, 0, 1, 6, 19,"V"},				{Scr1Col2Row6, "Scr1 Col2 Row 6", 6, 28, 0, 0, 6, 46,"V"},				{Scr1Col3Row6, "Scr1 Col3 Row 6", 6, 55, 0, 0, 6, 73,"V"},
		{Scr1Col1Row7, "Scr1 Col1 Row 7", 7, 1, 0, 1, 7, 19,"V"},				{Scr1Col2Row7, "Scr1 Col2 Row 7", 7, 28, 0, 0, 7, 46,"V"},				{Scr1Col3Row7, "Scr1 Col3 Row 7", 7, 55, 0, 4, 7, 73,"X"},
		{Scr1Col1Row8, "Scr1 Col1 Row 8", 8, 1, 0, 1, 8, 19,"V"},				{Scr1Col2Row8, "Scr1 Col2 Row 8", 8, 28, 0, 0, 8, 46,"V"},				{Scr1Col3Row8, "Scr1 Col3 Row 8", 8, 55, 0, 4, 8, 73,"X"},
		{Scr1Col1Row9, "Scr1 Col1 Row 9", 9, 1, 0, 1, 9, 19,"V"},				{Scr1Col2Row9, "Scr1 Col2 Row 9", 9, 28, 0, 0, 9, 46,"V"},				{Scr1Col3Row9, "Scr1 Col3 Row 9", 9, 55, 0, 4, 9, 73,"X"},
		{Scr1Col1Row10, "Scr1 Col1 Row 10", 10, 1, 0, 1, 10, 19,"V"},				{Scr1Col2Row10, "Scr1 Col2 Row 10", 10, 28, 0, 0, 10, 46,"V"},				{Scr1Col3Row10, "Scr1 Col3 Row 10", 10, 55, 0, 0, 10, 73,"V"},
		{Scr1Col1Row11, "Scr1 Col1 Row 11", 11, 1, 0, 1, 11, 19,"V"},				{Scr1Col2Row11, "Scr1 Col2 Row 11", 11, 28, 0, 1, 11, 46,"V"},				{Scr1Col3Row11, "Scr1 Col3 Row 11", 11, 55, 0, 0, 11, 73,"V"},
		{Scr1Col1Row12, "Scr1 Col1 Row 12", 12, 1, 0, 1, 12, 19,"V"},				{Scr1Col2Row12, "Scr1 Col2 Row 12", 12, 28, 0, 1, 12, 46,"V"},				{Scr1Col3Row12, "Scr1 Col3 Row 12", 12, 55, 0, 1, 12, 73,"V"},
		{Scr1Col1Row13, "Scr1 Col1 Row 13", 13, 1, 0, 0, 13, 19,"V"},				{Scr1Col2Row13, "Scr1 Col2 Row 13", 13, 28, 0, 1, 13, 46,"V"},				{Scr1Col3Row13, "Scr1 Col3 Row 13", 13, 55, 0, 1, 13, 73,"V"},
		{Scr1Col1Row14, "Scr1 Col1 Row 14", 14, 1, 0, 1, 14, 19,"V"},				{Scr1Col2Row14, "Scr1 Col2 Row 14", 14, 28, 0, 1, 14, 46,"V"},				{Scr1Col3Row14, "Scr1 Col3 Row 14", 14, 55, 0, 1, 14, 73,"V"},
		{Scr1Col1Row15, "Scr1 Col1 Row 15", 15, 1, 0, 1, 15, 19,"V"},				{Scr1Col2Row15, "Scr1 Col2 Row 15", 15, 28, 0, 0, 15, 46,"A"},				{Scr1Col3Row15, "Scr1 Col3 Row 15", 15, 55, 0, 0, 15, 73,"A"},
		{Scr1Col1Row16, "Scr1 Col1 Row 16", 16, 1, 0, 0, 16, 19,"V"},				{Scr1Col2Row16, "Scr1 Col2 Row 16", 16, 28, 0, 0, 16, 46,"A"},				{Scr1Col3Row16, "Scr1 Col3 Row 16", 16, 55, 0, 0, 16, 73,"A"},
		{Scr1Col1Row17, "Scr1 Col1 Row 17", 17, 1, 0, 0, 17, 19,"V"},				{Scr1Col2Row17, "Scr1 Col2 Row 17", 17, 28, 0, 0, 17, 46,"A"},				{Scr1Col3Row17, "Scr1 Col3 Row 17", 17, 55, 0, 0, 17, 73,"A"},
		{Scr1Col1Row18, "Scr1 Col1 Row 18", 18, 1, 0, 0, 18, 19,"V"},				{Scr1Col2Row18, "Scr1 Col2 Row 18", 18, 28, 0, 1, 18, 46,"V"},				{Scr1Col3Row18, "Scr1 Col3 Row 18", 18, 55, 0, 0, 18, 73,"A"},
		{Scr1Col1Row19, "Scr1 Col1 Row 19", 19, 1, 0, 0, 19, 19,"V"},				{Scr1Col2Row19, "Scr1 Col2 Row 19", 19, 28, 0, 1, 19, 46,"V"},				{Scr1Col3Row19, "Scr1 Col3 Row 19", 19, 55, 0, 0, 19, 73,"A"},
		{Scr1Col1Row20, "Scr1 Col1 Row 20", 20, 1, 0, 0, 20, 19,"V"},				{Scr1Col2Row20, "Scr1 Col2 Row 20", 20, 28, 0, 1, 20, 46,"V"},				{Scr1Col3Row20, "Scr1 Col3 Row 20", 20, 55, 0, 0, 20, 73,"A"},
		{Scr1Col1Row21, "Scr1 Col1 Row 21", 21, 1, 0, 0, 21, 19,"V"},				{Scr1Col2Row21, "Scr1 Col2 Row 21", 21, 28, 0, 0, 21, 46,"V"},				{Scr1Col3Row21, "Scr1 Col3 Row 21", 21, 55, 0, 0, 21, 73,"A"},
		{Scr1Col1Row22, "Scr1 Col1 Row 22", 22, 1, 0, 0, 22, 19,"V"},				{Scr1Col2Row22, "Scr1 Col2 Row 22", 22, 28, 0, 0, 22, 46,"V"},				{Scr1Col3Row22, "Scr1 Col3 Row 22", 22, 55, 0, 1, 22, 73,"V"},
		{Scr1Col1Row23, "Scr1 Col1 Row 23", 23, 1, 0, 0, 23, 19,"V"},				{Scr1Col2Row23, "Scr1 Col2 Row 23", 23, 28, 0, 0, 23, 46,"V"},				{Scr1Col3Row23, "Scr1 Col3 Row 23", 23, 55, 0, 1, 23, 73,"V"},
		{Scr1Col1Row24, "Scr1 Col1 Row 24", 24, 1, 0, 0, 24, 19,"V"},				{Scr1Col2Row24, "Scr1 Col2 Row 24", 24, 28, 0, 1, 24, 46,"V"},				{Scr1Col3Row24, "Scr1 Col3 Row 24", 24, 55, 0, 0, 24, 73,"A"},
		},
		{
		// Name  Row Col Value Format Row Col Unit
//Scr 2
		{Scr2Col1Row1, "Scr2 Col1 Row 1", 1, 1, 1, 2, 1, 19,"C"},				{Scr2Col2Row1, "Scr2 Col2 Row 1", 1, 28, 25, 2, 1, 46,"V"},				{Scr2Col3Row1, "Scr2 Col3 Row 1", 1, 55, 49, 2, 1, 73,"V"},
		{Scr2Col1Row2, "Scr2 Col1 Row 2", 2, 1, 2, 2, 2, 19,"C"},				{Scr2Col2Row2, "Scr2 Col2 Row 2", 2, 28, 26, 0, 2, 46,"A"},				{Scr2Col3Row2, "Scr2 Col3 Row 2", 2, 55, 50, 0, 2, 73,"A"},
		{Scr2Col1Row3, "Scr2 Col1 Row 3", 3, 1, 3, 2, 3, 19,"C"},				{Scr2Col2Row3, "Scr2 Col2 Row 3", 3, 28, 27, 2, 3, 46,"W"},				{Scr2Col3Row3, "Scr2 Col3 Row 3", 3, 55, 51, 2, 3, 73,"W"},
		{Scr2Col1Row4, "Scr2 Col1 Row 4", 4, 1, 4, 2, 4, 19,"C"},				{Scr2Col2Row4, "Scr2 Col2 Row 4", 4, 28, 28, 0, 4, 46,"V"},				{Scr2Col3Row4, "Scr2 Col3 Row 4", 4, 55, 52, 0, 4, 73,"V"},
		{Scr2Col1Row5, "Scr2 Col1 Row 5", 5, 1, 5, 2, 5, 19,"C"},				{Scr2Col2Row5, "Scr2 Col2 Row 5", 5, 28, 29, 0, 5, 46,"A"},				{Scr2Col3Row5, "Scr2 Col3 Row 5", 5, 55, 53, 0, 5, 73,"A"},
		{Scr2Col1Row6, "Scr2 Col1 Row 6", 6, 1, 6, 2, 6, 19,"C"},				{Scr2Col2Row6, "Scr2 Col2 Row 6", 6, 28, 30, 2, 6, 46,"W"},				{Scr2Col3Row6, "Scr2 Col3 Row 6", 6, 55, 54, 2, 6, 73,"W"},
		{Scr2Col1Row7, "Scr2 Col1 Row 7", 7, 1, 7, 2, 7, 19,"C"},				{Scr2Col2Row7, "Scr2 Col2 Row 7", 7, 28, 31, 2, 7, 46,"C"},				{Scr2Col3Row7, "Scr2 Col3 Row 7", 7, 55, 55, 2, 7, 73,"C"},
		{Scr2Col1Row8, "Scr2 Col1 Row 8", 8, 1, 8, 2, 8, 19,"C"},				{Scr2Col2Row8, "Scr2 Col2 Row 8", 8, 28, 32, 2, 8, 46,"C"},				{Scr2Col3Row8, "Scr2 Col3 Row 8", 8, 55, 56, 2, 8, 73,"C"},
		{Scr2Col1Row9, "Scr2 Col1 Row 9", 9, 1, 9, 2, 9, 19,"C"},				{Scr2Col2Row9, "Scr2 Col2 Row 9", 9, 28, 33, 2, 9, 46,"C"},				{Scr2Col3Row9, "Scr2 Col3 Row 9", 9, 55, 57, 2, 9, 73,"C"},
		{Scr2Col1Row10, "Scr2 Col1 Row 10", 10, 1, 10, 2, 10, 19,"C"},				{Scr2Col2Row10, "Scr2 Col2 Row 10", 10, 28, 34, 3, 10, 46,"R"},				{Scr2Col3Row10, "Scr2 Col3 Row 10", 10, 55, 58, 3, 10, 73,"R"},
		{Scr2Col1Row11, "Scr2 Col1 Row 11", 11, 1, 11, 2, 11, 19,"C"},				{Scr2Col2Row11, "Scr2 Col2 Row 11", 11, 28, 35, 0, 11, 46,"%"},				{Scr2Col3Row11, "Scr2 Col3 Row 11", 11, 55, 59, 0, 11, 73,"%"},
		{Scr2Col1Row12, "Scr2 Col1 Row 12", 12, 1, 12, 2, 12, 19,"C"},				{Scr2Col2Row12, "Scr2 Col2 Row 12", 12, 28, 36, 3, 12, 46,"R"},				{Scr2Col3Row12, "Scr2 Col3 Row 12", 12, 55, 60, 3, 12, 73,"R"},
		{Scr2Col1Row13, "Scr2 Col1 Row 13", 13, 1, 13, 2, 13, 19,"C"},				{Scr2Col2Row13, "Scr2 Col2 Row 13", 13, 28, 37, 3, 13, 46,"R"},				{Scr2Col3Row13, "Scr2 Col3 Row 13", 13, 55, 61, 3, 13, 73,"R"},
		{Scr2Col1Row14, "Scr2 Col1 Row 14", 14, 1, 14, 2, 14, 19,"C"},				{Scr2Col2Row14, "Scr2 Col2 Row 14", 14, 28, 38, 3, 14, 46,"R"},				{Scr2Col3Row14, "Scr2 Col3 Row 14", 14, 55, 62, 3, 14, 73,"R"},
		{Scr2Col1Row15, "Scr2 Col1 Row 15", 15, 1, 15, 2, 15, 19,"C"},				{Scr2Col2Row15, "Scr2 Col2 Row 15", 15, 28, 39, 3, 15, 46,"R"},				{Scr2Col3Row15, "Scr2 Col3 Row 15", 15, 55, 63, 3, 15, 73,"R"},
		{Scr2Col1Row16, "Scr2 Col1 Row 16", 16, 1, 16, 2, 16, 19,"C"},				{Scr2Col2Row16, "Scr2 Col2 Row 16", 16, 28, 40, 3, 16, 46,"R"},				{Scr2Col3Row16, "Scr2 Col3 Row 16", 16, 55, 64, 3, 16, 73,"R"},
		{Scr2Col1Row17, "Scr2 Col1 Row 17", 17, 1, 17, 2, 17, 19,"C"},				{Scr2Col2Row17, "Scr2 Col2 Row 17", 17, 28, 41, 3, 17, 46,"R"},				{Scr2Col3Row17, "Scr2 Col3 Row 17", 17, 55, 65, 3, 17, 73,"R"},
		{Scr2Col1Row18, "Scr2 Col1 Row 18", 18, 1, 18, 2, 18, 19,"C"},				{Scr2Col2Row18, "Scr2 Col2 Row 18", 18, 28, 42, 2, 18, 46,"C"},				{Scr2Col3Row18, "Scr2 Col3 Row 18", 18, 55, 66, 2, 18, 73,"C"},
		{Scr2Col1Row19, "Scr2 Col1 Row 19", 19, 1, 19, 2, 19, 19,"C"},				{Scr2Col2Row19, "Scr2 Col2 Row 19", 19, 28, 43, 2, 19, 46,"C"},				{Scr2Col3Row19, "Scr2 Col3 Row 19", 19, 55, 67, 2, 19, 73,"C"},
		{Scr2Col1Row20, "Scr2 Col1 Row 20", 20, 1, 20, 2, 20, 19,"C"},				{Scr2Col2Row20, "Scr2 Col2 Row 20", 20, 28, 44, 2, 20, 46,"C"},				{Scr2Col3Row20, "Scr2 Col3 Row 20", 20, 55, 68, 2, 20, 73,"C"},
		{Scr2Col1Row21, "Scr2 Col1 Row 21", 21, 1, 21, 2, 21, 19,"C"},				{Scr2Col2Row21, "Scr2 Col2 Row 21", 21, 28, 45, 2, 21, 46,"C"},				{Scr2Col3Row21, "Scr2 Col3 Row 21", 21, 55, 69, 2, 21, 73,"C"},
		{Scr2Col1Row22, "Scr2 Col1 Row 22", 22, 1, 22, 2, 22, 19,"C"},				{Scr2Col2Row22, "Scr2 Col2 Row 22", 22, 28, 46, 2, 22, 46,"C"},				{Scr2Col3Row22, "Scr2 Col3 Row 22", 22, 55, 70, 2, 22, 73,"C"},
		{Scr2Col1Row23, "Scr2 Col1 Row 23", 23, 1, 23, 2, 23, 19,"C"},				{Scr2Col2Row23, "Scr2 Col2 Row 23", 23, 28, 47, 4, 23, 46,"X"},				{Scr2Col3Row23, "Scr2 Col3 Row 23", 23, 55, 71, 4, 23, 73,"X"},
		{Scr2Col1Row24, "Scr2 Col1 Row 24", 24, 1, 24, 2, 24, 19,"C"},				{Scr2Col2Row24, "Scr2 Col2 Row 24", 24, 28, 48, 4, 24, 46,"X"},				{Scr2Col3Row24, "Scr2 Col3 Row 24", 24, 55, 72, 4, 24, 73,"X"},
		},
		{
		// Name  Row Col Value Formay Row Col Unit
//Scr 3
		{Scr3Col1Row1, "Scr3 Col1 Row 1", 1, 1, 0, 1, 1, 19,"V"},				{Scr3Col2Row1, "Scr3 Col2 Row 1", 1, 28, 0, 0, 1, 46,"V"},				{Scr3Col3Row1, "Scr3 Col3 Row 1", 1, 55, 0, 1, 1, 73,"V"},
		{Scr3Col1Row2, "Scr3 Col1 Row 2", 2, 1, 0, 1, 2, 19,"V"},				{Scr3Col2Row2, "Scr3 Col2 Row 2", 2, 28, 0, 0, 2, 46,"V"},				{Scr3Col3Row2, "Scr3 Col3 Row 2", 2, 55, 0, 0, 2, 73,"A"},
		{Scr3Col1Row3, "Scr3 Col1 Row 3", 3, 1, 0, 1, 3, 19,"V"},				{Scr3Col2Row3, "Scr3 Col2 Row 3", 3, 28, 0, 0, 3, 46,"V"},				{Scr3Col3Row3, "Scr3 Col3 Row 3", 3, 55, 0, 0, 3, 73,"V"},
		{Scr3Col1Row4, "Scr3 Col1 Row 4", 4, 1, 0, 1, 4, 19,"V"},				{Scr3Col2Row4, "Scr3 Col2 Row 4", 4, 28, 0, 0, 4, 46,"A"},				{Scr3Col3Row4, "Scr3 Col3 Row 4", 4, 55, 0, 0, 4, 73,"V"},
		{Scr3Col1Row5, "Scr3 Col1 Row 5", 5, 1, 0, 1, 5, 19,"V"},				{Scr3Col2Row5, "Scr3 Col2 Row 5", 5, 28, 0, 0, 5, 46,"V"},				{Scr3Col3Row5, "Scr3 Col3 Row 5", 5, 55, 0, 0, 5, 73,"A"},
		{Scr3Col1Row6, "Scr3 Col1 Row 6", 6, 1, 0, 1, 6, 19,"V"},				{Scr3Col2Row6, "Scr3 Col2 Row 6", 6, 28, 0, 0, 6, 46,"V"},				{Scr3Col3Row6, "Scr3 Col3 Row 6", 6, 55, 0, 0, 6, 73,"V"},
		{Scr3Col1Row7, "Scr3 Col1 Row 7", 7, 1, 0, 1, 7, 19,"V"},				{Scr3Col2Row7, "Scr3 Col2 Row 7", 7, 28, 0, 0, 7, 46,"V"},				{Scr3Col3Row7, "Scr3 Col3 Row 7", 7, 55, 0, 4, 7, 73,"X"},
		{Scr3Col1Row8, "Scr3 Col1 Row 8", 8, 1, 0, 1, 8, 19,"V"},				{Scr3Col2Row8, "Scr3 Col2 Row 8", 8, 28, 0, 0, 8, 46,"V"},				{Scr3Col3Row8, "Scr3 Col3 Row 8", 8, 55, 0, 4, 8, 73,"X"},
		{Scr3Col1Row9, "Scr3 Col1 Row 9", 9, 1, 0, 1, 9, 19,"V"},				{Scr3Col2Row9, "Scr3 Col2 Row 9", 9, 28, 0, 0, 9, 46,"V"},				{Scr3Col3Row9, "Scr3 Col3 Row 9", 9, 55, 0, 4, 9, 73,"X"},
		{Scr3Col1Row10, "Scr3 Col1 Row 10", 10, 1, 0, 1, 10, 19,"V"},				{Scr3Col2Row10, "Scr3 Col2 Row 10", 10, 28, 0, 0, 10, 46,"V"},				{Scr3Col3Row10, "Scr3 Col3 Row 10", 10, 55, 0, 0, 10, 73,"V"},
		{Scr3Col1Row11, "Scr3 Col1 Row 11", 11, 1, 0, 1, 11, 19,"V"},				{Scr3Col2Row11, "Scr3 Col2 Row 11", 11, 28, 0, 1, 11, 46,"V"},				{Scr3Col3Row11, "Scr3 Col3 Row 11", 11, 55, 0, 0, 11, 73,"V"},
		{Scr3Col1Row12, "Scr3 Col1 Row 12", 12, 1, 0, 1, 12, 19,"V"},				{Scr3Col2Row12, "Scr3 Col2 Row 12", 12, 28, 0, 1, 12, 46,"V"},				{Scr3Col3Row12, "Scr3 Col3 Row 12", 12, 55, 0, 1, 12, 73,"V"},
		{Scr3Col1Row13, "Scr3 Col1 Row 13", 13, 1, 0, 0, 13, 19,"V"},				{Scr3Col2Row13, "Scr3 Col2 Row 13", 13, 28, 0, 1, 13, 46,"V"},				{Scr3Col3Row13, "Scr3 Col3 Row 13", 13, 55, 0, 1, 13, 73,"V"},
		{Scr3Col1Row14, "Scr3 Col1 Row 14", 14, 1, 0, 1, 14, 19,"V"},				{Scr3Col2Row14, "Scr3 Col2 Row 14", 14, 28, 0, 1, 14, 46,"V"},				{Scr3Col3Row14, "Scr3 Col3 Row 14", 14, 55, 0, 1, 14, 73,"V"},
		{Scr3Col1Row15, "Scr3 Col1 Row 15", 15, 1, 0, 1, 15, 19,"V"},				{Scr3Col2Row15, "Scr3 Col2 Row 15", 15, 28, 0, 0, 15, 46,"A"},				{Scr3Col3Row15, "Scr3 Col3 Row 15", 15, 55, 0, 0, 15, 73,"A"},
		{Scr3Col1Row16, "Scr3 Col1 Row 16", 16, 1, 0, 0, 16, 19,"V"},				{Scr3Col2Row16, "Scr3 Col2 Row 16", 16, 28, 0, 0, 16, 46,"A"},				{Scr3Col3Row16, "Scr3 Col3 Row 16", 16, 55, 0, 0, 16, 73,"A"},
		{Scr3Col1Row17, "Scr3 Col1 Row 17", 17, 1, 0, 0, 17, 19,"V"},				{Scr3Col2Row17, "Scr3 Col2 Row 17", 17, 28, 0, 0, 17, 46,"A"},				{Scr3Col3Row17, "Scr3 Col3 Row 17", 17, 55, 0, 0, 17, 73,"A"},
		{Scr3Col1Row18, "Scr3 Col1 Row 18", 18, 1, 0, 0, 18, 19,"V"},				{Scr3Col2Row18, "Scr3 Col2 Row 18", 18, 28, 0, 1, 18, 46,"V"},				{Scr3Col3Row18, "Scr3 Col3 Row 18", 18, 55, 0, 0, 18, 73,"A"},
		{Scr3Col1Row19, "Scr3 Col1 Row 19", 19, 1, 0, 0, 19, 19,"V"},				{Scr3Col2Row19, "Scr3 Col2 Row 19", 19, 28, 0, 1, 19, 46,"V"},				{Scr3Col3Row19, "Scr3 Col3 Row 19", 19, 55, 0, 0, 19, 73,"A"},
		{Scr3Col1Row20, "Scr3 Col1 Row 20", 20, 1, 0, 0, 20, 19,"V"},				{Scr3Col2Row20, "Scr3 Col2 Row 20", 20, 28, 0, 1, 20, 46,"V"},				{Scr3Col3Row20, "Scr3 Col3 Row 20", 20, 55, 0, 0, 20, 73,"A"},
		{Scr3Col1Row21, "Scr3 Col1 Row 21", 21, 1, 0, 0, 21, 19,"V"},				{Scr3Col2Row21, "Scr3 Col2 Row 21", 21, 28, 0, 0, 21, 46,"V"},				{Scr3Col3Row21, "Scr3 Col3 Row 21", 21, 55, 0, 0, 21, 73,"A"},
		{Scr3Col1Row22, "Scr3 Col1 Row 22", 22, 1, 0, 0, 22, 19,"V"},				{Scr3Col2Row22, "Scr3 Col2 Row 22", 22, 28, 0, 0, 22, 46,"V"},				{Scr3Col3Row22, "Scr3 Col3 Row 22", 22, 55, 0, 1, 22, 73,"V"},
		{Scr3Col1Row23, "Scr3 Col1 Row 23", 23, 1, 0, 0, 23, 19,"V"},				{Scr3Col2Row23, "Scr3 Col2 Row 23", 23, 28, 0, 0, 23, 46,"V"},				{Scr3Col3Row23, "Scr3 Col3 Row 23", 23, 55, 0, 1, 23, 73,"V"},
		{Scr3Col1Row24, "Scr3 Col1 Row 24", 24, 1, 0, 0, 24, 19,"V"},				{Scr3Col2Row24, "Scr3 Col2 Row 24", 24, 28, 0, 1, 24, 46,"V"},				{Scr3Col3Row24, "Scr3 Col3 Row 24", 24, 55, 0, 0, 24, 73,"A"},
		{Scr3Col1Row25, "Scr3 Col1 Row 25", 25, 1, 0, 2, 25, 19,"C"},				{Scr3Col2Row25, "Scr3 Col2 Row 25", 25, 28, 25, 2, 25, 46,"V"},				{Scr3Col3Row25, "Scr3 Col3 Row 25", 25, 55, 49, 2, 25, 73,"V"},
		{Scr3Col1Row26, "Scr3 Col1 Row 26", 26, 1, 0, 2, 26, 19,"C"},				{Scr3Col2Row26, "Scr3 Col2 Row 26", 26, 28, 26, 0, 26, 46,"A"},				{Scr3Col3Row26, "Scr3 Col3 Row 26", 26, 55, 50, 0, 26, 73,"A"},
		{Scr3Col1Row27, "Scr3 Col1 Row 27", 27, 1, 0, 2, 27, 19,"C"},				{Scr3Col2Row27, "Scr3 Col2 Row 27", 27, 28, 27, 2, 27, 46,"W"},				{Scr3Col3Row27, "Scr3 Col3 Row 27", 27, 55, 51, 2, 27, 73,"W"},
		{Scr3Col1Row28, "Scr3 Col1 Row 28", 28, 1, 0, 2, 28, 19,"C"},				{Scr3Col2Row28, "Scr3 Col2 Row 28", 28, 28, 28, 0, 28, 46,"V"},				{Scr3Col3Row28, "Scr3 Col3 Row 28", 28, 55, 52, 0, 28, 73,"V"},
		{Scr3Col1Row29, "Scr3 Col1 Row 29", 29, 1, 0, 2, 29, 19,"C"},				{Scr3Col2Row29, "Scr3 Col2 Row 29", 29, 28, 29, 0, 29, 46,"A"},				{Scr3Col3Row29, "Scr3 Col3 Row 29", 29, 55, 53, 0, 29, 73,"A"},
		{Scr3Col1Row30, "Scr3 Col1 Row 30", 30, 1, 0, 2, 30, 19,"C"},				{Scr3Col2Row30, "Scr3 Col2 Row 30", 30, 28, 30, 2, 30, 46,"W"},				{Scr3Col3Row30, "Scr3 Col3 Row 30", 30, 55, 54, 2, 30, 73,"W"},
		{Scr3Col1Row31, "Scr3 Col1 Row 31", 31, 1, 0, 2, 31, 19,"C"},				{Scr3Col2Row31, "Scr3 Col2 Row 31", 31, 28, 31, 2, 31, 46,"C"},				{Scr3Col3Row31, "Scr3 Col3 Row 31", 31, 55, 55, 2, 31, 73,"C"},
		{Scr3Col1Row32, "Scr3 Col1 Row 32", 32, 1, 0, 2, 32, 19,"C"},				{Scr3Col2Row32, "Scr3 Col2 Row 32", 32, 28, 32, 2, 32, 46,"C"},				{Scr3Col3Row32, "Scr3 Col3 Row 32", 32, 55, 56, 2, 32, 73,"C"},
		{Scr3Col1Row33, "Scr3 Col1 Row 33", 33, 1, 0, 2, 33, 19,"C"},				{Scr3Col2Row33, "Scr3 Col2 Row 33", 33, 28, 33, 2, 33, 46,"C"},				{Scr3Col3Row33, "Scr3 Col3 Row 33", 33, 55, 57, 2, 33, 73,"C"},
		{Scr3Col1Row34, "Scr3 Col1 Row 34", 34, 1, 0, 2, 34, 19,"C"},				{Scr3Col2Row34, "Scr3 Col2 Row 34", 34, 28, 34, 3, 34, 46,"R"},				{Scr3Col3Row34, "Scr3 Col3 Row 34", 34, 55, 58, 3, 34, 73,"R"},
		{Scr3Col1Row35, "Scr3 Col1 Row 35", 35, 1, 0, 2, 35, 19,"C"},				{Scr3Col2Row35, "Scr3 Col2 Row 35", 35, 28, 35, 0, 35, 46,"%"},				{Scr3Col3Row35, "Scr3 Col3 Row 35", 35, 55, 59, 0, 35, 73,"%"},
		{Scr3Col1Row36, "Scr3 Col1 Row 36", 36, 1, 0, 2, 36, 19,"C"},				{Scr3Col2Row36, "Scr3 Col2 Row 36", 36, 28, 36, 3, 36, 46,"R"},				{Scr3Col3Row36, "Scr3 Col3 Row 36", 36, 55, 60, 3, 36, 73,"R"},
		{Scr3Col1Row37, "Scr3 Col1 Row 37", 37, 1, 0, 2, 37, 19,"C"},				{Scr3Col2Row37, "Scr3 Col2 Row 37", 37, 28, 37, 3, 37, 46,"R"},				{Scr3Col3Row37, "Scr3 Col3 Row 37", 37, 55, 61, 3, 37, 73,"R"},
		{Scr3Col1Row38, "Scr3 Col1 Row 38", 38, 1, 0, 2, 38, 19,"C"},				{Scr3Col2Row38, "Scr3 Col2 Row 38", 38, 28, 38, 3, 38, 46,"R"},				{Scr3Col3Row38, "Scr3 Col3 Row 38", 38, 55, 62, 3, 38, 73,"R"},
		{Scr3Col1Row39, "Scr3 Col1 Row 39", 39, 1, 0, 2, 39, 19,"C"},				{Scr3Col2Row39, "Scr3 Col2 Row 39", 39, 28, 39, 3, 39, 46,"R"},				{Scr3Col3Row39, "Scr3 Col3 Row 39", 39, 55, 63, 3, 39, 73,"R"},
		{Scr3Col1Row40, "Scr3 Col1 Row 40", 40, 1, 0, 2, 40, 19,"C"},				{Scr3Col2Row40, "Scr3 Col2 Row 40", 40, 28, 40, 3, 40, 46,"R"},				{Scr3Col3Row40, "Scr3 Col3 Row 40", 40, 55, 64, 3, 40, 73,"R"},
		{Scr3Col1Row41, "Scr3 Col1 Row 41", 41, 1, 0, 2, 41, 19,"C"},				{Scr3Col2Row41, "Scr3 Col2 Row 41", 41, 28, 41, 3, 41, 46,"R"},				{Scr3Col3Row41, "Scr3 Col3 Row 41", 41, 55, 65, 3, 41, 73,"R"},
		{Scr3Col1Row42, "Scr3 Col1 Row 42", 42, 1, 0, 2, 42, 19,"C"},				{Scr3Col2Row42, "Scr3 Col2 Row 42", 42, 28, 42, 2, 42, 46,"C"},				{Scr3Col3Row42, "Scr3 Col3 Row 42", 42, 55, 66, 2, 42, 73,"C"},
		{Scr3Col1Row43, "Scr3 Col1 Row 43", 43, 1, 0, 2, 43, 19,"C"},				{Scr3Col2Row43, "Scr3 Col2 Row 43", 43, 28, 43, 2, 43, 46,"C"},				{Scr3Col3Row43, "Scr3 Col3 Row 43", 43, 55, 67, 2, 43, 73,"C"},
		{Scr3Col1Row44, "Scr3 Col1 Row 44", 44, 1, 0, 2, 44, 19,"C"},				{Scr3Col2Row44, "Scr3 Col2 Row 44", 44, 28, 44, 2, 44, 46,"C"},				{Scr3Col3Row44, "Scr3 Col3 Row 44", 44, 55, 68, 2, 44, 73,"C"},
		{Scr3Col1Row45, "Scr3 Col1 Row 45", 45, 1, 0, 2, 45, 19,"C"},				{Scr3Col2Row45, "Scr3 Col2 Row 45", 45, 28, 45, 2, 45, 46,"C"},				{Scr3Col3Row45, "Scr3 Col3 Row 45", 45, 55, 69, 2, 45, 73,"C"},
		{Scr3Col1Row46, "Scr3 Col1 Row 46", 46, 1, 0, 2, 46, 19,"C"},				{Scr3Col2Row46, "Scr3 Col2 Row 46", 46, 28, 46, 2, 46, 46,"C"},				{Scr3Col3Row46, "Scr3 Col3 Row 46", 46, 55, 70, 2, 46, 73,"C"},
		{Scr3Col1Row47, "Scr3 Col1 Row 47", 47, 1, 0, 2, 47, 19,"C"},				{Scr3Col2Row47, "Scr3 Col2 Row 47", 47, 28, 47, 4, 47, 46,"X"},				{Scr3Col3Row47, "Scr3 Col3 Row 47", 47, 55, 71, 4, 47, 73,"X"},
		{Scr3Col1Row48, "Scr3 Col1 Row 48", 48, 1, 0, 2, 48, 19,"C"},				{Scr3Col2Row48, "Scr3 Col2 Row 48", 48, 28, 48, 4, 48, 46,"X"},				{Scr3Col3Row48, "Scr3 Col3 Row 48", 48, 55, 72, 4, 48, 73,"X"},
		}
	};   // paraDataT



void gotoxy(int x,int y)
    {
   // printf("%c[%d;%df",ESC,x,y); //Row Col
    printf("%c[%d;%dH",ESC,x,y); //Row Col
    }



int kbhit(void)
    {
        struct timeval tv;
        
        fd_set read_fd;
        tv.tv_sec=0;
        tv.tv_usec=0;
        FD_ZERO(&read_fd);
        FD_SET(0,&read_fd);

        if(select(1, &read_fd, NULL, NULL, &tv) == -1)
            return 0;

        if(FD_ISSET(0,&read_fd))
            return 1;

        return 0;
    }    

    
void writeParms(scr_t scr)
{
    int parmIndex;
        
    for (parmIndex = 0; parmIndex <= NUM_PARMS - 1; parmIndex++)
      {
            gotoxy(parmData[scr][parmIndex].parmNameX, parmData[scr][parmIndex].parmNameY);
            printf("%s", parmData[scr][parmIndex].parmName);
            gotoxy(parmData[scr][parmIndex].parmNameX, parmData[scr][parmIndex].parmNameY + 24);
            printf("%s", parmData[scr][parmIndex].parmUnit);
      } // for
    if ((scr == scr1) || (scr == scr2))
    	commandLine(25);
    else if (scr == scr3)
    	commandLine(49);
} // writeParms


void commandLine(int cmd_stat_line)
{
    gotoxy(cmd_stat_line,1);
    printf("Select Screen: 1, 2 or 3. x to exit press Enter");
    gotoxy(cmd_stat_line,55);
    printf("18Sept17");
    gotoxy(cmd_stat_line,22);

} //Command_line

void writeData(scr_t scr)
{
    int f;

   for (f = 0; f < NUM_PARMS; f++)
    {
      gotoxy(parmData[scr][f].parmValueX, parmData[scr][f].parmValueY);

        switch (parmData[scr][f].parmFormat)
        {
            case 0:
               printf("%3.2f", parmValue[parmData[scr][f].parmIndex]);
                break;
            case 1:
            	printf("%2.3f", parmValue[parmData[scr][f].parmIndex]);
                break;
            case 2:
                printf("%4.1f", parmValue[parmData[scr][f].parmIndex]);
                break;
            case 3:
                printf("%5d ", (int)parmValue[parmData[scr][f].parmIndex]);
                break;
            case 4: // Don't Print
                break;
            default:
            	printf("X");
				 gotoxy(27,1);
				 printf("Missing Format Parameter");
                break;

        } // switch (parmData

        // Debug Code
        if (f == -1)
        {
		  gotoxy(28,1);
		 // printf("XADCValue:%f", parmValue[xadc_data[f].parmIndex]);
		  gotoxy(29,1);
		  printf("%3.2f", parmValue[parmData[scr][f].parmIndex]);
		  gotoxy(30,1);
		  printf("parmIndex:%d", parmData[scr][f].parmIndex);
        }

    } // for
#ifdef DEBUG
        // Debug code
		 gotoxy(26,1); // Debug delete after
        for (f = 0; f < 16; f++)
        {
		 printf("loop-%d:Index-%d:Val-%f:x-%d:y-%d\n",f,parmData[scr][f].parmIndex, parmData[scr][f].parmValue, parmData[scr][parmData[scr][f].parmIndex].parmValueX, parmData[scr][parmData[scr][f].parmIndex].parmValueY );
        }
#endif // DEBUG

} // writeData



void print_usage()
    {
    printf("Usage: -a \n");
    printf("       -b \n");
    }

int main(int argc, char *argv[])
    {
    	int option = 0;
        char c = '1'; // Default screen to start
        int  x = 0;
        int update;
        int cmd_stat_line;

        while ((option = getopt(argc, argv,"abh")) != -1)
            {
            switch (option)
                {
                 case 'a' : ;
                     break;
                 case 'b' : ;
                     break;
                 case 'h' : print_usage();
                            exit(1);
                     break;
                 case '?' : print_usage();
                            exit(1);
                     break;
                 default: print_usage();
                     exit(1);
                } // switch
            } //while

     //  gotoxy(26,1);

     //  printf("alpha_beta1 %d, beta2 %d option %d\n",alpha_beta1, beta2, option);
     //  usleep(3000000);

        clear_scr();
        //printf("%c[>5l" , ESC ); // cursor hidden
        printf("%c[?25l" , ESC ); // cursor off
     //   printf("%c[?3h" , ESC ); // 132 column mode
     //   printf("%c[?3l" , ESC ); // 80 column mode
        

        gotoxy(1,1);


      //  writeParms(scr1);  // Write the list of parameters to the screen


        while (c != 'x')
            {
        	update = 0;
            while (!kbhit())
                {
                    x++;
                    switch (c)
                        {   
                        case '1': //Screen one
                            {
                             if (update == 0)
                               {
                            	clear_scr();
                                writeParms(scr1);  // Write the list of parameters to the screen
                                update ++;
                                cmd_stat_line = 25;
                               }

                            writeData(scr1); // Write the data to the screen
                            break;
                            }
                        case '2': //Screen two
                            {
                                if (update == 0)
                                  {
                                	//reset_term();
                                  clear_scr();
                                   writeParms(scr2);  // Write the list of parameters to the screen
                                   update ++;
                                   cmd_stat_line = 25;
                                  }
                            writeData(scr2); // Write the data to the screen
                            break;
                            }
                        case '3': //Screen three
                            if (update == 0)
                               {
                                clear_scr();
                                writeParms(scr3);  // Write the list of parameters to the screen
                                update ++;
                                cmd_stat_line = 49;
                               }
                         writeData(scr3); // Write the data to the screen
                         break;

                        	break;
                        default:
                            {

                           // gotoxy(26,1);
                           // printf("Selet Screen: 1 or 2a");
                            }
                        } //Switch

                    gotoxy(cmd_stat_line,65);
                    printf("Loop: %d:%c", x, c);
                  //  gotoxy(cmd_stat_line,1);
                    usleep(500000);
                } // while (!kbhit())
             c = getchar();
           } // while (c != 'x')
        printf("\n\n\n");
        // Release memory


        return 0;
}
