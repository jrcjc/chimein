/*
 * This file was generated automatically by ExtUtils::ParseXS version 2.18_02 from the
 * contents of Idle.xs. Do not edit this file, edit Idle.xs instead.
 *
 *	ANY CHANGES MADE HERE WILL BE LOST! 
 *
 */

#line 1 "Idle.xs"
#include "module.h"

#ifndef PERL_UNUSED_VAR
#  define PERL_UNUSED_VAR(var) if (0) var = var
#endif

#line 17 "Idle.c"

XS(XS_Purple__Idle_touch); /* prototype to pass -Wmissing-prototypes */
XS(XS_Purple__Idle_touch)
{
#ifdef dVAR
    dVAR; dXSARGS;
#else
    dXSARGS;
#endif
    if (items != 0)
       Perl_croak(aTHX_ "Usage: %s(%s)", "Purple::Idle::touch", "");
    PERL_UNUSED_VAR(cv); /* -W */
    {

	purple_idle_touch();
    }
    XSRETURN_EMPTY;
}


XS(XS_Purple__Idle_set); /* prototype to pass -Wmissing-prototypes */
XS(XS_Purple__Idle_set)
{
#ifdef dVAR
    dVAR; dXSARGS;
#else
    dXSARGS;
#endif
    if (items != 1)
       Perl_croak(aTHX_ "Usage: %s(%s)", "Purple::Idle::set", "time");
    PERL_UNUSED_VAR(cv); /* -W */
    {
	time_t	time = (time_t)SvIV(ST(0));

	purple_idle_set(time);
    }
    XSRETURN_EMPTY;
}

#ifdef __cplusplus
extern "C"
#endif
XS(boot_Purple__Idle); /* prototype to pass -Wmissing-prototypes */
XS(boot_Purple__Idle)
{
#ifdef dVAR
    dVAR; dXSARGS;
#else
    dXSARGS;
#endif
    char* file = __FILE__;

    PERL_UNUSED_VAR(cv); /* -W */
    PERL_UNUSED_VAR(items); /* -W */
    XS_VERSION_BOOTCHECK ;

        newXSproto("Purple::Idle::touch", XS_Purple__Idle_touch, file, "");
        newXSproto("Purple::Idle::set", XS_Purple__Idle_set, file, "$");
    if (PL_unitcheckav)
         call_list(PL_scopestack_ix, PL_unitcheckav);
    XSRETURN_YES;
}
