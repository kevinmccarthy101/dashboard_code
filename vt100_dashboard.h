//18Sept17

#ifndef VT100_DASHBOARD_H_
#define VT100_DASHBOARD_H_

#define     NUM_SCR			 3
#define     NUM_PARMS   	144// 288 //Cols, Rows





typedef enum //parm_index
{
	Scr1Col1Row1, Scr1Col2Row1, Scr1Col3Row1, Scr1Col1Row2, Scr1Col2Row2, Scr1Col3Row2, Scr1Col1Row3, Scr1Col2Row3, Scr1Col3Row3, Scr1Col1Row4, Scr1Col2Row4, Scr1Col3Row4, Scr1Col1Row5, Scr1Col2Row5, Scr1Col3Row5, Scr1Col1Row6, Scr1Col2Row6, Scr1Col3Row6, Scr1Col1Row7, Scr1Col2Row7, Scr1Col3Row7, Scr1Col1Row8, Scr1Col2Row8, Scr1Col3Row8,
	Scr1Col1Row9, Scr1Col2Row9, Scr1Col3Row9, Scr1Col1Row10, Scr1Col2Row10, Scr1Col3Row11, Scr1Col1Row11, Scr1Col2Row11, Scr1Col3Row10, Scr1Col1Row12, Scr1Col2Row12, Scr1Col3Row12, Scr1Col1Row13, Scr1Col2Row13, Scr1Col3Row13, Scr1Col1Row14, Scr1Col2Row14, Scr1Col3Row14, Scr1Col1Row15, Scr1Col2Row15, Scr1Col3Row15, Scr1Col1Row16, Scr1Col2Row16, Scr1Col3Row16,
	Scr1Col1Row17, Scr1Col2Row17, Scr1Col3Row17, Scr1Col1Row18, Scr1Col2Row18, Scr1Col3Row18, Scr1Col1Row19, Scr1Col2Row19, Scr1Col3Row19, Scr1Col1Row20, Scr1Col2Row20, Scr1Col3Row20, Scr1Col1Row21, Scr1Col2Row21, Scr1Col3Row21, Scr1Col1Row22, Scr1Col2Row22, Scr1Col3Row22, Scr1Col1Row23, Scr1Col2Row23, Scr1Col3Row23, Scr1Col1Row24, Scr1Col2Row24, Scr1Col3Row24,
	
	Scr2Col1Row1, Scr2Col2Row1, Scr2Col3Row1, Scr2Col1Row2, Scr2Col2Row2, Scr2Col3Row2, Scr2Col1Row3, Scr2Col2Row3, Scr2Col3Row3, Scr2Col1Row4, Scr2Col2Row4, Scr2Col3Row4, Scr2Col1Row5, Scr2Col2Row5, Scr2Col3Row5, Scr2Col1Row6, Scr2Col2Row6, Scr2Col3Row6, Scr2Col1Row7, Scr2Col2Row7, Scr2Col3Row7, Scr2Col1Row8, Scr2Col2Row8, Scr2Col3Row8,
	Scr2Col1Row9, Scr2Col2Row9, Scr2Col3Row9, Scr2Col1Row10, Scr2Col2Row10, Scr2Col3Row11, Scr2Col1Row11, Scr2Col2Row11, Scr2Col3Row10, Scr2Col1Row12, Scr2Col2Row12, Scr2Col3Row12, Scr2Col1Row13, Scr2Col2Row13, Scr2Col3Row13, Scr2Col1Row14, Scr2Col2Row14, Scr2Col3Row14, Scr2Col1Row15, Scr2Col2Row15, Scr2Col3Row15, Scr2Col1Row16, Scr2Col2Row16, Scr2Col3Row16,
	Scr2Col1Row17, Scr2Col2Row17, Scr2Col3Row17, Scr2Col1Row18, Scr2Col2Row18, Scr2Col3Row18, Scr2Col1Row19, Scr2Col2Row19, Scr2Col3Row19, Scr2Col1Row20, Scr2Col2Row20, Scr2Col3Row20, Scr2Col1Row21, Scr2Col2Row21, Scr2Col3Row21, Scr2Col1Row22, Scr2Col2Row22, Scr2Col3Row22, Scr2Col1Row23, Scr2Col2Row23, Scr2Col3Row23, Scr2Col1Row24, Scr2Col2Row24, Scr2Col3Row24,
	
	Scr3Col1Row1, Scr3Col2Row1, Scr3Col3Row1, Scr3Col1Row2, Scr3Col2Row2, Scr3Col3Row2, Scr3Col1Row3, Scr3Col2Row3, Scr3Col3Row3, Scr3Col1Row4, Scr3Col2Row4, Scr3Col3Row4, Scr3Col1Row5, Scr3Col2Row5, Scr3Col3Row5, Scr3Col1Row6, Scr3Col2Row6, Scr3Col3Row6, Scr3Col1Row7, Scr3Col2Row7, Scr3Col3Row7, Scr3Col1Row8, Scr3Col2Row8, Scr3Col3Row8,
	Scr3Col1Row9, Scr3Col2Row9, Scr3Col3Row9, Scr3Col1Row10, Scr3Col2Row10, Scr3Col3Row11, Scr3Col1Row11, Scr3Col2Row11, Scr3Col3Row10, Scr3Col1Row12, Scr3Col2Row12, Scr3Col3Row12, Scr3Col1Row13, Scr3Col2Row13, Scr3Col3Row13, Scr3Col1Row14, Scr3Col2Row14, Scr3Col3Row14, Scr3Col1Row15, Scr3Col2Row15, Scr3Col3Row15, Scr3Col1Row16, Scr3Col2Row16, Scr3Col3Row16,
	Scr3Col1Row17, Scr3Col2Row17, Scr3Col3Row17, Scr3Col1Row18, Scr3Col2Row18, Scr3Col3Row18, Scr3Col1Row19, Scr3Col2Row19, Scr3Col3Row19, Scr3Col1Row20, Scr3Col2Row20, Scr3Col3Row20, Scr3Col1Row21, Scr3Col2Row21, Scr3Col3Row21, Scr3Col1Row22, Scr3Col2Row22, Scr3Col3Row22, Scr3Col1Row23, Scr3Col2Row23, Scr3Col3Row23, Scr3Col1Row24, Scr3Col2Row24, Scr3Col3Row24,
	Scr3Col1Row25, Scr3Col2Row25, Scr3Col3Row25, Scr3Col1Row26, Scr3Col2Row26, Scr3Col3Row26, Scr3Col1Row27, Scr3Col2Row27, Scr3Col3Row27, Scr3Col1Row28, Scr3Col2Row28, Scr3Col3Row28, Scr3Col1Row29, Scr3Col2Row29, Scr3Col3Row29, Scr3Col1Row30, Scr3Col2Row30, Scr3Col3Row30, Scr3Col1Row31, Scr3Col2Row31, Scr3Col3Row31, Scr3Col1Row32, Scr3Col2Row32, Scr3Col3Row32,
	Scr3Col1Row33, Scr3Col2Row33, Scr3Col3Row33, Scr3Col1Row34, Scr3Col2Row34, Scr3Col3Row34, Scr3Col1Row35, Scr3Col2Row35, Scr3Col3Row35, Scr3Col1Row36, Scr3Col2Row36, Scr3Col3Row36, Scr3Col1Row37, Scr3Col2Row37, Scr3Col3Row37, Scr3Col1Row38, Scr3Col2Row38, Scr3Col3Row38, Scr3Col1Row39, Scr3Col2Row39, Scr3Col3Row39, Scr3Col1Row40, Scr3Col2Row40, Scr3Col3Row40,
	Scr3Col1Row41, Scr3Col2Row41, Scr3Col3Row41, Scr3Col1Row42, Scr3Col2Row42, Scr3Col3Row42, Scr3Col1Row43, Scr3Col2Row43, Scr3Col3Row43, Scr3Col1Row44, Scr3Col2Row44, Scr3Col3Row44, Scr3Col1Row45, Scr3Col2Row45, Scr3Col3Row45, Scr3Col1Row46, Scr3Col2Row46, Scr3Col3Row46, Scr3Col1Row47, Scr3Col2Row47, Scr3Col3Row47, Scr3Col1Row48, Scr3Col2Row48, Scr3Col3Row48,Parm_Index_Last
} parm_index_t;


// Variable used to store all data to be displayed to VT100 display.
float parmValue[Parm_Index_Last];


// Screen Data Structure
typedef struct
	{
		parm_index_t parmIndex;
		char    parmName[16];
		int     parmNameX; //Row
		int     parmNameY; //Col
		float   parmValueOld;
		int     parmFormat;
		int     parmValueX; //Row
		int     parmValueY; //Col
		char    parmUnit[1];
	} parmDataT;

extern parmDataT parmData[NUM_SCR][NUM_PARMS];
//extern parmDataT parmData[NUM_SCR][NUM_PARMS];

// Screen Index
typedef enum {scr1, scr2, scr3, scr4} scr_t;


#endif //VT100_DASHBOARD_H_
