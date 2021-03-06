/*
 * This file was generated automatically by ExtUtils::ParseXS version 2.18_02 from the
 * contents of Debug.xs. Do not edit this file, edit Debug.xs instead.
 *
 *	ANY CHANGES MADE HERE WILL BE LOST! 
 *
 */

#line 1 "Debug.xs"
#include "module.h"

#ifndef PERL_UNUSED_VAR
#  define PERL_UNUSED_VAR(var) if (0) var = var
#endif

#line 17 "Debug.c"

XS(XS_Purple__Debug_purple_debug); /* prototype to pass -Wmissing-prototypes */
XS(XS_Purple__Debug_purple_debug)
{
#ifdef dVAR
    dVAR; dXSARGS;
#else
    dXSARGS;
#endif
    if (items != 3)
       Perl_croak(aTHX_ "Usage: %s(%s)", "Purple::Debug::purple_debug", "level, category, string");
    PERL_UNUSED_VAR(cv); /* -W */
    {
	Purple__DebugLevel	level = (Purple__DebugLevel)SvIV(ST(0));
	const char *	category = (const char *)SvPV_nolen(ST(1));
	const char *	string = (const char *)SvPV_nolen(ST(2));
#line 30 "Debug.xs"
	purple_debug(level, category, "%s", string);
#line 36 "Debug.c"
    }
    XSRETURN_EMPTY;
}


XS(XS_Purple__Debug_misc); /* prototype to pass -Wmissing-prototypes */
XS(XS_Purple__Debug_misc)
{
#ifdef dVAR
    dVAR; dXSARGS;
#else
    dXSARGS;
#endif
    if (items != 2)
       Perl_croak(aTHX_ "Usage: %s(%s)", "Purple::Debug::misc", "category, string");
    PERL_UNUSED_VAR(cv); /* -W */
    {
	const char *	category = (const char *)SvPV_nolen(ST(0));
	const char *	string = (const char *)SvPV_nolen(ST(1));
#line 37 "Debug.xs"
	purple_debug_misc(category, "%s", string);
#line 58 "Debug.c"
    }
    XSRETURN_EMPTY;
}


XS(XS_Purple__Debug_info); /* prototype to pass -Wmissing-prototypes */
XS(XS_Purple__Debug_info)
{
#ifdef dVAR
    dVAR; dXSARGS;
#else
    dXSARGS;
#endif
    if (items != 2)
       Perl_croak(aTHX_ "Usage: %s(%s)", "Purple::Debug::info", "category, string");
    PERL_UNUSED_VAR(cv); /* -W */
    {
	const char *	category = (const char *)SvPV_nolen(ST(0));
	const char *	string = (const char *)SvPV_nolen(ST(1));
#line 44 "Debug.xs"
	purple_debug_info(category, "%s", string);
#line 80 "Debug.c"
    }
    XSRETURN_EMPTY;
}


XS(XS_Purple__Debug_warning); /* prototype to pass -Wmissing-prototypes */
XS(XS_Purple__Debug_warning)
{
#ifdef dVAR
    dVAR; dXSARGS;
#else
    dXSARGS;
#endif
    if (items != 2)
       Perl_croak(aTHX_ "Usage: %s(%s)", "Purple::Debug::warning", "category, string");
    PERL_UNUSED_VAR(cv); /* -W */
    {
	const char *	category = (const char *)SvPV_nolen(ST(0));
	const char *	string = (const char *)SvPV_nolen(ST(1));
#line 51 "Debug.xs"
	purple_debug_warning(category, "%s", string);
#line 102 "Debug.c"
    }
    XSRETURN_EMPTY;
}


XS(XS_Purple__Debug_error); /* prototype to pass -Wmissing-prototypes */
XS(XS_Purple__Debug_error)
{
#ifdef dVAR
    dVAR; dXSARGS;
#else
    dXSARGS;
#endif
    if (items != 2)
       Perl_croak(aTHX_ "Usage: %s(%s)", "Purple::Debug::error", "category, string");
    PERL_UNUSED_VAR(cv); /* -W */
    {
	const char *	category = (const char *)SvPV_nolen(ST(0));
	const char *	string = (const char *)SvPV_nolen(ST(1));
#line 58 "Debug.xs"
	purple_debug_error(category, "%s", string);
#line 124 "Debug.c"
    }
    XSRETURN_EMPTY;
}


