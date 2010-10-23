/*
 * This file was generated automatically by ExtUtils::ParseXS version 2.18_02 from the
 * contents of AccountOpts.xs. Do not edit this file, edit AccountOpts.xs instead.
 *
 *	ANY CHANGES MADE HERE WILL BE LOST! 
 *
 */

#line 1 "AccountOpts.xs"
#include "module.h"

#ifndef PERL_UNUSED_VAR
#  define PERL_UNUSED_VAR(var) if (0) var = var
#endif

#line 17 "AccountOpts.c"

XS(XS_Purple__Account__Option_destroy); /* prototype to pass -Wmissing-prototypes */
XS(XS_Purple__Account__Option_destroy)
{
#ifdef dVAR
    dVAR; dXSARGS;
#else
    dXSARGS;
#endif
    if (items != 1)
       Perl_croak(aTHX_ "Usage: %s(%s)", "Purple::Account::Option::destroy", "option");
    PERL_UNUSED_VAR(cv); /* -W */
    {
	Purple__Account__Option	option = purple_perl_ref_object(ST(0));

	purple_account_option_destroy(option);
    }
    XSRETURN_EMPTY;
}


XS(XS_Purple__Account__Option_get_default_string); /* prototype to pass -Wmissing-prototypes */
XS(XS_Purple__Account__Option_get_default_string)
{
#ifdef dVAR
    dVAR; dXSARGS;
#else
    dXSARGS;
#endif
    if (items != 1)
       Perl_croak(aTHX_ "Usage: %s(%s)", "Purple::Account::Option::get_default_string", "option");
    PERL_UNUSED_VAR(cv); /* -W */
    {
	Purple__Account__Option	option = purple_perl_ref_object(ST(0));
	const char *	RETVAL;
	dXSTARG;

	RETVAL = purple_account_option_get_default_string(option);
	sv_setpv(TARG, RETVAL); XSprePUSH; PUSHTARG;
    }
    XSRETURN(1);
}


XS(XS_Purple__Account__Option_add_list_item); /* prototype to pass -Wmissing-prototypes */
XS(XS_Purple__Account__Option_add_list_item)
{
#ifdef dVAR
    dVAR; dXSARGS;
#else
    dXSARGS;
#endif
    if (items != 3)
       Perl_croak(aTHX_ "Usage: %s(%s)", "Purple::Account::Option::add_list_item", "option, key, value");
    PERL_UNUSED_VAR(cv); /* -W */
    {
	Purple__Account__Option	option = purple_perl_ref_object(ST(0));
	const char *	key = (const char *)SvPV_nolen(ST(1));
	const char *	value = (const char *)SvPV_nolen(ST(2));

	purple_account_option_add_list_item(option, key, value);
    }
    XSRETURN_EMPTY;
}


XS(XS_Purple__Account__Option_set_default_string); /* prototype to pass -Wmissing-prototypes */
XS(XS_Purple__Account__Option_set_default_string)
{
#ifdef dVAR
    dVAR; dXSARGS;
#else
    dXSARGS;
#endif
    if (items != 2)
       Perl_croak(aTHX_ "Usage: %s(%s)", "Purple::Account::Option::set_default_string", "option, value");
    PERL_UNUSED_VAR(cv); /* -W */
    {
	Purple__Account__Option	option = purple_perl_ref_object(ST(0));
	const char *	value = (const char *)SvPV_nolen(ST(1));

	purple_account_option_set_default_string(option, value);
    }
    XSRETURN_EMPTY;
}


XS(XS_Purple__Account__Option_set_default_int); /* prototype to pass -Wmissing-prototypes */
XS(XS_Purple__Account__Option_set_default_int)
{
#ifdef dVAR
    dVAR; dXSARGS;
#else
    dXSARGS;
#endif
    if (items != 2)
       Perl_croak(aTHX_ "Usage: %s(%s)", "Purple::Account::Option::set_default_int", "option, value");
    PERL_UNUSED_VAR(cv); /* -W */
    {
	Purple__Account__Option	option = purple_perl_ref_object(ST(0));
	int	value = (int)SvIV(ST(1));

	purple_account_option_set_default_int(option, value);
    }
    XSRETURN_EMPTY;
}


