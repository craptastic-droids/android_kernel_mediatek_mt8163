/*
 * Copyright (C) 2015 MediaTek Inc.
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 as
 * published by the Free Software Foundation.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
 * GNU General Public License for more details.
 */

#ifndef MT_SPOWER_CPU_H
#define MT_SPOWER_CPU_H



#define VSIZE 8
#define TSIZE 17

/***************************/
/* "(WAT 14.35%)	   */
/* Leakage Power"	   */
/***************************/
#define CA7_TABLE_0							\
	{800,	850,	900,	950,	1000,	1050,	1100,	1150, \
	25,	20,	25,	31,	39,	48,	60,	74,	90, \
	30,	29,	37,	46,	58,	71,	88,	109,	133, \
	35,	43,	54,	68,	85,	104,	130,	160,	196, \
	40,	63,	80,	101,	125,	154,	192,	236,	289, \
	45,	93,	118,	149,	185,	227,	283,	349,	426, \
	50,	101,	129,	162,	201,	247,	308,	380,	464, \
	55,	110,	140,	177,	219,	269,	335,	413,	505, \
	60,	120,	153,	192,	239,	293,	365,	450,	550, \
	65,	131,	167,	209,	260,	319,	397,	490,	598, \
	70,	144,	184,	231,	286,	352,	438,	540,	660, \
	75,	159,	202,	254,	316,	388,	483,	595,	727, \
	80,	175,	223,	280,	348,	427,	532,	656,	801, \
	85,	193,	246,	309,	384,	471,	587,	723,	883, \
	90,	203,	259,	326,	404,	497,	618,	762,	931, \
	95,	214,	273,	343,	426,	523,	652,	804,	982, \
	100,	226,	288,	362,	450,	552,	687,	847,	1035, \
	105,	238,	304,	382,	474,	582,	725,	893,	1091}

/******************/
/* "(WAT 2.65%)	  */
/* Leakage Power" */
/******************/
#define CA7_TABLE_1							\
	{800,	850,	900,	950,	1000,	1050,	1100,	1150, \
	25,	8,	10,	13,	16,	20,	25,	30,	37, \
	30,	10,	12,	16,	19,	24,	29,	36,	44, \
	35,	12,	15,	19,	23,	28,	35,	44,	53, \
	40,	14,	18,	22,	28,	34,	43,	52,	64, \
	45,	17,	21,	27,	33,	41,	51,	63,	77, \
	50,	20,	25,	32,	40,	49,	61,	75,	92, \
	55,	24,	30,	38,	47,	58,	72,	89,	109, \
	60,	28,	36,	45,	56,	69,	86,	106,	130, \
	65,	34,	43,	54,	67,	82,	103,	127,	155, \
	70,	39,	50,	63,	79,	96,	120,	148,	181, \
	75,	46,	59,	74,	92,	113,	141,	173,	212, \
	80,	54,	69,	87,	108,	132,	164,	203,	248, \
	85,	63,	81,	101,	126,	155,	192,	237,	290, \
	90,	73,	93,	117,	146,	179,	223,	275,	336, \
	95,	85,	108,	136,	169,	207,	258,	318,	389, \
	100,	98,	125,	158,	196,	240,	299,	369,	451, \
	105,	114,	145,	183,	227,	278,	347,	428,	522}

#define CA7_TABLE_2							\
	{800,	850,	900,	950,	1000,	1050,	1100,	1150, \
	25,	8,	10,	13,	16,	20,	25,	30,	37, \
	30,	10,	12,	16,	19,	24,	29,	36,	44, \
	35,	12,	15,	19,	23,	28,	35,	44,	53, \
	40,	14,	18,	22,	28,	34,	43,	52,	64, \
	45,	17,	21,	27,	33,	41,	51,	63,	77, \
	50,	20,	25,	32,	40,	49,	61,	75,	92, \
	55,	24,	30,	38,	47,	58,	72,	89,	109, \
	60,	28,	36,	45,	56,	69,	86,	106,	130, \
	65,	34,	43,	54,	67,	82,	103,	127,	155, \
	70,	39,	50,	63,	79,	96,	120,	148,	181, \
	75,	46,	59,	74,	92,	113,	141,	173,	212, \
	80,	54,	69,	87,	108,	132,	164,	203,	248, \
	85,	63,	81,	101,	126,	155,	192,	237,	290, \
	90,	73,	93,	117,	146,	179,	223,	275,	336, \
	95,	85,	108,	136,	169,	207,	258,	318,	389, \
	100,	98,	125,	158,	196,	240,	299,	369,	451, \
	105,	114,	145,	183,	227,	278,	347,	428,	522}