XS(XS_Purple__Debug_fatal); /* prototype to pass -Wmissing-prototypes */
XS(XS_Purple__Debug_fatal)
{
#ifdef dVAR
    dVAR; dXSARGS;
#else
    dXSARGS;
#endif
    if (items != 2)
       Perl_croak(aTHX_ "Usage: %s(%s)", "Purple::Debug::fatal", "category, string");
    PERL_UNUSED_VAR(cv); /* -W */
    {
	const char *	category = (const char *)SvPV_nolen(ST(0));
	const char *	string = (const char *)SvPV_nolen(ST(1));
#line 65 "Debug.xs"
	purple_debug_fatal(category, "%s", string);
#line 146 "Debug.c"
    }
    XSRETURN_EMPTY;
}


XS(XS_Purple__Debug_set_enabled); /* prototype to pass -Wmissing-prototypes */
XS(XS_Purple__Debug_set_enabled)
{
#ifdef dVAR
    dVAR; dXSARGS;
#else
    dXSARGS;
#endif
    if (items != 1)
       Perl_croak(aTHX_ "Usage: %s(%s)", "Purple::Debug::set_enabled", "enabled");
    PERL_UNUSED_VAR(cv); /* -W */
    {
	gboolean	enabled = (bool)SvTRUE(ST(0));

	purple_debug_set_enabled(enabled);
    }
    XSRETURN_EMPTY;
}


XS(XS_Purple__Debug_is_enabled); /* prototype to pass -Wmissing-prototypes */
XS(XS_Purple__Debug_is_enabled)
{
#ifdef dVAR
    dVAR; dXSARGS;
#else
    dXSARGS;
#endif
    if (items != 0)
       Perl_croak(aTHX_ "Usage: %s(%s)", "Purple::Debug::is_enabled", "");
    PERL_UNUSED_VAR(cv); /* -W */
    {
	gboolean	RETVAL;

	RETVAL = purple_debug_is_enabled();
	ST(0) = boolSV(RETVAL);
	sv_2mortal(ST(0));
    }
    XSRETURN(1);
}

#ifdef __cplusplus
extern "C"
#endif
XS(boot_Purple__Debug); /* prototype to pass -Wmissing-prototypes */
XS(boot_Purple__Debug)
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

        newXSproto("Purple::Debug::purple_debug", XS_Purple__Debug_purple_debug, file, "$$$");
        newXSproto("Purple::Debug::misc", XS_Purple__Debug_misc, file, "$$");
        newXSproto("Purple::Debug::info", XS_Purple__Debug_info, file, "$$");
        newXSproto("Purple::Debug::warning", XS_Purple__Debug_warning, file, "$$");
        newXSproto("Purple::Debug::error", XS_Purple__Debug_error, file, "$$");
        newXSproto("Purple::Debug::fatal", XS_Purple__Debug_fatal, file, "$$");
        newXSproto("Purple::Debug::set_enabled", XS_Purple__Debug_set_enabled, file, "$");
        newXSproto("Purple::Debug::is_enabled", XS_Purple__Debug_is_enabled, file, "");

    /* Initialisation Section */

#line 7 "Debug.xs"
{
	HV *stash = gv_stashpv("Purple::Debug", 1);

	static const constiv *civ, const_iv[] = {
#define const_iv(name) {#name, (IV)PURPLE_DEBUG_##name}
		const_iv(ALL),
		const_iv(MISC),
		const_iv(INFO),
		const_iv(WARNING),
		const_iv(ERROR),
		const_iv(FATAL),
	};

	for (civ = const_iv + sizeof(const_iv) / sizeof(const_iv[0]); civ-- > const_iv; )
		newCONSTSUB(stash, (char *)civ->name, newSViv(civ->iv));
}

#line 239 "Debug.c"

    /* End of Initialisation Section */

    if (PL_unitcheckav)
         call_list(PL_scopestack_ix, PL_unitcheckav);
    XSRETURN_YES;
}