XS(XS_Purple__Account__Option_set_default_bool); /* prototype to pass -Wmissing-prototypes */
XS(XS_Purple__Account__Option_set_default_bool)
{
#ifdef dVAR
    dVAR; dXSARGS;
#else
    dXSARGS;
#endif
    if (items != 2)
       Perl_croak(aTHX_ "Usage: %s(%s)", "Purple::Account::Option::set_default_bool", "option, value");
    PERL_UNUSED_VAR(cv); /* -W */
    {
	Purple__Account__Option	option = purple_perl_ref_object(ST(0));
	gboolean	value = (bool)SvTRUE(ST(1));

	purple_account_option_set_default_bool(option, value);
    }
    XSRETURN_EMPTY;
}


XS(XS_Purple__Account__Option_list_new); /* prototype to pass -Wmissing-prototypes */
XS(XS_Purple__Account__Option_list_new)
{
#ifdef dVAR
    dVAR; dXSARGS;
#else
    dXSARGS;
#endif
    if (items != 4)
       Perl_croak(aTHX_ "Usage: %s(%s)", "Purple::Account::Option::list_new", "class, text, pref_name, values");
    PERL_UNUSED_VAR(cv); /* -W */
    {
	const char *	text = (const char *)SvPV_nolen(ST(1));
	const char *	pref_name = (const char *)SvPV_nolen(ST(2));
	SV *	values = ST(3);
#line 41 "AccountOpts.xs"
	GList *t_GL;
	int i, t_len;
#line 165 "AccountOpts.c"
	Purple__Account__Option	RETVAL;
#line 44 "AccountOpts.xs"
	t_GL = NULL;
	t_len = av_len((AV *)SvRV(values));

	for (i = 0; i <= t_len; i++)
		t_GL = g_list_append(t_GL, SvPVutf8_nolen(*av_fetch((AV *)SvRV(values), i, 0)));

	RETVAL  = purple_account_option_list_new(text, pref_name, t_GL);
#line 175 "AccountOpts.c"
	ST(0) = purple_perl_bless_object(RETVAL, "Purple::Account::Option");

	sv_2mortal(ST(0));
    }
    XSRETURN(1);
}


XS(XS_Purple__Account__Option_string_new); /* prototype to pass -Wmissing-prototypes */
XS(XS_Purple__Account__Option_string_new)
{
#ifdef dVAR
    dVAR; dXSARGS;
#else
    dXSARGS;
#endif
    if (items != 4)
       Perl_croak(aTHX_ "Usage: %s(%s)", "Purple::Account::Option::string_new", "class, text, pref_name, default_value");
    PERL_UNUSED_VAR(cv); /* -W */
    {
	const char *	text = (const char *)SvPV_nolen(ST(1));
	const char *	pref_name = (const char *)SvPV_nolen(ST(2));
	const char *	default_value = (const char *)SvPV_nolen(ST(3));
	Purple__Account__Option	RETVAL;

	RETVAL = purple_account_option_string_new(text, pref_name, default_value);
	ST(0) = purple_perl_bless_object(RETVAL, "Purple::Account::Option");

	sv_2mortal(ST(0));
    }
    XSRETURN(1);
}


XS(XS_Purple__Account__Option_int_new); /* prototype to pass -Wmissing-prototypes */
XS(XS_Purple__Account__Option_int_new)
{
#ifdef dVAR
    dVAR; dXSARGS;
#else
    dXSARGS;
#endif
    if (items != 4)
       Perl_croak(aTHX_ "Usage: %s(%s)", "Purple::Account::Option::int_new", "class, text, pref_name, default_value");
    PERL_UNUSED_VAR(cv); /* -W */
    {
	const char *	text = (const char *)SvPV_nolen(ST(1));
	const char *	pref_name = (const char *)SvPV_nolen(ST(2));
	gboolean	default_value = (bool)SvTRUE(ST(3));
	Purple__Account__Option	RETVAL;

	RETVAL = purple_account_option_int_new(text, pref_name, default_value);
	ST(0) = purple_perl_bless_object(RETVAL, "Purple::Account::Option");

	sv_2mortal(ST(0));
    }
    XSRETURN(1);
}


