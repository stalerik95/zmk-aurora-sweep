
#pragma once

#include <dt-bindings/zmk/keys.h>

/* LETTERS */
/* Å */
#define SE_ARING LBKT
#define SE_AA SE_ARING
/*Ä*/
#define SE_ADIA SQT
#define SE_AE SE_ADIA
/*Ö*/
#define SE_ODIA SEMI
#define SE_OE SE_ODIA

/* PUNCTUATION */
/*!*/
#define SE_EXLM LS(SE_1)
/*?*/
#define SE_QUES LS(SE_PLUS)
/*_*/
#define SE_UNDS LS(SE_MINS)
/*,*/
#define SE_COMMA COMMA
/*.*/
#define SE_DOT DOT
/*:*/
#define SE_COLON LS(DOT)
/*;*/
#define SE_SEMI LS(COMMA)

/* SLASHES AND BRACKETS */  
/*/*/
#define SE_SLSH LS(SE_7)
/*(backslash)*/
#define SE_BSLS LA(LS(SE_7))
#define WSE_BSLS RA(SE_PLUS)
/*|*/
#define SE_PIPE LA(SE_7)
#define WSE_PIPE RA(SE_LABK)
/*(*/
#define SE_LPRN LS(SE_8)
/*)*/
#define SE_RPRN LS(SE_9)
/*[*/
#define SE_LBKT RA(SE_8)
/*]*/
#define SE_RBKT RA(SE_9)
/*{*/
#define SE_LBRC LA(LS(SE_8))
#define WSE_LBRC RA(SE_7)
/*}*/
#define SE_RBRC LA(LS(SE_9))
#define WSE_RBRC RA(SE_0)
/*<*/
#define SE_LABK GRAVE
#define SE_LT SE_LABK
/*>*/
#define SE_RABK LS(SE_LABK)
#define SE_GT SE_RABK

/* MATH */
/*+*/
#define SE_PLUS MINUS
/*-*/
#define SE_MINS FSLH
/*=*/
#define SE_EQL LS(SE_0)
/***/
#define SE_ASTR LS(SE_QUOT)

/* SYMBOLS*/
/*#*/
#define SE_HASH LS(SE_3)
/*%*/
#define SE_PERC LS(SE_5)
/*&*/
#define SE_AMPR LS(SE_6)
/*@*/
#define SE_AT RA(SE_2)
/*£*/
#define SE_PND RA(SE_3)
/*$*/
#define SE_DLR RA(SE_4)
/*€*/
#define SE_EUR RA(SE_5)
/*~*/
#define SE_TILD RA(RBKT)
/*µ*/
#define SE_MICR RA(M)
/*§*/
/* #define SE_SECT GRV */

/* QUOTES AND ACCENTS */
/*'*/
#define SE_QUOT NON_US_HASH
/*"*/
#define SE_DQUO LS(SE_2)
/*¨*/
#define SE_DIAE RBKT
/*´*/
#define SE_ACUT EQUAL
/*`*/
#define SE_GRV LS(SE_ACUT)
#define SE_BKTC SE_GRV
/*^*/
#define SE_CIRC LS(SE_DIAE)

/* NUMBERS */
/*0*/
#define SE_0 N0
/*1*/
#define SE_1 N1
/*2*/
#define SE_2 N2
/*3*/
#define SE_3 N3
/*4*/
#define SE_4 N4
/*5*/
#define SE_5 N5
/*6*/
#define SE_6 N6
/*7*/
#define SE_7 N7
/*8*/
#define SE_8 N8
/*9*/
#define SE_9 N9

/* MAC */
/* Lock screen */
#define MAC_LOCK LC(LS(C_PWR))

/* WIN */
/* Lock screen */
#define WIN_LOCK LG(L)
