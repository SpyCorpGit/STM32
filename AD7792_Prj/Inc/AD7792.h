/*
 * AD7792.h
 *
 *  Created on: Nov 2, 2019
 *      Author: Remonter
 */

#ifndef AD7792_H_
#define AD7792_H_

/*AD7792 Registers*/

#define AD7792_REG_COMM		 0 /* Communications Register(WO, 8-bit) */
#define AD7792_REG_STAT	     0 /* Status Register	    (RO, 8-bit) */
#define AD7792_REG_MODE	     1 /* Mode Register	     	(RW, 16-bit */
#define AD7792_REG_CONF	     2 /* Configuration Register (RW, 16-bit)*/
#define AD7792_REG_DATA	     3 /* Data Register	     	(RO, 16-/24-bit) */
#define AD7792_REG_ID	     4 /* ID Register	     	  (RO, 8-bit) */
#define AD7792_REG_IO	     5 /* IO Register	     	  (RO, 8-bit) */
#define AD7792_REG_OFFSET    6 /* Offset Register	    (RW, 24-bit */
#define AD7792_REG_FULLSCALE 7 /* Full-Scale Register	(RW, 24-bit */



#endif /* AD7792_H_ */
