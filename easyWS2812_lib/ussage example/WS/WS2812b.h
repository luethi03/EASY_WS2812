/************************************************************************************
*	Projekt:	LED_Controller_							 _.-^^---....,,--_			*
*	Autor:		Samuel L�thi						 _--*%�&*�&*%&*%&*&*bb--_		*
*	Datum:		16.12.2021							<#�``+@�|( �~�|�(%&�|fegh>)		*
*												    |tradgrtgrt67584322423h6jp|		*
*													 \._ .;7gi&/&%hu89o99$8$_./		*
*														```--. . , ; .--'''			*
*															  | |   |				*
*														   .-=||  | |=-.			*
*														   `-=#$%&%$#=-'			*
*															  | ;  :|				*
*													 _____.,-#%&$@%#&#~,._____		*
************************************************************************************/


/*** System Variablen ***/
unsigned char i;							// Z�hlvariable f�r For-Schleifen

/***function prototypes***/
void LED_WRITE( unsigned int, unsigned char, unsigned char, unsigned char );							//write color to stripe
uint32_t HSV_to_RGB(unsigned int, unsigned char, unsigned char, unsigned char, unsigned int );				//convert HSV to RGB

