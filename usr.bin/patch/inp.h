/* $OpenBSD: inp.h,v 1.4 2003/07/21 14:00:41 deraadt Exp $ */

EXT LINENUM	input_lines INIT(0);		/* how long is input file in lines */
EXT LINENUM	last_frozen_line INIT(0);	/* how many input lines have been */
/* irretractibly output */

bool		rev_in_string(char *);
void		scan_input(char *);
bool		plan_a(char *);	/* returns false if insufficient memory */
void		plan_b(char *);
char		*ifetch(LINENUM, int);
