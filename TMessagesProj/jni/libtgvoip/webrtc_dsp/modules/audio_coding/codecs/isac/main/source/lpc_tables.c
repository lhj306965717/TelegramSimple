/*
 *  Copyright (c) 2012 The WebRTC project authors. All Rights Reserved.
 *
 *  Use of this source code is governed by a BSD-style license
 *  that can be found in the LICENSE file in the root of the source
 *  tree. An additional intellectual property rights grant can be found
 *  in the file PATENTS.  All contributing project authors may
 *  be found in the AUTHORS file in the root of the source tree.
 */

/* coding tables for the KLT coefficients */

#include "modules/audio_coding/codecs/isac/main/source/lpc_tables.h"
#include "modules/audio_coding/codecs/isac/main/source/settings.h"

/* cdf array for model indicator */
const uint16_t WebRtcIsac_kQKltModelCdf[4] = {
    0,  15434,  37548,  65535 };

/* pointer to cdf array for model indicator */
const uint16_t *WebRtcIsac_kQKltModelCdfPtr[1] = {
    WebRtcIsac_kQKltModelCdf };

/* initial cdf index for decoder of model indicator */
const uint16_t WebRtcIsac_kQKltModelInitIndex[1] = { 1 };

/* offset to go from rounded value to quantization index */
const short WebRtcIsac_kQKltQuantMinGain[12] = {
    3,  6,  4,  6,  6,  9,  5,  16,  11,  34, 32,  47 };


const short WebRtcIsac_kQKltQuantMinShape[108] = {
    0,  0,  0,  0,  0,  0,  0,  0,  0,  1,
    1,  1,  1,  1,  2,  2,  2,  3,  0,  0,
    0,  0,  1,  0,  0,  0,  0,  1,  1,  1,
    1,  1,  1,  2,  2,  3,  0,  0,  0,  0,
    1,  0,  1,  1,  1,  1,  1,  1,  1,  2,
    2,  4,  3,  5,  0,  0,  0,  0,  1,  1,
    1,  1,  1,  1,  2,  1,  2,  2,  3,  4,
    4,  7,  0,  0,  1,  1,  1,  1,  1,  1,
    1,  2,  3,  2,  3,  4,  4,  5,  7,  13,
    0,  1,  1,  2,  3,  2,  2,  2,  4,  4,
    5,  6,  7,  11,  9,  13,  12,  26 };

/* maximum quantization index */
const uint16_t WebRtcIsac_kQKltMaxIndGain[12] = {
    6,  12,  8,  14,  10,  19,  12,  31,  22,  56, 52,  138 };

const uint16_t WebRtcIsac_kQKltMaxIndShape[108] = {
    0,  0,  0,  0,  0,  0,  0,  0,  0,  1,
    2,  2,  2,  2,  4,  4,  5,  6,  0,  0,
    0,  0,  1,  0,  0,  0,  0,  1,  2,  2,
    2,  2,  3,  4,  5,  7,  0,  0,  0,  0,
    2,  0,  2,  2,  2,  2,  3,  2,  2,  4,
    4,  6,  6,  9,  0,  0,  0,  0,  2,  2,
    2,  2,  2,  2,  3,  2,  4,  4,  7,  7,
    9,  13,  0,  0,  2,  2,  2,  2,  2,  2,
    3,  4,  5,  4,  6,  8,  8,  10,  16,  25,
    0,  2,  2,  4,  5,  4,  4,  4,  7,  8,
    9,  10,  13,  19,  17,  23,  25,  49 };

/* index offset */
const uint16_t WebRtcIsac_kQKltOffsetGain[12] = {
    0,  7,  20,  29,  44,  55,  75,  88,  120,  143,  200,  253 };

const uint16_t WebRtcIsac_kQKltOffsetShape[108] = {
    0,  1,  2,  3,  4,  5,  6,  7,  8,  9,
    11,  14,  17,  20,  23,  28,  33,  39,  46,  47,
    48,  49,  50,  52,  53,  54,  55,  56,  58,  61,
    64,  67,  70,  74,  79,  85,  93,  94,  95,  96,
    97,  100,  101,  104,  107,  110,  113,  117,  120,  123,
    128,  133,  140,  147,  157,  158,  159,  160,  161,  164,
    167,  170,  173,  176,  179,  183,  186,  191,  196,  204,
    212,  222,  236,  237,  238,  241,  244,  247,  250,  253,
    256,  260,  265,  271,  276,  283,  292,  301,  312,  329,
    355,  356,  359,  362,  367,  373,  378,  383,  388,  396,
    405,  415,  426,  440,  460,  478,  502,  528 };

/* initial cdf index for KLT coefficients */
const uint16_t WebRtcIsac_kQKltInitIndexGain[12] = {
    3,  6,  4,  7,  5,  10,  6,  16,  11,  28, 26,  69};

const uint16_t WebRtcIsac_kQKltInitIndexShape[108] = {
    0,  0,  0,  0,  0,  0,  0,  0,  0,  1,
    1,  1,  1,  1,  2,  2,  3,  3,  0,  0,
    0,  0,  1,  0,  0,  0,  0,  1,  1,  1,
    1,  1,  2,  2,  3,  4,  0,  0,  0,  0,
    1,  0,  1,  1,  1,  1,  2,  1,  1,  2,
    2,  3,  3,  5,  0,  0,  0,  0,  1,  1,
    1,  1,  1,  1,  2,  1,  2,  2,  4,  4,
    5,  7,  0,  0,  1,  1,  1,  1,  1,  1,
    2,  2,  3,  2,  3,  4,  4,  5,  8,  13,
    0,  1,  1,  2,  3,  2,  2,  2,  4,  4,
    5,  5,  7,  10,  9,  12,  13,  25 };


