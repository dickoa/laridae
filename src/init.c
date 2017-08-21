#include <R.h>
#include <Rinternals.h>
#include <stdlib.h> // for NULL
#include <R_ext/Rdynload.h>

/* FIXME: 
   Check these declarations against the C/Fortran source code.
*/

/* .Call calls */
extern SEXP _cgalgris_poly_triangulation_xy(SEXP, SEXP);
extern SEXP _cgalgris_poly_triangulation_xylist(SEXP, SEXP, SEXP);
extern SEXP _cgalgris_poly_triangulation0();
extern SEXP _cgalgris_tri_xy(SEXP, SEXP);
extern SEXP _cgalgris_tri_xy1(SEXP, SEXP);
extern SEXP _cgalgris_tri_xy2(SEXP, SEXP);

static const R_CallMethodDef CallEntries[] = {
    {"_cgalgris_poly_triangulation_xy",     (DL_FUNC) &_cgalgris_poly_triangulation_xy,     2},
    {"_cgalgris_poly_triangulation_xylist", (DL_FUNC) &_cgalgris_poly_triangulation_xylist, 3},
    {"_cgalgris_poly_triangulation0",       (DL_FUNC) &_cgalgris_poly_triangulation0,       0},
    {"_cgalgris_tri_xy",                    (DL_FUNC) &_cgalgris_tri_xy,                    2},
    {"_cgalgris_tri_xy1",                   (DL_FUNC) &_cgalgris_tri_xy1,                   2},
    {"_cgalgris_tri_xy2",                   (DL_FUNC) &_cgalgris_tri_xy2,                   2},
    {NULL, NULL, 0}
};

void R_init_cgalgris(DllInfo *dll)
{
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
