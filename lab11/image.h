/* *********************************** */
/*  CPE 101                  Fall 2009 */
/*  Lab 6       Image Library          */
/* Alex Dekhtyar                       */
/***************************************/


#define COLORS 3       /* number of colors components in an RGB color */
#define HEIGHT 400     /* height of the image produced                */
#define WIDTH  600     /* width of the image produced                 */
#define PI 3.14159265  /* PI                                          */


#define BLACK 0,0,0
#define WHITE 255, 255, 255
#define RED 255, 0, 0
#define DARK_RED 128,0,0
#define BLUE 0,0,255
#define YELLOW 255,255,0
#define BROWN 140,70,20
#define CYAN 0,255,255
#define ORANGE 255, 128,0
#define GREEN 0,255,0
#define DARK_GREEN 0,128,0
#define MAGENTA 255,0,255
#define GRAY 128, 128, 128
#define LIGHT_GRAY 196, 196, 196
#define DARK_GRAY 64, 64, 64


/******************************************************/
/*   Function Declarations                            */

/************* Layer 1   ******************************/

/* getMin() and getMax() - just what you expect       */

int getMin(int i, int j);
int getMax(int i, int j);

/* getAngle: finds the angle for a vector (j,i) */
float getAngle(int i, int j);

/* printHeader() outputs PPM file header               */

void printHeader(int h, int w);

/* drawImage()    prints to stdout current image        */

void drawImage(char image[][WIDTH][COLORS]);

/* blankImage()  paints all pixels in one color         */


void blankImage(char image[][WIDTH][COLORS], char color[]);

/* putRectangle() paints a rectangle       */


void putRectangle(char image[][WIDTH][COLORS], int topY, int topX,
                   int height, int width, char color[]); 

/* putCircle()  paints a circle      */

void putCircle(char image[][WIDTH][COLORS], int centerY, int centerX,
                   int radius, char color[]);


/* putPie()  draws an arc      */

void putPie(char image[][WIDTH][COLORS], int centerY, int centerX,
                   int radius, int start, int end, char color[]);

/*  putRing()   paints a ring  */

void putRing(char image[][WIDTH][COLORS], int centerY, int centerX,
                   int radius1, int radius2, char color[]);


/*  putArc()   paints an arc  */

void putArc(char image[][WIDTH][COLORS], int centerY, int centerX,
                   int radius1, int radius2, int start, int end, char color[]);


/* putEllipse()  paints an oval */

void putEllipse(char image[][WIDTH][COLORS], int centerY, int centerX,
                   int radius1, int radius2, char color[]);


/*  putPixel()  paints one pixel      */

void putPixel(char image[][WIDTH][COLORS], int i, int j, char color[]);


/* putLine()   draws a line             */

void putLine(char image[][WIDTH][COLORS], 
             int fromY, int fromX, int toY, int toX,
	     char color[]);

/* setColor()  sets the values in the color aray  */
 
void setColor(char color[], char r, char g, char b);