/* quantizer representation levels */
const double WebRtcIsac_kQKltLevelsGain[392] = {
    -2.78127126, -1.76745590, -0.77913790, -0.00437329,  0.79961206,
    1.81775776, 2.81389782, -5.78753143, -4.88384084, -3.89320940,
    -2.88133610, -1.92859977, -0.86347396,  0.02003888,  0.86140400,
    1.89667156,  2.97134967,  3.98781964,  4.91727277,  5.82865898,
    -4.11195874, -2.80898424, -1.87547977, -0.80943825, -0.00679084,
    0.79573851,  1.83953397,  2.67586037,  3.76274082, -6.10933968,
    -4.93034581, -3.89281296, -2.91530625, -1.89684163, -0.85319130,
    -0.02275767,  0.86862017,  1.91578276,  2.96107339,  3.96543056,
    4.91369908,  5.91058154,  6.83848343,  8.07136925, -5.87470395,
    -4.84703049, -3.84284597, -2.86168446, -1.89290192, -0.82798145,
    -0.00080013,  0.82594974,  1.85754329,  2.88351798,  3.96172628,
    -8.85684885, -7.87387461, -6.97811862, -5.93256270, -4.94301439,
    -3.95513701, -2.96041544, -1.94031192, -0.87961478, -0.00456201,
    0.89911505,  1.91723376,  2.94011511,  3.93302540,  4.97990967,
    5.93133404,  7.02181199,  7.92407762,  8.80155440,  10.04665814,
    -4.82396678, -3.85612158, -2.89482244, -1.89558408, -0.90036978,
    -0.00677823,  0.90607989,  1.90937981,  2.91175777,  3.91637730,
    4.97565723,  5.84771228,  7.11145863, -16.07879840, -15.03776309,
    -13.93905670, -12.95671800, -11.89171202, -10.95820934, -9.95923714,
    -8.94357334, -7.99068299, -6.97481009, -5.94826231, -4.96673988,
    -3.97490466, -2.97846970, -1.95130435, -0.94215262, -0.01444043,
    0.96770704,  1.95848598,  2.94107862,  3.95666119,  4.97253085,
    5.97191122,  6.93277360,  7.96608727,  8.87958779,  10.00264269,
    10.86560820,  12.07449071,  13.04491775,  13.97507061,  14.91845261,
    -10.85696295, -9.83365357, -9.01245635, -7.95915145, -6.95625003,
    -5.95362618, -4.93468444, -3.98760978, -2.95044407, -1.97041277,
    -0.97701799, -0.00840234,  0.97834289,  1.98361415,  2.97802439,
    3.96415871,  4.95369042,  5.94101770,  6.92756798,  7.94063998,
    8.85951828,  9.97077022,  11.00068503, -33.92030406, -32.81426422,
    -32.00000000, -31.13243639, -30.11886909, -29.06017570, -28.12598824,
    -27.22045482, -25.81215858, -25.07849962, -23.93018013, -23.02097643,
    -21.89529725, -20.99091085, -19.98889048, -18.94327044, -17.96562071,
    -16.96126218, -15.95054062, -14.98516200, -13.97101012, -13.02106500,
    -11.98438006, -11.03216748, -9.95930286, -8.97043946, -7.98085082,
    -6.98360995, -5.98998802, -4.98668173, -4.00032906, -3.00420619,
    -1.98701132, -0.99324682, -0.00609324,  0.98297834,  1.99483076,
    3.00305044,  3.97142097,  4.97525759,  5.98612258,  6.97448236,
    7.97575900,  9.01086211,  9.98665542,  11.00541438,  11.98078628,
    12.92352471,  14.06849675,  14.99949430,  15.94904834,  16.97440321,
    18.04040916,  18.88987609,  20.05312391,  21.00000000,  21.79443341,
    -31.98578825, -31.00000000, -29.89060567, -28.98555686, -27.97114102,
    -26.84935410, -26.02402230, -24.94195278, -23.92336849, -22.95552382,
    -21.97932836, -20.96055470, -19.99649553, -19.03436122, -17.96706525,
    -17.01139515, -16.01363516, -14.99154248, -14.00298333, -12.99630613,
    -11.99955519, -10.99000421, -10.00819092, -8.99763648, -7.98431793,
    -7.01769025, -5.99604690, -4.99980697, -3.99334671, -3.01748192,
    -2.02051217, -1.00848371, -0.01942358,  1.00477757,  1.95477872,
    2.98593031,  3.98779079,  4.96862849,  6.02694771,  6.93983733,
    7.89874717,  8.99615862,  10.02367921,  10.96293452,  11.84351528,
    12.92207187,  13.85122329,  15.05146877,  15.99371264,  17.00000000,
    18.00000000,  19.00000000,  19.82763573, -47.00000000, -46.00000000,
    -44.87138498, -44.00000000, -43.00000000, -42.00000000, -41.00000000,
    -39.88966612, -38.98913239, -37.80306486, -37.23584325, -35.94200288,
    -34.99881301, -34.11361858, -33.06507360, -32.13129135, -30.90891364,
    -29.81511907, -28.99250380, -28.04535391, -26.99767800, -26.04418164,
    -24.95687851, -24.04865595, -23.03392645, -21.89366707, -20.93517364,
    -19.99388660, -18.91620943, -18.03749683, -16.99532379, -15.98683813,
    -15.06421479, -13.99359211, -12.99714098, -11.97022520, -10.98500279,
    -9.98834422, -8.95729330, -8.01232284, -7.00253661, -5.99681626,
    -5.01207817, -3.95914904, -3.01232178, -1.96615919, -0.97687670,
    0.01228030,  0.98412288,  2.01753544,  3.00580570,  3.97783510,
    4.98846894,  6.01321400,  7.00867732,  8.00416375,  9.01771966,
    9.98637729,  10.98255180,  11.99194163,  13.01807333,  14.00999545,
    15.00118556,  16.00089224,  17.00584148,  17.98251763,  18.99942091,
    19.96917690,  20.97839265,  21.98207297,  23.00171271,  23.99930737,
    24.99746061,  26.00936304,  26.98240132,  28.01126868,  29.01395915,
    29.98153507,  31.01376711,  31.99876818,  33.00475317,  33.99753994,
    34.99493913,  35.98933585,  36.95620160,  37.98428461,  38.99317544,
    40.01832073,  40.98048133,  41.95999283,  42.98232091,  43.96523612,
    44.99574268,  45.99524194,  47.05464025,  48.03821548,  48.99354366,
    49.96400411,  50.98017973,  51.95184408,  52.96291806,  54.00194392,
    54.96603783,  55.95623778,  57.03076595,  58.05889901,  58.99081551,
    59.97928121,  61.05071612,  62.03971580,  63.01286038,  64.01290338,
    65.02074503,  65.99454594,  67.00399425,  67.96571257,  68.95305727,
    69.92030664,  70.95594862,  71.98088567,  73.04764124,  74.00285480,
    75.02696330,  75.89837673,  76.93459997,  78.16266309,  78.83317543,
    80.00000000,  80.87251574,  82.09803524,  83.10671664,  84.00000000,
    84.77023523,  86.00000000,  87.00000000,  87.92946897,  88.69159118,
    90.00000000,  90.90535270 };