/***************************/
/* "(WAT 14.35%)	   */
/* Leakage Power"	   */
/***************************/
#define CA15L_TABLE_0							\
	{800,	850,	900,	950,	1000,	1050,	1100,	1150, \
	25,	65,	83,	104,	129,	172,	195,	241,	294, \
	30,	76,	97,	122,	151,	201,	229,	282,	344, \
	35,	89,	113,	142,	177,	235,	267,	330,	403, \
	40,	104,	132,	166,	207,	275,	313,	386,	471, \
	45,	122,	155,	195,	242,	321,	366,	451,	551, \
	50,	142,	181,	228,	283,	376,	428,	528,	645, \
	55,	166,	212,	266,	331,	440,	501,	617,	754, \
	60,	195,	248,	312,	387,	514,	586,	722,	882, \
	65,	228,	290,	365,	453,	602,	685,	845,	1032, \
	70,	266,	339,	427,	530,	704,	802,	989,	1207, \
	75,	312,	397,	499,	619,	823,	938,	1156,	1412, \
	80,	364,	464,	584,	725,	963,	1097,	1353,	1652, \
	85,	426,	543,	683,	848,	1127,	1284,	1582,	1933, \
	90,	499,	635,	799,	992,	1318,	1501,	1851,	2261, \
	95,	583,	743,	934,	1160,	1541,	1756,	2165,	2644, \
	100,	682,	869,	1093,	1357,	1803,	2054,	2532,	3093, \
	105,	798,	1017,	1278,	1587,	2109,	2402,	2962,	3618}

#define CA15L_TABLE_1							\
	{800,	850,	900,	950,	1000,	1050,	1100,	1150, \
	25,	27,	34,	43,	53,	71,	80,	99,	121, \
	30,	31,	40,	50,	63,	83,	95,	117,	143, \
	35,	37,	47,	59,	74,	98,	112,	138,	168, \
	40,	44,	56,	70,	87,	116,	132,	162,	198, \
	45,	52,	66,	83,	102,	136,	155,	191,	234, \
	50,	61,	77,	97,	121,	161,	183,	226,	275, \
	55,	72,	91,	115,	142,	189,	216,	266,	325, \
	60,	84,	108,	135,	168,	223,	254,	313,	383, \
	65,	99,	127,	159,	198,	263,	300,	369,	451, \
	70,	117,	149,	188,	233,	310,	353,	435,	532, \
	75,	138,	176,	221,	275,	365,	416,	513,	627, \
	80,	163,	208,	261,	324,	430,	490,	605,	738, \
	85,	192,	245,	307,	382,	507,	578,	712,	870, \
	90,	226,	288,	362,	450,	598,	681,	840,	1026, \
	95,	267,	340,	427,	530,	705,	803,	990,	1209, \
	100,	314,	400,	503,	625,	830,	946,	1166,	1425, \
	105,	370,	472,	593,	736,	979,	1115,	1375,	1679}

#define CA15L_TABLE_2							\
	{800,	850,	900,	950,	1000,	1050,	1100,	1150, \
	25,	27,	34,	43,	53,	71,	80,	99,	121, \
	30,	31,	40,	50,	63,	83,	95,	117,	143, \
	35,	37,	47,	59,	74,	98,	112,	138,	168, \
	40,	44,	56,	70,	87,	116,	132,	162,	198, \
	45,	52,	66,	83,	102,	136,	155,	191,	234, \
	50,	61,	77,	97,	121,	161,	183,	226,	275, \
	55,	72,	91,	115,	142,	189,	216,	266,	325, \
	60,	84,	108,	135,	168,	223,	254,	313,	383, \
	65,	99,	127,	159,	198,	263,	300,	369,	451, \
	70,	117,	149,	188,	233,	310,	353,	435,	532, \
	75,	138,	176,	221,	275,	365,	416,	513,	627, \
	80,	163,	208,	261,	324,	430,	490,	605,	738, \
	85,	192,	245,	307,	382,	507,	578,	712,	870, \
	90,	226,	288,	362,	450,	598,	681,	840,	1026, \
	95,	267,	340,	427,	530,	705,	803,	990,	1209, \
	100,	314,	400,	503,	625,	830,	946,	1166,	1425, \
	105,	370,	472,	593,	736,	979,	1115,	1375,	1679}

