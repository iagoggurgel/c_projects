#ifndef __CHESS.H__
#define __CHESS.H__


enum EnumPieceTypeColor
{
	ept_null = 0x00,
	ept_white = 0x01,
	ept_black = 0x02,
	ept_pawn = 0x04,
	ept_knight = 0x08,
	ept_bishop = 0x10,
	ept_rook = 0x20,
	ept_queen = 0x40,
	ept_king = 0x80

};

enum EnumFiles
{

	f0 = 0x00,
	f1 = 0x01,
	f2 = 0x02,
	f3 = 0x03,
	f4 = 0x04,
	f5 = 0x05,
	f6 = 0x06,
	f7 = 0x07
	
};

enum EnumRanks
{
	
	r0 = 0x00,
	r1 = 0x10,
	r2 = 0x20,
	r3 = 0x30,
	r4 = 0x40,
	r5 = 0x50,
	r6 = 0x60,
	r7 = 0x70

};


typedef struct
CHESS_Piece
{
	
	uint8_t piece;

} piece_t;

typedef struct
CHESS_Move
{

	char alg_notation[16];
	

} move_t;