const double WebRtcIsac_kQKltLevelsShape[578] = {
    0.00032397,  0.00008053, -0.00061202, -0.00012620,  0.00030437,
    0.00054764, -0.00027902,  0.00069360,  0.00029449, -0.80219239,
    0.00091089, -0.74514927, -0.00094283,  0.64030631, -0.60509119,
    0.00035575,  0.61851665, -0.62129957,  0.00375219,  0.60054900,
    -0.61554359,  0.00054977,  0.63362016, -1.73118727, -0.65422341,
    0.00524568,  0.66165298,  1.76785515, -1.83182018, -0.65997434,
    -0.00011887,  0.67524299,  1.79933938, -1.76344480, -0.72547708,
    -0.00133017,  0.73104704,  1.75305377,  2.85164534, -2.80423916,
    -1.71959639, -0.75419722, -0.00329945,  0.77196760,  1.72211069,
    2.87339653,  0.00031089, -0.00015311,  0.00018201, -0.00035035,
    -0.77357251,  0.00154647, -0.00047625, -0.00045299,  0.00086590,
    0.00044762, -0.83383829,  0.00024787, -0.68526258, -0.00122472,
    0.64643255, -0.60904942, -0.00448987,  0.62309184, -0.59626442,
    -0.00574132,  0.62296546, -0.63222115,  0.00013441,  0.63609545,
    -0.66911055, -0.00369971,  0.66346095,  2.07281301, -1.77184694,
    -0.67640425, -0.00010145,  0.64818392,  1.74948973, -1.69420224,
    -0.71943894, -0.00004680,  0.75303493,  1.81075983,  2.80610041,
    -2.80005755, -1.79866753, -0.77409777, -0.00084220,  0.80141293,
    1.78291081,  2.73954236,  3.82994169,  0.00015140, -0.00012766,
    -0.00034241, -0.00119125, -0.76113497,  0.00069246,  0.76722027,
    0.00132862, -0.69107530,  0.00010656,  0.77061578, -0.78012970,
    0.00095947,  0.77828502, -0.64787758,  0.00217168,  0.63050167,
    -0.58601125,  0.00306596,  0.59466308, -0.58603410,  0.00059779,
    0.64257970,  1.76512766, -0.61193600, -0.00259517,  0.59767574,
    -0.61026273,  0.00315811,  0.61725479, -1.69169719, -0.65816029,
    0.00067575,  0.65576890,  2.00000000, -1.72689193, -0.69780808,
    -0.00040990,  0.70668487,  1.74198458, -3.79028154, -3.00000000,
    -1.73194459, -0.70179341, -0.00106695,  0.71302629,  1.76849782,
    -2.89332364, -1.78585007, -0.78731491, -0.00132610,  0.79692976,
    1.75247009,  2.97828682, -5.26238694, -3.69559829, -2.87286122,
    -1.84908818, -0.84434577, -0.01167975,  0.84641753,  1.84087672,
    2.87628156,  3.83556679, -0.00190204,  0.00092642,  0.00354385,
    -0.00012982, -0.67742785,  0.00229509,  0.64935672, -0.58444751,
    0.00470733,  0.57299534, -0.58456202, -0.00097715,  0.64593607,
    -0.64060330, -0.00638534,  0.59680157, -0.59287537,  0.00490772,
    0.58919707, -0.60306173, -0.00417464,  0.60562100, -1.75218757,
    -0.63018569, -0.00225922,  0.63863300, -0.63949939, -0.00126421,
    0.64268914, -1.75851182, -0.68318060,  0.00510418,  0.69049211,
    1.88178506, -1.71136148, -0.72710534, -0.00815559,  0.73412917,
    1.79996711, -2.77111145, -1.73940498, -0.78212945,  0.01074476,
    0.77688916,  1.76873972,  2.87281379,  3.77554698, -3.75832725,
    -2.95463235, -1.80451491, -0.80017226,  0.00149902,  0.80729206,
    1.78265046,  2.89391793, -3.78236148, -2.83640598, -1.82532067,
    -0.88844327, -0.00620952,  0.88208030,  1.85757631,  2.81712391,
    3.88430176,  5.16179367, -7.00000000, -5.93805408, -4.87172597,
    -3.87524433, -2.89399744, -1.92359563, -0.92136341, -0.00172725,
    0.93087018,  1.90528280,  2.89809686,  3.88085708,  4.89147740,
    5.89078692, -0.00239502,  0.00312564, -1.00000000,  0.00178325,
    1.00000000, -0.62198029,  0.00143254,  0.65344051, -0.59851220,
    -0.00676987,  0.61510140, -0.58894151,  0.00385055,  0.59794203,
    -0.59808568, -0.00038214,  0.57625703, -0.63009713, -0.01107985,
    0.61278758, -0.64206758, -0.00154369,  0.65480598,  1.80604162,
    -1.80909286, -0.67810514,  0.00205762,  0.68571097,  1.79453891,
    -3.22682422, -1.73808453, -0.71870305, -0.00738594,  0.71486172,
    1.73005326, -1.66891897, -0.73689615, -0.00616203,  0.74262409,
    1.73807899, -2.92417482, -1.73866741, -0.78133871,  0.00764425,
    0.80027264,  1.78668732,  2.74992588, -4.00000000, -2.75578740,
    -1.83697516, -0.83117035, -0.00355191,  0.83527172,  1.82814700,
    2.77377675,  3.80718693, -3.81667698, -2.83575471, -1.83372350,
    -0.86579471,  0.00547578,  0.87582281,  1.82858793,  2.87265007,
    3.91405377, -4.87521600, -3.78999094, -2.86437014, -1.86964365,
    -0.90618018,  0.00128243,  0.91497811,  1.87374952,  2.83199819,
    3.91519130,  4.76632822, -6.68713448, -6.01252467, -4.94587936,
    -3.88795368, -2.91299088, -1.92592211, -0.95504570, -0.00089980,
    0.94565200,  1.93239633,  2.91832808,  3.91363475,  4.88920034,
    5.96471415,  6.83905252,  7.86195009,  8.81571018,-12.96141759,
    -11.73039516,-10.96459719, -9.97382433, -9.04414433, -7.89460619,
    -6.96628608, -5.93236595, -4.93337924, -3.95479990, -2.96451499,
    -1.96635876, -0.97271229, -0.00402238,  0.98343930,  1.98348291,
    2.96641164,  3.95456471,  4.95517089,  5.98975714,  6.90322073,
    7.90468849,  8.85639467,  9.97255498, 10.79006309, 11.81988596,
    0.04950500, -1.00000000, -0.01226628,  1.00000000, -0.59479469,
    -0.10438305,  0.59822144, -2.00000000, -0.67109149, -0.09256692,
    0.65171621,  2.00000000, -3.00000000, -1.68391999, -0.76681039,
    -0.03354151,  0.71509146,  1.77615472, -2.00000000, -0.68661511,
    -0.02497881,  0.66478398,  2.00000000, -2.00000000, -0.67032784,
    -0.00920582,  0.64892756,  2.00000000, -2.00000000, -0.68561894,
    0.03641869,  0.73021611,  1.68293863, -4.00000000, -2.72024184,
    -1.80096059, -0.81696185,  0.03604685,  0.79232033,  1.70070730,
    3.00000000, -4.00000000, -2.71795670, -1.80482986, -0.86001162,
    0.03764903,  0.87723968,  1.79970771,  2.72685932,  3.67589143,
    -5.00000000, -4.00000000, -2.85492548, -1.78996365, -0.83250358,
    -0.01376828,  0.84195506,  1.78161105,  2.76754458,  4.00000000,
    -6.00000000, -5.00000000, -3.82268811, -2.77563624, -1.82608163,
    -0.86486114, -0.02671886,  0.86693165,  1.88422879,  2.86248347,
    3.95632216, -7.00000000, -6.00000000, -5.00000000, -3.77533988,
    -2.86391432, -1.87052039, -0.90513658,  0.06271236,  0.91083620,
    1.85734756,  2.86031688,  3.82019418,  4.94420394,  6.00000000,
    -11.00000000,-10.00000000, -9.00000000, -8.00000000, -6.91952415,
    -6.00000000, -4.92044374, -3.87845165, -2.87392362, -1.88413020,
    -0.91915740,  0.00318517,  0.91602800,  1.89664838,  2.88925058,
    3.84123856,  4.78988651,  5.94526812,  6.81953917,  8.00000000,
    -9.00000000, -8.00000000, -7.03319143, -5.94530963, -4.86669720,
    -3.92438007, -2.88620396, -1.92848070, -0.94365985,  0.01671855,
    0.97349410,  1.93419878,  2.89740109,  3.89662823,  4.83235583,
    5.88106535,  6.80328232,  8.00000000,-13.00000000,-12.00000000,
    -11.00000000,-10.00000000, -9.00000000, -7.86033489, -6.83344055,
    -5.89844215, -4.90811454, -3.94841298, -2.95820490, -1.98627966,
    -0.99161468, -0.02286136,  0.96055651,  1.95052433,  2.93969396,
    3.94304346,  4.88522624,  5.87434241,  6.78309433,  7.87244101,
    9.00000000, 10.00000000,-12.09117356,-11.00000000,-10.00000000,
    -8.84766108, -7.86934236, -6.98544896, -5.94233429, -4.95583292,
    -3.95575986, -2.97085529, -1.98955811, -0.99359873, -0.00485413,
    0.98298870,  1.98093258,  2.96430203,  3.95540216,  4.96915010,
    5.96775124,  6.99236918,  7.96503302,  8.99864542,  9.85857723,
    10.96541926, 11.91647197, 12.71060069,-26.00000000,-25.00000000,
    -24.00585596,-23.11642573,-22.14271284,-20.89800711,-19.87815799,
    -19.05036354,-17.88555651,-16.86471209,-15.97711073,-14.94012359,
    -14.02661226,-12.98243228,-11.97489256,-10.97402777, -9.96425624,
    -9.01085220, -7.97372506, -6.98795002, -5.97271328, -5.00191694,
    -3.98055849, -2.98458048, -1.99470442, -0.99656768, -0.00825666,
    1.00272004,  1.99922218,  2.99357669,  4.01407905,  5.01003897,
    5.98115528,  7.00018958,  8.00338125,  8.98981046,  9.98990318,
    10.96341479, 11.96866930, 12.99175139, 13.94580443, 14.95745083,
    15.98992869, 16.97484646, 17.99630043, 18.93396897, 19.88347741,
    20.96532482, 21.92191032, 23.22314702 };