XS(XS_Purple__Account__Option_bool_new); /* prototype to pass -Wmissing-prototypes */
XS(XS_Purple__Account__Option_bool_new)
{
#ifdef dVAR
    dVAR; dXSARGS;
#else
    dXSARGS;
#endif
    if (items != 4)
       Perl_croak(aTHX_ "Usage: %s(%s)", "Purple::Account::Option::bool_new", "class, text, pref_name, default_value");
    PERL_UNUSED_VAR(cv); /* -W */
    {
	const char *	text = (const char *)SvPV_nolen(ST(1));
	const char *	pref_name = (const char *)SvPV_nolen(ST(2));
	gboolean	default_value = (bool)SvTRUE(ST(3));
	Purple__Account__Option	RETVAL;

	RETVAL = purple_account_option_bool_new(text, pref_name, default_value);
	ST(0) = purple_perl_bless_object(RETVAL, "Purple::Account::Option");

	sv_2mortal(ST(0));
    }
    XSRETURN(1);
}


XS(XS_Purple__Account__Option_new); /* prototype to pass -Wmissing-prototypes */
XS(XS_Purple__Account__Option_new)
{
#ifdef dVAR
    dVAR; dXSARGS;
#else
    dXSARGS;
#endif
    if (items != 4)
       Perl_croak(aTHX_ "Usage: %s(%s)", "Purple::Account::Option::new", "class, type, text, pref_name");
    PERL_UNUSED_VAR(cv); /* -W */
    {
	Purple__PrefType	type = (Purple__PrefType)SvIV(ST(1));
	const char *	text = (const char *)SvPV_nolen(ST(2));
	const char *	pref_name = (const char *)SvPV_nolen(ST(3));
	Purple__Account__Option	RETVAL;

	RETVAL = purple_account_option_new(type, text, pref_name);
	ST(0) = purple_perl_bless_object(RETVAL, "Purple::Account::Option");

	sv_2mortal(ST(0));
    }
    XSRETURN(1);
}


XS(XS_Purple__Account__Option_get_list); /* prototype to pass -Wmissing-prototypes */
XS(XS_Purple__Account__Option_get_list)
{
#ifdef dVAR
    dVAR; dXSARGS;
#else
    dXSARGS;
#endif
    if (items != 1)
       Perl_croak(aTHX_ "Usage: %s(%s)", "Purple::Account::Option::get_list", "option");
    PERL_UNUSED_VAR(cv); /* -W */
    PERL_UNUSED_VAR(ax); /* -Wall */
    SP -= items;
    {
	Purple__Account__Option	option = purple_perl_ref_object(ST(0));
#line 90 "AccountOpts.xs"
	GList *l;
#line 305 "AccountOpts.c"
#line 92 "AccountOpts.xs"
	for (l = purple_account_option_get_list(option); l != NULL; l = l->next) {
		/* XXX These are actually PurpleKeyValuePairs but we don't have a
		 * type for that and even if we did I don't think there's
		 * anything perl could do with them, so I'm just going to
		 * leave this as a Purple::ListEntry for now. */
		XPUSHs(sv_2mortal(purple_perl_bless_object(l->data, "Purple::ListEntry")));
	}
#line 314 "AccountOpts.c"
	PUTBACK;
	return;
    }
}


XS(XS_Purple__Account__Option_get_type); /* prototype to pass -Wmissing-prototypes */
XS(XS_Purple__Account__Option_get_type)
{
#ifdef dVAR
    dVAR; dXSARGS;
#else
    dXSARGS;
#endif
    if (items != 1)
       Perl_croak(aTHX_ "Usage: %s(%s)", "Purple::Account::Option::get_type", "option");
    PERL_UNUSED_VAR(cv); /* -W */
    {
	Purple__Account__Option	option = purple_perl_ref_object(ST(0));
	Purple__PrefType	RETVAL;
	dXSTARG;

	RETVAL = purple_account_option_get_type(option);
	XSprePUSH; PUSHi((IV)RETVAL);
    }
    XSRETURN(1);
}


