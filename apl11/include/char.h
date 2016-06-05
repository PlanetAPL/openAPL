/* This file is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; version 2 dated June, 1991.
 */

/* Table of special APL characters 
 * This one file is used to define the character mapping.
 *
 * All characters have a character constant C_XXX
 * used by parser/table_oper.c
 * Some characters also have a string constant S_XXX
 * because the functions that use them need string expressions
 *
 * In order to see the characters within the comment fields
 * set the console to apl character mode and use an 8 bit editor.
 */

#define C_LEFTTACK          ((unsigned char) 128)    /* � */
#define C_RIGHTTACK         ((unsigned char) 129)    /* � */
#define C_LEFTSHOE          ((unsigned char) 130)    /* � */
#define C_RIGHTSHOE         ((unsigned char) 131)    /* � */
#define C_IBEAM             ((unsigned char) 132)    /* � */
#define C_RIGHTARROW        ((unsigned char) 133)    /* � */
#define S_RIGHTARROW        "�"
#define C_NOTEQUAL          ((unsigned char) 134)    /* � */
        /*                  ((unsigned char) 135)            */
        /*                  ((unsigned char) 136)            */
#define C_CIRCLESTAR        ((unsigned char) 137)    /* � */
        /*                  ((unsigned char) 138)            */
#define C_DOWNARROW         ((unsigned char) 139)    /* � */
#define C_UPARROW           ((unsigned char) 140)    /* � */
#define C_UPSTILE           ((unsigned char) 141)    /* � */
        /*                  ((unsigned char) 142)            */
#define C_DOWNSTILE         ((unsigned char) 143)    /* � */
#define C_LEFTARROW         ((unsigned char) 144)    /* � */
#define S_LEFTARROW         "�"
#define C_DELTA             ((unsigned char) 145)    /* � */
#define C_MULTIPLY          ((unsigned char) 146)    /* � */
#define C_DELTASTILE        ((unsigned char) 147)    /* � */
        /*                  ((unsigned char) 148)            */
#define    C_QUAD           ((unsigned char) 149)    /* � */
#define S_QUAD              "�"
#define C_DELTILDE          ((unsigned char) 150)    /* � */
#define C_QUOTEQUAD         ((unsigned char) 151)    /* � */
#define S_QUOTEQUAD         "�"
#define C_QUADDIVIDE        ((unsigned char) 152)    /* � */
        /*                  ((unsigned char) 153)            */
#define C_DIERESIS          ((unsigned char) 154)    /* � */
#define C_CENT              ((unsigned char) 155)    /* � the console treats this as ESC */
        /*                  ((unsigned char) 156) reserved - sterling */
#define C_DELSTILE          ((unsigned char) 157)    /* � */
#define C_COMMABAR          ((unsigned char) 158)    /* � */
#define C_DIERESISTILDE     ((unsigned char) 159)    /* � */
        /*                  ((unsigned char) 160)
                            ((unsigned char) 161)
                            ((unsigned char) 162)
                            ((unsigned char) 163)
                            ((unsigned char) 164)
                            ((unsigned char) 165)            */
#define C_UPSHOEJOT         ((unsigned char) 166)    /* � */
#define C_SLOPEBAR          ((unsigned char) 167)    /* � */
#define C_DIAMOND           ((unsigned char) 168)    /* � */
        /*                  ((unsigned char) 169)
         * to               ((unsigned char) 175)            */
        /*                  ((unsigned char) 176)
         * to               ((unsigned char) 178) grey scales */
        /*                  ((unsigned char) 179)
         * to               ((unsigned char) 223) line draw  */
#define C_ALPHA             ((unsigned char) 224)    /* � */
#define C_BETA              ((unsigned char) 225)    /* � */
#define C_IOTA              ((unsigned char) 226)    /* � */
        /*                  ((unsigned char) 227)            */
        /*                  ((unsigned char) 228)            */
#define C_NOR               ((unsigned char) 229)    /* � */
#define C_UPTACK            ((unsigned char) 230)    /* � */
#define C_DOWNTACK          ((unsigned char) 231)    /* � */
#define C_CIRCLESTILE       ((unsigned char) 232)    /* � */
#define C_CIRCLEBAR         ((unsigned char) 233)    /* � */
#define C_NAND              ((unsigned char) 234)    /* � */
#define C_SLASHBAR          ((unsigned char) 235)    /* � */
#define C_DEL               ((unsigned char) 236)    /* � */
#define C_CIRCLESLOPE       ((unsigned char) 237)    /* � */
#define C_EPSILON           ((unsigned char) 238)    /* � */
#define C_UPSHOE            ((unsigned char) 239)    /* � */
#define C_EQUALUNDERBAR     ((unsigned char) 240)    /* � */
#define C_DELTAUNDERBAR     ((unsigned char) 241)    /* � */
#define C_GRATOREQUAL       ((unsigned char) 242)    /* � */
#define C_LESSOREQUAL       ((unsigned char) 243)    /* � */
#define C_DOWNTACKJOT       ((unsigned char) 244)    /* � */
#define C_UPTACKJOT         ((unsigned char) 245)    /* � */
#define C_DIVIDE            ((unsigned char) 246)    /* � */
#define C_OMEGA             ((unsigned char) 247)    /* � */
#define C_JOT               ((unsigned char) 248)    /* � */
#define C_CIRCLE            ((unsigned char) 249)    /* � */
#define C_OR                ((unsigned char) 250)    /* � */
#define C_RHO               ((unsigned char) 251)    /* � */
#define S_RHO               "�"
#define C_DOWNSHOE          ((unsigned char) 252)    /* � */
#define C_OVERBAR           ((unsigned char) 253)    /* � */
#define C_STILE             ((unsigned char) 254)    /* � */
