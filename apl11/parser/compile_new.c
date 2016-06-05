/* Copyright U S WEST Advanced Technologies, Inc.
 * You may use, copy, modify and sublicense this Software
 * subject to the conditions expressed in the file "License".
 */

#include "utility.h"
#include "parser.h"
#include "y.tab.h"
#include "opt_codes.h"
#include "memory.h"

/*
 * s is statement
 * f is execution flag:
 *   0 compile immediate
 *   1 compile quad input
 *   2 function definition
 *   3 function prolog
 *   4 function epilog
 *   5 function body
 */
int     ilex[] =
{
   lex0, lex1, lex2, lex3, lex4, lex5
};


char *compile_new(int f)
{
   char *p, *q;

   iline = gsip->text;
   ccharp = oline;
   litflag = 0;
   nlexsym = ilex[f];
   context = nlexsym;
   if(yyparse()) {
      //print line and error pointer
      pline(gsip->text, iline-(gsip->text), lineNumber);	
      return(0);
   }
   *ccharp++ = END;
   iline = p = (char *) alloc(ccharp-oline);
   for(q=oline; q<ccharp;) *p++ = *q++;
   gsip->pcode=iline;
   return(iline);
}

