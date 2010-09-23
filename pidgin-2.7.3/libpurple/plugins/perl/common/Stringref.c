/*
 * This file was generated automatically by ExtUtils::ParseXS version 2.18_02 from the
 * contents of Stringref.xs. Do not edit this file, edit Stringref.xs instead.
 *
 *	ANY CHANGES MADE HERE WILL BE LOST! 
 *
 */

#line 1 "Stringref.xs"
#include "module.h"

#ifndef PERL_UNUSED_VAR
#  define PERL_UNUSED_VAR(var) if (0) var = var
#endif

#line 17 "Stringref.c"

XS(XS_Purple__Stringref_cmp); /* prototype to pass -Wmissing-prototypes */
XS(XS_Purple__Stringref_cmp)
{
#ifdef dVAR
    dVAR; dXSARGS;
#else
    dXSARGS;
#endif
    if (items != 2)
       Perl_croak(aTHX_ "Usage: %s(%s)", "Purple::Stringref::cmp", "s1, s2");
    PERL_UNUSED_VAR(cv); /* -W */
    {
	Purple__Stringref	s1 = purple_perl_ref_object(ST(0));
	Purple__Stringref	s2 = purple_perl_ref_object(ST(1));
	int	RETVAL;
	dXSTARG;

	RETVAL = purple_stringref_cmp(s1, s2);
	XSprePUSH; PUSHi((IV)RETVAL);
    }
    XSRETURN(1);
}


XS(XS_Purple__Stringref_len); /* prototype to pass -Wmissing-prototypes */
XS(XS_Purple__Stringref_len)
{
#ifdef dVAR
    dVAR; dXSARGS;
#else
    dXSARGS;
#endif
    if (items != 1)
       Perl_croak(aTHX_ "Usage: %s(%s)", "Purple::Stringref::len", "stringref");
    PERL_UNUSED_VAR(cv); /* -W */
    {
	Purple__Stringref	stringref = purple_perl_ref_object(ST(0));
	size_t	RETVAL;
	dXSTARG;

	RETVAL = purple_stringref_len(stringref);
	XSprePUSH; PUSHu((UV)RETVAL);
    }
    XSRETURN(1);
}


XS(XS_Purple__Stringref_new); /* prototype to pass -Wmissing-prototypes */
XS(XS_Purple__Stringref_new)
{
#ifdef dVAR
    dVAR; dXSARGS;
#else
    dXSARGS;
#endif
    if (items != 2)
       Perl_croak(aTHX_ "Usage: %s(%s)", "Purple::Stringref::new", "class, value");
    PERL_UNUSED_VAR(cv); /* -W */
    {
	const char *	value = (const char *)SvPV_nolen(ST(1));
	Purple__Stringref	RETVAL;

	RETVAL = purple_stringref_new(value);
	ST(0) = purple_perl_bless_object(RETVAL, "Purple::Stringref");

	sv_2mortal(ST(0));
    }
    XSRETURN(1);
}


XS(XS_Purple__Stringref_new_noref); /* prototype to pass -Wmissing-prototypes */
XS(XS_Purple__Stringref_new_noref)
{
#ifdef dVAR
    dVAR; dXSARGS;
#else
    dXSARGS;
#endif
    if (items != 2)
       Perl_croak(aTHX_ "Usage: %s(%s)", "Purple::Stringref::new_noref", "class, value");
    PERL_UNUSED_VAR(cv); /* -W */
    {
	const char *	value = (const char *)SvPV_nolen(ST(1));
	Purple__Stringref	RETVAL;

	RETVAL = purple_stringref_new_noref(value);
	ST(0) = purple_perl_bless_object(RETVAL, "Purple::Stringref");

	sv_2mortal(ST(0));
    }
    XSRETURN(1);
}


XS(XS_Purple__Stringref_ref); /* prototype to pass -Wmissing-prototypes */
XS(XS_Purple__Stringref_ref)
{
#ifdef dVAR
    dVAR; dXSARGS;
#else
    dXSARGS;
#endif
    if (items != 1)
       Perl_croak(aTHX_ "Usage: %s(%s)", "Purple::Stringref::ref", "stringref");
    PERL_UNUSED_VAR(cv); /* -W */
    {
	Purple__Stringref	stringref = purple_perl_ref_object(ST(0));
	Purple__Stringref	RETVAL;

	RETVAL = purple_stringref_ref(stringref);
	ST(0) = purple_perl_bless_object(RETVAL, "Purple::Stringref");

	sv_2mortal(ST(0));
    }
    XSRETURN(1);
}


XS(XS_Purple__Stringref_unref); /* prototype to pass -Wmissing-prototypes */
XS(XS_Purple__Stringref_unref)
{
#ifdef dVAR
    dVAR; dXSARGS;
#else
    dXSARGS;
#endif
    if (items != 1)
       Perl_croak(aTHX_ "Usage: %s(%s)", "Purple::Stringref::unref", "stringref");
    PERL_UNUSED_VAR(cv); /* -W */
    {
	Purple__Stringref	stringref = purple_perl_ref_object(ST(0));

	purple_stringref_unref(stringref);
    }
    XSRETURN_EMPTY;
}


XS(XS_Purple__Stringref_value); /* prototype to pass -Wmissing-prototypes */
XS(XS_Purple__Stringref_value)
{
#ifdef dVAR
    dVAR; dXSARGS;
#else
    dXSARGS;
#endif
    if (items != 1)
       Perl_croak(aTHX_ "Usage: %s(%s)", "Purple::Stringref::value", "stringref");
    PERL_UNUSED_VAR(cv); /* -W */
    {
	Purple__Stringref	stringref = purple_perl_ref_object(ST(0));
	const char *	RETVAL;
	dXSTARG;

	RETVAL = purple_stringref_value(stringref);
	sv_setpv(TARG, RETVAL); XSprePUSH; PUSHTARG;
    }
    XSRETURN(1);
}

#ifdef __cplusplus
extern "C"
#endif
XS(boot_Purple__Stringref); /* prototype to pass -Wmissing-prototypes */
XS(boot_Purple__Stringref)
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

        newXSproto("Purple::Stringref::cmp", XS_Purple__Stringref_cmp, file, "$$");
        newXSproto("Purple::Stringref::len", XS_Purple__Stringref_len, file, "$");
        newXSproto("Purple::Stringref::new", XS_Purple__Stringref_new, file, "$$");
        newXSproto("Purple::Stringref::new_noref", XS_Purple__Stringref_new_noref, file, "$$");
        newXSproto("Purple::Stringref::ref", XS_Purple__Stringref_ref, file, "$");
        newXSproto("Purple::Stringref::unref", XS_Purple__Stringref_unref, file, "$");
        newXSproto("Purple::Stringref::value", XS_Purple__Stringref_value, file, "$");
    if (PL_unitcheckav)
         call_list(PL_scopestack_ix, PL_unitcheckav);
    XSRETURN_YES;
}
