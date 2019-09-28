/*
 * Code.c
 *
 * Created: 9/24/2019 8:39:56 PM
 *  Author: Mohamed I.Moselhy
 */ 

#include <avr/io.h>
#include "Header.h"
#define F_CPU 8000000ul
#include <util/delay.h>

#define LD 10
#define MD 500
#define HD 1000

int main(void)
{
	signed char i,j;
	DIO_setPortDirection('D' , 0xff);

    while(1)
	{
		for (i=0,j=7;i<=3;i++ , j--)
		{
		DIO_write('D' , i , 1);
		DIO_write('D' , j , 1);
		_delay_ms(HD);
		}
		for (i=3,j=4;i>=0;i-- , j++)
		{
			DIO_write('D' , i   , 0);
			DIO_write('D' , j   , 0);
			_delay_ms(HD);
		}		
    }
}