XS(XS_Purple__Account__Option_get_masked); /* prototype to pass -Wmissing-prototypes */
XS(XS_Purple__Account__Option_get_masked)
{
#ifdef dVAR
    dVAR; dXSARGS;
#else
    dXSARGS;
#endif
    if (items != 1)
       Perl_croak(aTHX_ "Usage: %s(%s)", "Purple::Account::Option::get_masked", "option");
    PERL_UNUSED_VAR(cv); /* -W */
    {
	Purple__Account__Option	option = purple_perl_ref_object(ST(0));
	gboolean	RETVAL;

	RETVAL = purple_account_option_get_masked(option);
	ST(0) = boolSV(RETVAL);
	sv_2mortal(ST(0));
    }
    XSRETURN(1);
}


XS(XS_Purple__Account__Option_get_default_int); /* prototype to pass -Wmissing-prototypes */
XS(XS_Purple__Account__Option_get_default_int)
{
#ifdef dVAR
    dVAR; dXSARGS;
#else
    dXSARGS;
#endif
    if (items != 1)
       Perl_croak(aTHX_ "Usage: %s(%s)", "Purple::Account::Option::get_default_int", "option");
    PERL_UNUSED_VAR(cv); /* -W */
    {
	Purple__Account__Option	option = purple_perl_ref_object(ST(0));
	int	RETVAL;
	dXSTARG;

	RETVAL = purple_account_option_get_default_int(option);
	XSprePUSH; PUSHi((IV)RETVAL);
    }
    XSRETURN(1);
}


XS(XS_Purple__Account__Option_get_default_bool); /* prototype to pass -Wmissing-prototypes */
XS(XS_Purple__Account__Option_get_default_bool)
{
#ifdef dVAR
    dVAR; dXSARGS;
#else
    dXSARGS;
#endif
    if (items != 1)
       Perl_croak(aTHX_ "Usage: %s(%s)", "Purple::Account::Option::get_default_bool", "option");
    PERL_UNUSED_VAR(cv); /* -W */
    {
	Purple__Account__Option	option = purple_perl_ref_object(ST(0));
	gboolean	RETVAL;

	RETVAL = purple_account_option_get_default_bool(option);
	ST(0) = boolSV(RETVAL);
	sv_2mortal(ST(0));
    }
    XSRETURN(1);
}


XS(XS_Purple__Account__Option_get_setting); /* prototype to pass -Wmissing-prototypes */
XS(XS_Purple__Account__Option_get_setting)
{
#ifdef dVAR
    dVAR; dXSARGS;
#else
    dXSARGS;
#endif
    if (items != 1)
       Perl_croak(aTHX_ "Usage: %s(%s)", "Purple::Account::Option::get_setting", "option");
    PERL_UNUSED_VAR(cv); /* -W */
    {
	Purple__Account__Option	option = purple_perl_ref_object(ST(0));
	const char *	RETVAL;
	dXSTARG;

	RETVAL = purple_account_option_get_setting(option);
	sv_setpv(TARG, RETVAL); XSprePUSH; PUSHTARG;
    }
    XSRETURN(1);
}


XS(XS_Purple__Account__Option_get_text); /* prototype to pass -Wmissing-prototypes */
XS(XS_Purple__Account__Option_get_text)
{
#ifdef dVAR
    dVAR; dXSARGS;
#else
    dXSARGS;
#endif
    if (items != 1)
       Perl_croak(aTHX_ "Usage: %s(%s)", "Purple::Account::Option::get_text", "option");
    PERL_UNUSED_VAR(cv); /* -W */
    {
	Purple__Account__Option	option = purple_perl_ref_object(ST(0));
	const char *	RETVAL;
	dXSTARG;

	RETVAL = purple_account_option_get_text(option);
	sv_setpv(TARG, RETVAL); XSprePUSH; PUSHTARG;
    }
    XSRETURN(1);
}