#define GPU_TABLE_0							\
	{800,	850,	900,	950,	1000,	1050,	1100,	1150, \
	25,	24,	31,	39,	48,	59,	73,	90,	110, \
	30,	28,	36,	45,	55,	68,	85,	105,	128, \
	35,	32,	41,	52,	64,	79,	98,	121,	148, \
	40,	37,	47,	60,	74,	91,	113,	140,	171, \
	45,	43,	55,	69,	86,	105,	131,	161,	197, \
	50,	50,	63,	80,	99,	121,	151,	187,	228, \
	55,	57,	73,	92,	114,	140,	175,	216,	263, \
	60,	66,	85,	106,	132,	162,	202,	249,	304, \
	65,	77,	98,	123,	153,	188,	234,	288,	352, \
	70,	89,	113,	142,	177,	217,	270,	333,	406, \
	75,	103,	131,	164,	204,	250,	312,	385,	470, \
	80,	119,	151,	190,	236,	289,	361,	444,	543, \
	85,	137,	175,	219,	272,	335,	417,	514,	627, \
	90,	158,	202,	254,	315,	387,	482,	594,	725, \
	95,	183,	233,	293,	364,	447,	557,	686,	838, \
	100,	212,	270,	339,	421,	516,	643,	793,	969, \
	105,	244,	312,	392,	486,	597,	743,	917,	1120}

#define GPU_TABLE_1							\
	{800,	850,	900,	950,	1000,	1050,	1100,	1150, \
	25,	9,	11,	14,	18,	22,	27,	34,	41, \
	30,	11,	13,	17,	21,	26,	32,	40,	48, \
	35,	12,	16,	20,	25,	30,	38,	47,	57, \
	40,	15,	19,	23,	29,	36,	44,	55,	67, \
	45,	17,	22,	28,	34,	42,	52,	65,	79, \
	50,	20,	26,	32,	40,	50,	62,	76,	93, \
	55,	24,	30,	38,	47,	58,	73,	89,	109, \
	60,	28,	36,	45,	56,	69,	85,	105,	129, \
	65,	33,	42,	53,	66,	81,	101,	124,	151, \
	70,	39,	50,	62,	77,	95,	118,	146,	178, \
	75,	46,	58,	73,	91,	112,	139,	172,	210, \
	80,	54,	69,	86,	107,	132,	164,	202,	247, \
	85,	64,	81,	102,	126,	155,	193,	238,	291, \
	90,	75,	95,	120,	149,	183,	227,	280,	342, \
	95,	88,	112,	141,	175,	215,	268,	330,	403, \
	100,	104,	132,	166,	206,	253,	315,	389,	475, \
	105,	122,	156,	195,	243,	298,	371,	457,	559}

#define GPU_TABLE_2							\
	{800,	850,	900,	950,	1000,	1050,	1100,	1150, \
	25,	9,	11,	14,	18,	22,	27,	34,	41, \
	30,	11,	13,	17,	21,	26,	32,	40,	48, \
	35,	12,	16,	20,	25,	30,	38,	47,	57, \
	40,	15,	19,	23,	29,	36,	44,	55,	67, \
	45,	17,	22,	28,	34,	42,	52,	65,	79, \
	50,	20,	26,	32,	40,	50,	62,	76,	93, \
	55,	24,	30,	38,	47,	58,	73,	89,	109, \
	60,	28,	36,	45,	56,	69,	85,	105,	129, \
	65,	33,	42,	53,	66,	81,	101,	124,	151, \
	70,	39,	50,	62,	77,	95,	118,	146,	178, \
	75,	46,	58,	73,	91,	112,	139,	172,	210, \
	80,	54,	69,	86,	107,	132,	164,	202,	247, \
	85,	64,	81,	102,	126,	155,	193,	238,	291, \
	90,	75,	95,	120,	149,	183,	227,	280,	342, \
	95,	88,	112,	141,	175,	215,	268,	330,	403, \
	100,	104,	132,	166,	206,	253,	315,	389,	475, \
	105,	122,	156,	195,	243,	298,	371,	457,	559}


