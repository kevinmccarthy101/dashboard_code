//Updated: 03Aug15

#ifndef WS_DASHBOARD_H_
#define WS_DASHBOARD_H_


#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <errno.h>      // errno and perror 
#include <stdint.h>
#include <time.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <ctype.h>
#include <fcntl.h>
#include <unistd.h>
#include <netinet/in.h>
#include <sys/select.h>
#include <sys/mman.h>
#include <linux/i2c-dev.h>



#define 	ESC 			 27
#define 	TRUE			 1
#define 	FALSE			 0

// Macros
#define 	convert_temp(value) (float)((value * 503.975)/65536) - 273.15
#define 	convert_volt(value, sf)  (float) (value * sf)/65536
#define     clear_scr()   printf("%c[2J"  , ESC ) // clear scr
#define     reset_term()   printf("%cc"  , ESC )


// Prototypes
void gotoxy(int x,int y);
void commandLine(int cmd_stat_line);



#endif //WS_DASHBOARD_H_