XS(XS_Purple__Account__Option_set_list); /* prototype to pass -Wmissing-prototypes */
XS(XS_Purple__Account__Option_set_list)
{
#ifdef dVAR
    dVAR; dXSARGS;
#else
    dXSARGS;
#endif
    if (items != 2)
       Perl_croak(aTHX_ "Usage: %s(%s)", "Purple::Account::Option::set_list", "option, values");
    PERL_UNUSED_VAR(cv); /* -W */
    PERL_UNUSED_VAR(ax); /* -Wall */
    SP -= items;
    {
	Purple__Account__Option	option = purple_perl_ref_object(ST(0));
	SV *	values = ST(1);
#line 129 "AccountOpts.xs"
	GList *t_GL;
	int i, t_len;
#line 478 "AccountOpts.c"
#line 132 "AccountOpts.xs"
	t_GL = NULL;
	t_len = av_len((AV *)SvRV(values));

	for (i = 0; i <= t_len; i++)
		t_GL = g_list_append(t_GL, SvPVutf8_nolen(*av_fetch((AV *)SvRV(values), i, 0)));

	purple_account_option_set_list(option, t_GL);
#line 487 "AccountOpts.c"
	PUTBACK;
	return;
    }
}


XS(XS_Purple__Account__Option_set_masked); /* prototype to pass -Wmissing-prototypes */
XS(XS_Purple__Account__Option_set_masked)
{
#ifdef dVAR
    dVAR; dXSARGS;
#else
    dXSARGS;
#endif
    if (items != 2)
       Perl_croak(aTHX_ "Usage: %s(%s)", "Purple::Account::Option::set_masked", "option, masked");
    PERL_UNUSED_VAR(cv); /* -W */
    {
	Purple__Account__Option	option = purple_perl_ref_object(ST(0));
	gboolean	masked = (bool)SvTRUE(ST(1));

	purple_account_option_set_masked(option, masked);
    }
    XSRETURN_EMPTY;
}


XS(XS_Purple__Account__UserSplit_new); /* prototype to pass -Wmissing-prototypes */
XS(XS_Purple__Account__UserSplit_new)
{
#ifdef dVAR
    dVAR; dXSARGS;
#else
    dXSARGS;
#endif
    if (items != 4)
       Perl_croak(aTHX_ "Usage: %s(%s)", "Purple::Account::UserSplit::new", "class, text, default_value, sep");
    PERL_UNUSED_VAR(cv); /* -W */
    {
	const char *	text = (const char *)SvPV_nolen(ST(1));
	const char *	default_value = (const char *)SvPV_nolen(ST(2));
	char	sep = (char)*SvPV_nolen(ST(3));
	Purple__Account__UserSplit	RETVAL;

	RETVAL = purple_account_user_split_new(text, default_value, sep);
	ST(0) = purple_perl_bless_object(RETVAL, "Purple::Account::UserSplit");

	sv_2mortal(ST(0));
    }
    XSRETURN(1);
}


XS(XS_Purple__Account__UserSplit_get_separator); /* prototype to pass -Wmissing-prototypes */
XS(XS_Purple__Account__UserSplit_get_separator)
{
#ifdef dVAR
    dVAR; dXSARGS;
#else
    dXSARGS;
#endif
    if (items != 1)
       Perl_croak(aTHX_ "Usage: %s(%s)", "Purple::Account::UserSplit::get_separator", "split");
    PERL_UNUSED_VAR(cv); /* -W */
    {
	Purple__Account__UserSplit	split = purple_perl_ref_object(ST(0));
	char	RETVAL;
	dXSTARG;

	RETVAL = purple_account_user_split_get_separator(split);
	XSprePUSH; PUSHp((char *)&RETVAL, 1);
    }
    XSRETURN(1);
}


XS(XS_Purple__Account__UserSplit_get_text); /* prototype to pass -Wmissing-prototypes */
XS(XS_Purple__Account__UserSplit_get_text)
{
#ifdef dVAR
    dVAR; dXSARGS;
#else
    dXSARGS;
#endif
    if (items != 1)
       Perl_croak(aTHX_ "Usage: %s(%s)", "Purple::Account::UserSplit::get_text", "split");
    PERL_UNUSED_VAR(cv); /* -W */
    {
	Purple__Account__UserSplit	split = purple_perl_ref_object(ST(0));
	const char *	RETVAL;
	dXSTARG;

	RETVAL = purple_account_user_split_get_text(split);
	sv_setpv(TARG, RETVAL); XSprePUSH; PUSHTARG;
    }
    XSRETURN(1);
}