/* cdf tables for quantizer indices */
const uint16_t WebRtcIsac_kQKltCdfGain[404] = {
    0,  13,  301,  3730,  61784,  65167,  65489,  65535,  0,  17,
    142,  314,  929,  2466,  7678,  56450,  63463,  64740,  65204,  65426,
    65527,  65535,  0,  8,  100,  724,  6301,  60105,  65125,  65510,
    65531,  65535,  0,  13,  117,  368,  1068,  3010,  11928,  53603,
    61177,  63404,  64505,  65108,  65422,  65502,  65531,  65535,  0,  4,
    17,  96,  410,  1859,  12125,  54361,  64103,  65305,  65497,  65535,
    0,  4,  88,  230,  469,  950,  1746,  3228,  6092,  16592,
    44756,  56848,  61256,  63308,  64325,  64920,  65309,  65460,  65502,
    65522, 65535,  0,  88,  352,  1675,  6339,  20749,  46686,  59284,  63525,
    64949,  65359,  65502,  65527,  65535,  0,  13,  38,  63,  117,
    234,  381,  641,  929,  1407,  2043,  2809,  4032,  5753,  8792,
    14407,  24308,  38941,  48947,  55403,  59293,  61411,  62688,  63630,
    64329, 64840,  65188,  65376,  65472,  65506,  65527,  65531,  65535,
    0,  8, 29,  75,  222,  615,  1327,  2801,  5623,  9931,  16094,  24966,
    34419, 43458,  50676,  56186,  60055,  62500,  63936,  64765,  65225,
    65435, 65514,  65535,  0,  8,  13,  15,  17,  21,  33,  59,
    71,  92,  151,  243,  360,  456,  674,  934,  1223,  1583,
    1989,  2504,  3031,  3617,  4354,  5154,  6163,  7411,  8780,  10747,
    12874,  15591,  18974,  23027,  27436,  32020,  36948,  41830,  46205,
    49797,  53042,  56094,  58418,  60360,  61763,  62818,  63559,  64103,
    64509,  64798,  65045,  65162,  65288,  65363,  65447,  65506,  65522,
    65531,  65533,  65535,  0,  4,  6,  25,  38,  71,  138,  264,  519,  808,
    1227,  1825,  2516,  3408,  4279,  5560,  7092,  9197,  11420,  14108,
    16947,  20300,  23926,  27459,  31164,  34827,  38575,  42178,  45540,
    48747,  51444,  54090,  56426,  58460,  60080,  61595,  62734,  63668,
    64275,  64673,  64936,  65112,  65217,  65334,  65426,  65464,  65477,
    65489,  65518,  65527,  65529,  65531,  65533,  65535,  0,  2,  4,  8,  10,
    12,  14,  16,  21,  33,  50,  71,  84,  92,  105,  138, 180,  255,  318,
    377,  435,  473,  511,  590,  682,  758,  913,  1097,  1256,  1449,  1671,
    1884,  2169,  2445,  2772,  3157,  3563,  3944,  4375,  4848,  5334,  5820,
    6448,  7101,  7716,  8378,  9102,  9956,  10752,  11648,  12707,  13670,
    14758,  15910,  17187,  18472,  19627,  20649,  21951,  23169,  24283,
    25552,  26862,  28227,  29391,  30764,  31882,  33213,  34432,  35600,
    36910,  38116,  39464,  40729,  41872,  43144,  44371,  45514,  46762,
    47813,  48968,  50069,  51032,  51974,  52908,  53737,  54603,  55445,
    56282,  56990,  57572,  58191,  58840,  59410,  59887,  60264,  60607,
    60946,  61269,  61516,  61771,  61960,  62198,  62408,  62558,  62776,
    62985,  63207,  63408,  63546,  63739,  63906,  64070,  64237,  64371,
    64551,  64677,  64836,  64999,  65095,  65213,  65284,  65338,  65380,
    65426,  65447,  65472,  65485,  65487,  65489,  65502,  65510,  65512,
    65514,  65516,  65518,  65522,  65531,  65533,  65535 };