int ca7_data[][VSIZE*TSIZE+VSIZE+TSIZE] = {
		CA7_TABLE_0,
		CA7_TABLE_1,
		CA7_TABLE_2,
};

int ca15l_data[][VSIZE*TSIZE+VSIZE+TSIZE] = {
		CA15L_TABLE_0,
		CA15L_TABLE_1,
		CA15L_TABLE_2,
};

int gpu_data[][VSIZE*TSIZE+VSIZE+TSIZE] = {
		GPU_TABLE_0,
		GPU_TABLE_1,
		GPU_TABLE_2,
};

struct spower_raw_t {
	int vsize;
	int tsize;
	int table_size;
	int *table[];
};

struct spower_raw_t ca7_spower_raw = {
	.vsize = VSIZE,
	.tsize = TSIZE,
	.table_size = 3,
	.table = { (int *)&ca7_data[0], (int *)&ca7_data[1]
		  , (int *)&ca7_data[2] },
};


struct spower_raw_t ca15l_spower_raw = {
	.vsize = VSIZE,
	.tsize = TSIZE,
	.table_size = 3,
	.table = { (int *)&ca15l_data[0], (int *)&ca15l_data[1]
		  , (int *)&ca15l_data[2] },
};

struct spower_raw_t gpu_spower_raw = {
	.vsize = VSIZE,
	.tsize = TSIZE,
	.table_size = 3,
	.table = { (int *)&gpu_data[0], (int *)&gpu_data[1]
		  , (int *)&gpu_data[2] },
};



struct vrow_t {
	int mV[VSIZE];
};

struct trow_t {
	int deg;
	int mA[VSIZE];
};


struct sptbl_t {
	int vsize;
	int tsize;
	int *data;		/* array[VSIZE + TSIZE + (VSIZE*TSIZE)]; */
	struct vrow_t *vrow;		/* pointer to voltage row of data */
	struct trow_t *trow;		/* pointer to temperature row of data */
};

#define trow(tab, ti)		((tab)->trow[ti])
#define mA(tab, vi, ti)	((tab)->trow[ti].mA[vi])
#define mV(tab, vi)		((tab)->vrow[0].mV[vi])
#define deg(tab, ti)		((tab)->trow[ti].deg)
#define vsize(tab)		((tab)->vsize)
#define tsize(tab)		((tab)->tsize)
#define tab_validate(tab)	((tab)->data != NULL)

static inline void spower_tab_construct(struct sptbl_t (*tab)[]
, struct spower_raw_t *raw)
{
	int i;
	struct sptbl_t *ptab = (struct sptbl_t *)tab;

	for (i = 0; i < raw->table_size; i++) {
		ptab->vsize = raw->vsize;
		ptab->tsize = raw->tsize;
		ptab->data = raw->table[i];
		ptab->vrow = (struct vrow_t *)ptab->data;
		ptab->trow = (struct trow_t *)(ptab->data + ptab->vsize);
		ptab++;
	}
}


#define MAX_TABLE_SIZE 5

#if 0 /* mt8163 defined at mt_static_power.h */
enum {
	MT_SPOWER_CA7 = 0,
	MT_SPOWER_CA17,
	MT_SPOWER_GPU,
	MT_SPOWER_MAX,
};
#endif

/**
 * @argument
 * dev: the enum of MT_SPOWER_xxx
 * voltage: the operating voltage
 * degree: the Tj
 * @return
 *  -1, means sptab is not yet ready.
 *  other value: the mW of leakage value.
 **/
extern int mt_spower_get_leakage(int dev, int voltage, int degree);

#endif