XS(XS_Purple__Account__UserSplit_destroy); /* prototype to pass -Wmissing-prototypes */
XS(XS_Purple__Account__UserSplit_destroy)
{
#ifdef dVAR
    dVAR; dXSARGS;
#else
    dXSARGS;
#endif
    if (items != 1)
       Perl_croak(aTHX_ "Usage: %s(%s)", "Purple::Account::UserSplit::destroy", "split");
    PERL_UNUSED_VAR(cv); /* -W */
    {
	Purple__Account__UserSplit	split = purple_perl_ref_object(ST(0));

	purple_account_user_split_destroy(split);
    }
    XSRETURN_EMPTY;
}

#ifdef __cplusplus
extern "C"
#endif
XS(boot_Purple__Account__Option); /* prototype to pass -Wmissing-prototypes */
XS(boot_Purple__Account__Option)
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

        newXSproto("Purple::Account::Option::destroy", XS_Purple__Account__Option_destroy, file, "$");
        newXSproto("Purple::Account::Option::get_default_string", XS_Purple__Account__Option_get_default_string, file, "$");
        newXSproto("Purple::Account::Option::add_list_item", XS_Purple__Account__Option_add_list_item, file, "$$$");
        newXSproto("Purple::Account::Option::set_default_string", XS_Purple__Account__Option_set_default_string, file, "$$");
        newXSproto("Purple::Account::Option::set_default_int", XS_Purple__Account__Option_set_default_int, file, "$$");
        newXSproto("Purple::Account::Option::set_default_bool", XS_Purple__Account__Option_set_default_bool, file, "$$");
        newXSproto("Purple::Account::Option::list_new", XS_Purple__Account__Option_list_new, file, "$$$$");
        newXSproto("Purple::Account::Option::string_new", XS_Purple__Account__Option_string_new, file, "$$$$");
        newXSproto("Purple::Account::Option::int_new", XS_Purple__Account__Option_int_new, file, "$$$$");
        newXSproto("Purple::Account::Option::bool_new", XS_Purple__Account__Option_bool_new, file, "$$$$");
        newXSproto("Purple::Account::Option::new", XS_Purple__Account__Option_new, file, "$$$$");
        newXSproto("Purple::Account::Option::get_list", XS_Purple__Account__Option_get_list, file, "$");
        newXSproto("Purple::Account::Option::get_type", XS_Purple__Account__Option_get_type, file, "$");
        newXSproto("Purple::Account::Option::get_masked", XS_Purple__Account__Option_get_masked, file, "$");
        newXSproto("Purple::Account::Option::get_default_int", XS_Purple__Account__Option_get_default_int, file, "$");
        newXSproto("Purple::Account::Option::get_default_bool", XS_Purple__Account__Option_get_default_bool, file, "$");
        newXSproto("Purple::Account::Option::get_setting", XS_Purple__Account__Option_get_setting, file, "$");
        newXSproto("Purple::Account::Option::get_text", XS_Purple__Account__Option_get_text, file, "$");
        newXSproto("Purple::Account::Option::set_list", XS_Purple__Account__Option_set_list, file, "$$");
        newXSproto("Purple::Account::Option::set_masked", XS_Purple__Account__Option_set_masked, file, "$$");
        newXSproto("Purple::Account::UserSplit::new", XS_Purple__Account__UserSplit_new, file, "$$$$");
        newXSproto("Purple::Account::UserSplit::get_separator", XS_Purple__Account__UserSplit_get_separator, file, "$");
        newXSproto("Purple::Account::UserSplit::get_text", XS_Purple__Account__UserSplit_get_text, file, "$");
        newXSproto("Purple::Account::UserSplit::destroy", XS_Purple__Account__UserSplit_destroy, file, "$");
    if (PL_unitcheckav)
         call_list(PL_scopestack_ix, PL_unitcheckav);
    XSRETURN_YES;
}