const uint16_t WebRtcIsac_kQKltCdfShape[686] = {
    0,  65535,  0,  65535,  0,  65535,  0,  65535,  0,  65535,
    0,  65535,  0,  65535,  0,  65535,  0,  65535,  0,  4,
    65535,  0,  8,  65514,  65535,  0,  29,  65481,  65535,  0,
    121,  65439,  65535,  0,  239,  65284,  65535,  0,  8,  779,
    64999,  65527,  65535,  0,  8,  888,  64693,  65522,  65535,  0,
    29,  2604,  62843,  65497,  65531,  65535,  0,  25,  176,  4576,
    61164,  65275,  65527,  65535,  0,  65535,  0,  65535,  0,  65535,
    0,  65535,  0,  4,  65535,  0,  65535,  0,  65535,  0,
    65535,  0,  65535,  0,  4,  65535,  0,  33,  65502,  65535,
    0,  54,  65481,  65535,  0,  251,  65309,  65535,  0,  611,
    65074,  65535,  0,  1273,  64292,  65527,  65535,  0,  4,  1809,
    63940,  65518,  65535,  0,  88,  4392,  60603,  65426,  65531,  65535,
    0,  25,  419,  7046,  57756,  64961,  65514,  65531,  65535,  0,
    65535,  0,  65535,  0,  65535,  0,  65535,  0,  4,  65531,
    65535,  0,  65535,  0,  8,  65531,  65535,  0,  4,  65527,
    65535,  0,  17,  65510,  65535,  0,  42,  65481,  65535,  0,
    197,  65342,  65531,  65535,  0,  385,  65154,  65535,  0,  1005,
    64522,  65535,  0,  8,  1985,  63469,  65533,  65535,  0,  38,
    3119,  61884,  65514,  65535,  0,  4,  6,  67,  4961,  60804,
    65472,  65535,  0,  17,  565,  9182,  56538,  65087,  65514,  65535,
    0,  8,  63,  327,  2118,  14490,  52774,  63839,  65376,  65522,
    65535,  0,  65535,  0,  65535,  0,  65535,  0,  65535,  0,
    17,  65522,  65535,  0,  59,  65489,  65535,  0,  50,  65522,
    65535,  0,  54,  65489,  65535,  0,  310,  65179,  65535,  0,
    615,  64836,  65535,  0,  4,  1503,  63965,  65535,  0,  2780,
    63383,  65535,  0,  21,  3919,  61051,  65527,  65535,  0,  84,
    6674,  59929,  65435,  65535,  0,  4,  255,  7976,  55784,  65150,
    65518,  65531,  65535,  0,  4,  8,  582,  10726,  53465,  64949,
    65518,  65535,  0,  29,  339,  3006,  17555,  49517,  62956,  65200,
    65497,  65531,  65535,  0,  2,  33,  138,  565,  2324,  7670,
    22089,  45966,  58949,  63479,  64966,  65380,  65518,  65535,  0,  65535,
    0,  65535,  0,  2,  65533,  65535,  0,  46,  65514,  65535,
    0,  414,  65091,  65535,  0,  540,  64911,  65535,  0,  419,
    65162,  65535,  0,  976,  64790,  65535,  0,  2977,  62495,  65531,
    65535,  0,  4,  3852,  61034,  65527,  65535,  0,  4,  29,
    6021,  60243,  65468,  65535,  0,  84,  6711,  58066,  65418,  65535,
    0,  13,  281,  9550,  54917,  65125,  65506,  65535,  0,  2,
    63,  984,  12108,  52644,  64342,  65435,  65527,  65535,  0,  29,
    251,  2014,  14871,  47553,  62881,  65229,  65518,  65535,  0,  13,
    142,  749,  4220,  18497,  45200,  60913,  64823,  65426,  65527,  65535,
    0,  13,  71,  264,  1176,  3789,  10500,  24480,  43488,  56324,
    62315,  64493,  65242,  65464,  65514,  65522,  65531,  65535,  0,  4,
    13,  38,  109,  205,  448,  850,  1708,  3429,  6276,  11371,
    19221,  29734,  40955,  49391,  55411,  59460,  62102,  63793,  64656,
    65150, 65401,  65485,  65522,  65531,  65535,  0,  65535,  0,  2,  65533,
    65535,  0,  1160,  65476,  65535,  0,  2,  6640,  64763,  65533,
    65535,  0,  2,  38,  9923,  61009,  65527,  65535,  0,  2,
    4949,  63092,  65533,  65535,  0,  2,  3090,  63398,  65533,  65535,
    0,  2,  2520,  58744,  65510,  65535,  0,  2,  13,  544,
    8784,  51403,  65148,  65533,  65535,  0,  2,  25,  1017,  10412,
    43550,  63651,  65489,  65527,  65535,  0,  2,  4,  29,  783,
    13377,  52462,  64524,  65495,  65533,  65535,  0,  2,  4,  6,
    100,  1817,  18451,  52590,  63559,  65376,  65531,  65535,  0,  2,
    4,  6,  46,  385,  2562,  11225,  37416,  60488,  65026,  65487,
    65529,  65533,  65535,  0,  2,  4,  6,  8,  10,  12,
    42,  222,  971,  5221,  19811,  45048,  60312,  64486,  65294,  65474,
    65525,  65529,  65533,  65535,  0,  2,  4,  8,  71,  167,
    666,  2533,  7875,  19622,  38082,  54359,  62108,  64633,  65290,  65495,
    65529,  65533,  65535,  0,  2,  4,  6,  8,  10,  13,
    109,  586,  1930,  4949,  11600,  22641,  36125,  48312,  56899,  61495,
    63927,  64932,  65389,  65489,  65518,  65531,  65533,  65535,  0,  4,
    6,  8,  67,  209,  712,  1838,  4195,  8432,  14432,  22834,
    31723,  40523,  48139,  53929,  57865,  60657,  62403,  63584,  64363,
    64907, 65167,  65372,  65472,  65514,  65535,  0,  2,  4,  13,  25,
    42,  46,  50,  75,  113,  147,  281,  448,  657,  909,
    1185,  1591,  1976,  2600,  3676,  5317,  7398,  9914,  12941,  16169,
    19477,  22885,  26464,  29851,  33360,  37228,  41139,  44802,  48654,
    52058, 55181,  57676,  59581,  61022,  62190,  63107,  63676,  64199,
    64547,  64924, 65158,  65313,  65430,  65481,  65518,  65535 };


