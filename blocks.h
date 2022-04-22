//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/	/*Command*/		        /*Update Interval*/	/*Update Signal*/
	{"", "battery_info.sh",	                  60,	          	0},
	{"", "volume_info.sh",	              0,	          	10},
	{"", "cpu_info.sh",	                  5,	          	0},
	{"", "date '+%b %d (%a) %I:%M%p'",		60,	          	0},
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim[] = " | ";
static unsigned int delimLen = 5;
