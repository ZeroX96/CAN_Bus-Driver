/*
 * common.h
 *
 * Created : 04/06/2021 10:23:42
 * Author  : MahmoudSaad.ZeroX96
 * Email   : Mahmoud.S.AbdElhares@gmail.com
 * Email   : msammamsa10@gmail.com
 * Github  : github.com/ZeroX96
 * LinkedIn: www.linkedin.com/in/MahmoudSaad96
 */
#ifndef COMMON_H_
#define COMMON_H_

//common data types
typedef enum{
	E_FALSE =0,
	E_TRUE,
}tenum_bool;

#define NULL ((void *)0)
typedef						tenum_bool	bool_t;
typedef unsigned			char 		msa_u8;
typedef unsigned	short	int 		msa_u16;
typedef unsigned	long	int 		msa_u32;
typedef signed				char 		msa_s8;
typedef signed		short	int 		msa_s16;
typedef signed		long	int 		msa_s32;
typedef						float		msa_f32;
typedef						double		msa_f64;

//common used macros

/* Set a certain bit in any register */
#define SET_BIT(REG,BIT) (REG|=(1<<BIT))

/* Clear a certain bit in any register */
#define CLEAR_BIT(REG,BIT) (REG&=(~(1<<BIT)))

/* Check if a specific bit is set in any register and return true if yes */
#define BIT_IS_SET(REG,BIT) ( REG & (1<<BIT) )

/* Check if a specific bit is cleared in any register and return true if yes */
#define BIT_IS_CLEAR(REG,BIT) ( !(REG & (1<<BIT)) )

#endif /* COMMON_H_ */