/* pointers to cdf tables for quantizer indices */
const uint16_t *WebRtcIsac_kQKltCdfPtrGain[12] = {
    WebRtcIsac_kQKltCdfGain +0 +0, WebRtcIsac_kQKltCdfGain +0 +8,
    WebRtcIsac_kQKltCdfGain +0 +22, WebRtcIsac_kQKltCdfGain +0 +32,
    WebRtcIsac_kQKltCdfGain +0 +48, WebRtcIsac_kQKltCdfGain +0 +60,
    WebRtcIsac_kQKltCdfGain +0 +81, WebRtcIsac_kQKltCdfGain +0 +95,
    WebRtcIsac_kQKltCdfGain +0 +128, WebRtcIsac_kQKltCdfGain +0 +152,
    WebRtcIsac_kQKltCdfGain +0 +210, WebRtcIsac_kQKltCdfGain +0 +264 };

const uint16_t *WebRtcIsac_kQKltCdfPtrShape[108] = {
    WebRtcIsac_kQKltCdfShape +0 +0, WebRtcIsac_kQKltCdfShape +0 +2,
    WebRtcIsac_kQKltCdfShape +0 +4, WebRtcIsac_kQKltCdfShape +0 +6,
    WebRtcIsac_kQKltCdfShape +0 +8, WebRtcIsac_kQKltCdfShape +0 +10,
    WebRtcIsac_kQKltCdfShape +0 +12, WebRtcIsac_kQKltCdfShape +0 +14,
    WebRtcIsac_kQKltCdfShape +0 +16, WebRtcIsac_kQKltCdfShape +0 +18,
    WebRtcIsac_kQKltCdfShape +0 +21, WebRtcIsac_kQKltCdfShape +0 +25,
    WebRtcIsac_kQKltCdfShape +0 +29, WebRtcIsac_kQKltCdfShape +0 +33,
    WebRtcIsac_kQKltCdfShape +0 +37, WebRtcIsac_kQKltCdfShape +0 +43,
    WebRtcIsac_kQKltCdfShape +0 +49, WebRtcIsac_kQKltCdfShape +0 +56,
    WebRtcIsac_kQKltCdfShape +0 +64, WebRtcIsac_kQKltCdfShape +0 +66,
    WebRtcIsac_kQKltCdfShape +0 +68, WebRtcIsac_kQKltCdfShape +0 +70,
    WebRtcIsac_kQKltCdfShape +0 +72, WebRtcIsac_kQKltCdfShape +0 +75,
    WebRtcIsac_kQKltCdfShape +0 +77, WebRtcIsac_kQKltCdfShape +0 +79,
    WebRtcIsac_kQKltCdfShape +0 +81, WebRtcIsac_kQKltCdfShape +0 +83,
    WebRtcIsac_kQKltCdfShape +0 +86, WebRtcIsac_kQKltCdfShape +0 +90,
    WebRtcIsac_kQKltCdfShape +0 +94, WebRtcIsac_kQKltCdfShape +0 +98,
    WebRtcIsac_kQKltCdfShape +0 +102, WebRtcIsac_kQKltCdfShape +0 +107,
    WebRtcIsac_kQKltCdfShape +0 +113, WebRtcIsac_kQKltCdfShape +0 +120,
    WebRtcIsac_kQKltCdfShape +0 +129, WebRtcIsac_kQKltCdfShape +0 +131,
    WebRtcIsac_kQKltCdfShape +0 +133, WebRtcIsac_kQKltCdfShape +0 +135,
    WebRtcIsac_kQKltCdfShape +0 +137, WebRtcIsac_kQKltCdfShape +0 +141,
    WebRtcIsac_kQKltCdfShape +0 +143, WebRtcIsac_kQKltCdfShape +0 +147,
    WebRtcIsac_kQKltCdfShape +0 +151, WebRtcIsac_kQKltCdfShape +0 +155,
    WebRtcIsac_kQKltCdfShape +0 +159, WebRtcIsac_kQKltCdfShape +0 +164,
    WebRtcIsac_kQKltCdfShape +0 +168, WebRtcIsac_kQKltCdfShape +0 +172,
    WebRtcIsac_kQKltCdfShape +0 +178, WebRtcIsac_kQKltCdfShape +0 +184,
    WebRtcIsac_kQKltCdfShape +0 +192, WebRtcIsac_kQKltCdfShape +0 +200,
    WebRtcIsac_kQKltCdfShape +0 +211, WebRtcIsac_kQKltCdfShape +0 +213,
    WebRtcIsac_kQKltCdfShape +0 +215, WebRtcIsac_kQKltCdfShape +0 +217,
    WebRtcIsac_kQKltCdfShape +0 +219, WebRtcIsac_kQKltCdfShape +0 +223,
    WebRtcIsac_kQKltCdfShape +0 +227, WebRtcIsac_kQKltCdfShape +0 +231,
    WebRtcIsac_kQKltCdfShape +0 +235, WebRtcIsac_kQKltCdfShape +0 +239,
    WebRtcIsac_kQKltCdfShape +0 +243, WebRtcIsac_kQKltCdfShape +0 +248,
    WebRtcIsac_kQKltCdfShape +0 +252, WebRtcIsac_kQKltCdfShape +0 +258,
    WebRtcIsac_kQKltCdfShape +0 +264, WebRtcIsac_kQKltCdfShape +0 +273,
    WebRtcIsac_kQKltCdfShape +0 +282, WebRtcIsac_kQKltCdfShape +0 +293,
    WebRtcIsac_kQKltCdfShape +0 +308, WebRtcIsac_kQKltCdfShape +0 +310,
    WebRtcIsac_kQKltCdfShape +0 +312, WebRtcIsac_kQKltCdfShape +0 +316,
    WebRtcIsac_kQKltCdfShape +0 +320, WebRtcIsac_kQKltCdfShape +0 +324,
    WebRtcIsac_kQKltCdfShape +0 +328, WebRtcIsac_kQKltCdfShape +0 +332,
    WebRtcIsac_kQKltCdfShape +0 +336, WebRtcIsac_kQKltCdfShape +0 +341,
    WebRtcIsac_kQKltCdfShape +0 +347, WebRtcIsac_kQKltCdfShape +0 +354,
    WebRtcIsac_kQKltCdfShape +0 +360, WebRtcIsac_kQKltCdfShape +0 +368,
    WebRtcIsac_kQKltCdfShape +0 +378, WebRtcIsac_kQKltCdfShape +0 +388,
    WebRtcIsac_kQKltCdfShape +0 +400, WebRtcIsac_kQKltCdfShape +0 +418,
    WebRtcIsac_kQKltCdfShape +0 +445, WebRtcIsac_kQKltCdfShape +0 +447,
    WebRtcIsac_kQKltCdfShape +0 +451, WebRtcIsac_kQKltCdfShape +0 +455,
    WebRtcIsac_kQKltCdfShape +0 +461, WebRtcIsac_kQKltCdfShape +0 +468,
    WebRtcIsac_kQKltCdfShape +0 +474, WebRtcIsac_kQKltCdfShape +0 +480,
    WebRtcIsac_kQKltCdfShape +0 +486, WebRtcIsac_kQKltCdfShape +0 +495,
    WebRtcIsac_kQKltCdfShape +0 +505, WebRtcIsac_kQKltCdfShape +0 +516,
    WebRtcIsac_kQKltCdfShape +0 +528, WebRtcIsac_kQKltCdfShape +0 +543,
    WebRtcIsac_kQKltCdfShape +0 +564, WebRtcIsac_kQKltCdfShape +0 +583,
    WebRtcIsac_kQKltCdfShape +0 +608, WebRtcIsac_kQKltCdfShape +0 +635 };


/* left KLT transforms */
const double WebRtcIsac_kKltT1Gain[4] = {
    -0.79742827,  0.60341375,  0.60341375,  0.79742827 };

const double WebRtcIsac_kKltT1Shape[324] = {
    0.00159597,  0.00049320,  0.00513821,  0.00021066,  0.01338581,
    -0.00422367, -0.00272072,  0.00935107,  0.02047622,  0.02691189,
    0.00478236,  0.03969702,  0.00886698,  0.04877604, -0.10898362,
    -0.05930891, -0.03415047,  0.98889721,  0.00293558, -0.00035282,
    0.01156321, -0.00195341, -0.00937631,  0.01052213, -0.02551163,
    0.01644059,  0.03189927,  0.07754773, -0.08742313, -0.03026338,
    0.05136248, -0.14395974,  0.17725040,  0.22664856,  0.93380230,
    0.07076411,  0.00557890, -0.00222834,  0.01377569,  0.01466808,
    0.02847361, -0.00603178,  0.02382480, -0.01210452,  0.03797267,
    -0.02371480,  0.11260335, -0.07366682,  0.00453436, -0.04136941,
    -0.07912843, -0.95031418,  0.25295337, -0.05302216, -0.00617554,
    -0.00044040, -0.00653778,  0.01097838,  0.01529174,  0.01374431,
    -0.00748512, -0.00020034,  0.02432713,  0.11101570, -0.08556891,
    0.09282249, -0.01029446,  0.67556443, -0.67454300,  0.06910063,
    0.20866865, -0.10318050,  0.00932175,  0.00524058,  0.00803610,
    -0.00594676, -0.01082578,  0.01069906,  0.00546768,  0.01565291,
    0.06816200,  0.10201227,  0.16812734,  0.22984074,  0.58213170,
    -0.54138651, -0.51379962,  0.06847390, -0.01920037, -0.04592324,
    -0.00467394,  0.00328858,  0.00377424, -0.00987448,  0.08222096,
    -0.00377301,  0.04551941, -0.02592517,  0.16317082,  0.13077530,
    0.22702921, -0.31215289, -0.69645962, -0.38047101, -0.39339411,
    0.11124777,  0.02508035, -0.00708074,  0.00400344,  0.00040331,
    0.01142402,  0.01725406,  0.01635170,  0.14285366,  0.03949233,
    -0.05905676,  0.05877154, -0.17497577, -0.32479440,  0.80754464,
    -0.38085603, -0.17055430, -0.03168622, -0.07531451,  0.02942002,
    -0.02148095, -0.00754114, -0.00322372,  0.00567812, -0.01701521,
    -0.12358320,  0.11473564,  0.09070136,  0.06533068, -0.22560802,
    0.19209022,  0.81605094,  0.36592275, -0.09919829,  0.16667122,
    0.16300725,  0.04803807,  0.06739263, -0.00156752, -0.01685302,
    -0.00905240, -0.02297836, -0.00469939,  0.06310613, -0.16391930,
    0.10919511,  0.12529293,  0.85581322, -0.32145522,  0.24539076,
    0.07181839,  0.07289591,  0.14066759,  0.10406711,  0.05815518,
    0.01072680, -0.00759339,  0.00053486, -0.00044865,  0.03407361,
    0.01645348,  0.08758579,  0.27722240,  0.53665485, -0.74853376,
    -0.01118192, -0.19805430,  0.06130619, -0.09675299,  0.08978480,
    0.03405255, -0.00706867,  0.05102045,  0.03250746,  0.01849966,
    -0.01216314, -0.01184187, -0.01579288,  0.00114807,  0.11376166,
    0.88342114, -0.36425379,  0.13863190,  0.12524180, -0.13553892,
    0.04715856, -0.12341103,  0.04531568,  0.01899360, -0.00206897,
    0.00567768, -0.01444163,  0.00411946, -0.00855896,  0.00381663,
    -0.01664861, -0.05534280,  0.21328278,  0.20161162,  0.72360394,
    0.59130708, -0.08043791,  0.08757349, -0.13893918, -0.05147377,
    0.02680690, -0.01144070,  0.00625162, -0.00634215, -0.01248947,
    -0.00329455, -0.00609625, -0.00136305, -0.05097048, -0.01029851,
    0.25065384, -0.16856837, -0.07123372,  0.15992623, -0.39487617,
    -0.79972301,  0.18118185, -0.04826639, -0.01805578, -0.02927253,
    -0.16400618,  0.07472763,  0.10376449,  0.01705406,  0.01065801,
    -0.01500498,  0.02039914,  0.37776349, -0.84484186,  0.10434286,
    0.15616990,  0.13474456, -0.00906238, -0.25238368, -0.03820885,
    -0.10650905, -0.03880833, -0.03660028, -0.09640894,  0.00583314,
    0.01922097,  0.01489911, -0.02431117, -0.09372217,  0.39404721,
    -0.84786223, -0.31277121,  0.03193850,  0.01974060,  0.01887901,
    0.00337911, -0.11359599, -0.02792521, -0.03220184, -0.01533311,
    0.00015962, -0.04225043, -0.00933965,  0.00675311,  0.00206060,
    0.15926771,  0.40199829, -0.80792558, -0.35591604, -0.17169764,
    0.02830436,  0.02459982, -0.03438589,  0.00718705, -0.01798329,
    -0.01594508, -0.00702430, -0.00952419, -0.00962701, -0.01307212,
    -0.01749740,  0.01299602,  0.00587270, -0.36103108, -0.82039266,
    -0.43092844, -0.08500097, -0.04361674, -0.00333482,  0.01250434,
    -0.02538295, -0.00921797,  0.01645071, -0.01400872,  0.00317607,
    0.00003277, -0.01617646, -0.00616863, -0.00882661,  0.00466157,
    0.00353237,  0.91803104, -0.39503305, -0.02048964,  0.00060125,
    0.01980634,  0.00300109,  0.00313880,  0.00657337,  0.00715163,
    0.00000261,  0.00854276, -0.00154825, -0.00516128,  0.00909527,
    0.00095609,  0.00701196, -0.00221867, -0.00156741 };

/* right KLT transforms */
const double WebRtcIsac_kKltT2Gain[36] = {
    0.14572837, -0.45446306,  0.61990621, -0.52197033,  0.32145074,
    -0.11026900, -0.20698282,  0.48962182, -0.27127933, -0.33627476,
    0.65094037, -0.32715751,  0.40262573, -0.47844405, -0.33876075,
    0.44130653,  0.37383966, -0.39964662, -0.51730480,  0.06611973,
    0.49030187,  0.47512886, -0.02141226, -0.51129451, -0.58578569,
    -0.39132064, -0.13187771,  0.15649421,  0.40735596,  0.54396897,
    0.40381276,  0.40904942,  0.41179766,  0.41167576,  0.40840251,
    0.40468132 };

const double WebRtcIsac_kKltT2Shape[36] = {
    0.13427386, -0.35132558,  0.52506528, -0.59419077,  0.45075085,
    -0.16312057,  0.29857439, -0.58660147,  0.34265431,  0.20879510,
    -0.56063262,  0.30238345,  0.43308283, -0.41186999, -0.35288681,
    0.42768996,  0.36094634, -0.45284910, -0.47116680,  0.02893449,
    0.54326135,  0.45249040, -0.06264420, -0.52283830,  0.57137758,
    0.44298139,  0.12617554, -0.20819946, -0.42324603, -0.48876443,
    0.39597050,  0.40713935,  0.41389880,  0.41512486,  0.41130400,
    0.40575001 };

/* means of log gains and LAR coefficients*/
const double WebRtcIsac_kLpcMeansGain[12] = {
    -6.86881911, -5.35075273, -6.86792680, -5.36200897, -6.86401538,
    -5.36921533, -6.86802969, -5.36893966, -6.86538097, -5.36315063,
    -6.85535304, -5.35155315 };

const double WebRtcIsac_kLpcMeansShape[108] = {
    -0.91232981,  0.26258634, -0.33716701,  0.08477430, -0.03378426,
    0.14423909,  0.07036185,  0.06155019,  0.01490385,  0.04138740,
    0.01427317,  0.01288970,  0.83872106,  0.25750199,  0.07988929,
    -0.01957923,  0.00831390,  0.01770300, -0.90957164,  0.25732216,
    -0.33385344,  0.08735740, -0.03715332,  0.14584917,  0.06998990,
    0.06131968,  0.01504379,  0.04067339,  0.01428039,  0.01406460,
    0.83846243,  0.26169862,  0.08109025, -0.01767055,  0.00970539,
    0.01954310, -0.90490803,  0.24656405, -0.33578607,  0.08843286,
    -0.03749139,  0.14443959,  0.07214669,  0.06170993,  0.01449947,
    0.04134309,  0.01314762,  0.01413471,  0.83895203,  0.26748062,
    0.08197507, -0.01781298,  0.00885967,  0.01922394, -0.90922472,
    0.24495889, -0.33921540,  0.08877169, -0.03581332,  0.14199172,
    0.07444032,  0.06185940,  0.01502054,  0.04185113,  0.01276579,
    0.01355457,  0.83645358,  0.26631720,  0.08119697, -0.01835449,
    0.00788512,  0.01846446, -0.90482253,  0.24658310, -0.34019734,
    0.08281090, -0.03486038,  0.14359248,  0.07401336,  0.06001471,
    0.01528421,  0.04254560,  0.01321472,  0.01240799,  0.83857127,
    0.26281654,  0.08174380, -0.02099842,  0.00755176,  0.01699448,
    -0.90132307,  0.25174308, -0.33838268,  0.07883863, -0.02877906,
    0.14105407,  0.07220290,  0.06000352,  0.01684879,  0.04226844,
    0.01331331,  0.01269244,  0.83832138,  0.25467485,  0.08118028,
    -0.02120528,  0.00747832,  0.01567212 };
