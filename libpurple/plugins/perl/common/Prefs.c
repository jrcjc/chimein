/*
 * This file was generated automatically by ExtUtils::ParseXS version 2.18_02 from the
 * contents of Prefs.xs. Do not edit this file, edit Prefs.xs instead.
 *
 *	ANY CHANGES MADE HERE WILL BE LOST! 
 *
 */

#line 1 "Prefs.xs"
#include "module.h"
#include "../perl-handlers.h"

#ifndef PERL_UNUSED_VAR
#  define PERL_UNUSED_VAR(var) if (0) var = var
#endif

#line 18 "Prefs.c"

XS(XS_Purple__Prefs_add_bool); /* prototype to pass -Wmissing-prototypes */
XS(XS_Purple__Prefs_add_bool)
{
#ifdef dVAR
    dVAR; dXSARGS;
#else
    dXSARGS;
#endif
    if (items != 2)
       Perl_croak(aTHX_ "Usage: %s(%s)", "Purple::Prefs::add_bool", "name, value");
    PERL_UNUSED_VAR(cv); /* -W */
    {
	const char *	name = (const char *)SvPV_nolen(ST(0));
	gboolean	value = (bool)SvTRUE(ST(1));

	purple_prefs_add_bool(name, value);
    }
    XSRETURN_EMPTY;
}


XS(XS_Purple__Prefs_add_int); /* prototype to pass -Wmissing-prototypes */
XS(XS_Purple__Prefs_add_int)
{
#ifdef dVAR
    dVAR; dXSARGS;
#else
    dXSARGS;
#endif
    if (items != 2)
       Perl_croak(aTHX_ "Usage: %s(%s)", "Purple::Prefs::add_int", "name, value");
    PERL_UNUSED_VAR(cv); /* -W */
    {
	const char *	name = (const char *)SvPV_nolen(ST(0));
	int	value = (int)SvIV(ST(1));

	purple_prefs_add_int(name, value);
    }
    XSRETURN_EMPTY;
}


XS(XS_Purple__Prefs_add_none); /* prototype to pass -Wmissing-prototypes */
XS(XS_Purple__Prefs_add_none)
{
#ifdef dVAR
    dVAR; dXSARGS;
#else
    dXSARGS;
#endif
    if (items != 1)
       Perl_croak(aTHX_ "Usage: %s(%s)", "Purple::Prefs::add_none", "name");
    PERL_UNUSED_VAR(cv); /* -W */
    {
	const char *	name = (const char *)SvPV_nolen(ST(0));

	purple_prefs_add_none(name);
    }
    XSRETURN_EMPTY;
}


XS(XS_Purple__Prefs_add_string); /* prototype to pass -Wmissing-prototypes */
XS(XS_Purple__Prefs_add_string)
{
#ifdef dVAR
    dVAR; dXSARGS;
#else
    dXSARGS;
#endif
    if (items != 2)
       Perl_croak(aTHX_ "Usage: %s(%s)", "Purple::Prefs::add_string", "name, value");
    PERL_UNUSED_VAR(cv); /* -W */
    {
	const char *	name = (const char *)SvPV_nolen(ST(0));
	const char *	value = (const char *)SvPV_nolen(ST(1));

	purple_prefs_add_string(name, value);
    }
    XSRETURN_EMPTY;
}


XS(XS_Purple__Prefs_add_string_list); /* prototype to pass -Wmissing-prototypes */
XS(XS_Purple__Prefs_add_string_list)
{
#ifdef dVAR
    dVAR; dXSARGS;
#else
    dXSARGS;
#endif
    if (items != 2)
       Perl_croak(aTHX_ "Usage: %s(%s)", "Purple::Prefs::add_string_list", "name, value");
    PERL_UNUSED_VAR(cv); /* -W */
    PERL_UNUSED_VAR(ax); /* -Wall */
    SP -= items;
    {
	const char *	name = (const char *)SvPV_nolen(ST(0));
	SV *	value = ST(1);
#line 50 "Prefs.xs"
	GList *t_GL;
	int i, t_len;
#line 122 "Prefs.c"
#line 53 "Prefs.xs"
	t_GL = NULL;
	t_len = av_len((AV *)SvRV(value));

	for (i = 0; i <= t_len; i++)
		t_GL = g_list_append(t_GL, SvPVutf8_nolen(*av_fetch((AV *)SvRV(value), i, 0)));

	purple_prefs_add_string_list(name, t_GL);
	g_list_free(t_GL);
#line 132 "Prefs.c"
	PUTBACK;
	return;
    }
}


XS(XS_Purple__Prefs_add_path); /* prototype to pass -Wmissing-prototypes */
XS(XS_Purple__Prefs_add_path)
{
#ifdef dVAR
    dVAR; dXSARGS;
#else
    dXSARGS;
#endif
    if (items != 2)
       Perl_croak(aTHX_ "Usage: %s(%s)", "Purple::Prefs::add_path", "name, value");
    PERL_UNUSED_VAR(cv); /* -W */
    {
	const char *	name = (const char *)SvPV_nolen(ST(0));
	const char *	value = (const char *)SvPV_nolen(ST(1));

	purple_prefs_add_path(name, value);
    }
    XSRETURN_EMPTY;
}


XS(XS_Purple__Prefs_add_path_list); /* prototype to pass -Wmissing-prototypes */
XS(XS_Purple__Prefs_add_path_list)
{
#ifdef dVAR
    dVAR; dXSARGS;
#else
    dXSARGS;
#endif
    if (items != 2)
       Perl_croak(aTHX_ "Usage: %s(%s)", "Purple::Prefs::add_path_list", "name, value");
    PERL_UNUSED_VAR(cv); /* -W */
    PERL_UNUSED_VAR(ax); /* -Wall */
    SP -= items;
    {
	const char *	name = (const char *)SvPV_nolen(ST(0));
	SV *	value = ST(1);
#line 72 "Prefs.xs"
	GList *t_GL;
	int i, t_len;
#line 179 "Prefs.c"
#line 75 "Prefs.xs"
	t_GL = NULL;
	t_len = av_len((AV *)SvRV(value));

	for (i = 0; i <= t_len; i++)
		t_GL = g_list_append(t_GL, SvPVutf8_nolen(*av_fetch((AV *)SvRV(value), i, 0)));

	purple_prefs_add_path_list(name, t_GL);
	g_list_free(t_GL);
#line 189 "Prefs.c"
	PUTBACK;
	return;
    }
}


XS(XS_Purple__Prefs_destroy); /* prototype to pass -Wmissing-prototypes */
XS(XS_Purple__Prefs_destroy)
{
#ifdef dVAR
    dVAR; dXSARGS;
#else
    dXSARGS;
#endif
    if (items != 0)
       Perl_croak(aTHX_ "Usage: %s(%s)", "Purple::Prefs::destroy", "");
    PERL_UNUSED_VAR(cv); /* -W */
    {

	purple_prefs_destroy();
    }
    XSRETURN_EMPTY;
}


XS(XS_Purple__Prefs_connect_callback); /* prototype to pass -Wmissing-prototypes */
XS(XS_Purple__Prefs_connect_callback)
{
#ifdef dVAR
    dVAR; dXSARGS;
#else
    dXSARGS;
#endif
    if (items < 3 || items > 4)
       Perl_croak(aTHX_ "Usage: %s(%s)", "Purple::Prefs::connect_callback", "plugin, name, callback, data = 0");
    PERL_UNUSED_VAR(cv); /* -W */
    {
	Purple__Plugin	plugin = purple_perl_ref_object(ST(0));
	const char *	name = (const char *)SvPV_nolen(ST(1));
	SV *	callback = ST(2);
	SV *	data;
	guint	RETVAL;
	dXSTARG;

	if (items < 4)
	    data = 0;
	else {
	    data = ST(3);
	}
#line 94 "Prefs.xs"
	RETVAL = purple_perl_prefs_connect_callback(plugin, name, callback, data);
#line 241 "Prefs.c"
	XSprePUSH; PUSHi((IV)RETVAL);
    }
    XSRETURN(1);
}


XS(XS_Purple__Prefs_disconnect_by_handle); /* prototype to pass -Wmissing-prototypes */
XS(XS_Purple__Prefs_disconnect_by_handle)
{
#ifdef dVAR
    dVAR; dXSARGS;
#else
    dXSARGS;
#endif
    if (items != 1)
       Perl_croak(aTHX_ "Usage: %s(%s)", "Purple::Prefs::disconnect_by_handle", "plugin");
    PERL_UNUSED_VAR(cv); /* -W */
    {
	Purple__Plugin	plugin = purple_perl_ref_object(ST(0));
#line 102 "Prefs.xs"
	purple_perl_pref_cb_clear_for_plugin(plugin);
#line 263 "Prefs.c"
    }
    XSRETURN_EMPTY;
}


XS(XS_Purple__Prefs_disconnect_callback); /* prototype to pass -Wmissing-prototypes */
XS(XS_Purple__Prefs_disconnect_callback)
{
#ifdef dVAR
    dVAR; dXSARGS;
#else
    dXSARGS;
#endif
    if (items != 1)
       Perl_croak(aTHX_ "Usage: %s(%s)", "Purple::Prefs::disconnect_callback", "callback_id");
    PERL_UNUSED_VAR(cv); /* -W */
    {
	guint	callback_id = (guint)SvIV(ST(0));
#line 108 "Prefs.xs"
	purple_perl_prefs_disconnect_callback(callback_id);
#line 284 "Prefs.c"
    }
    XSRETURN_EMPTY;
}


XS(XS_Purple__Prefs_exists); /* prototype to pass -Wmissing-prototypes */
XS(XS_Purple__Prefs_exists)
{
#ifdef dVAR
    dVAR; dXSARGS;
#else
    dXSARGS;
#endif
    if (items != 1)
       Perl_croak(aTHX_ "Usage: %s(%s)", "Purple::Prefs::exists", "name");
    PERL_UNUSED_VAR(cv); /* -W */
    {
	const char *	name = (const char *)SvPV_nolen(ST(0));
	gboolean	RETVAL;

	RETVAL = purple_prefs_exists(name);
	ST(0) = boolSV(RETVAL);
	sv_2mortal(ST(0));
    }
    XSRETURN(1);
}


XS(XS_Purple__Prefs_get_path); /* prototype to pass -Wmissing-prototypes */
XS(XS_Purple__Prefs_get_path)
{
#ifdef dVAR
    dVAR; dXSARGS;
#else
    dXSARGS;
#endif
    if (items != 1)
       Perl_croak(aTHX_ "Usage: %s(%s)", "Purple::Prefs::get_path", "name");
    PERL_UNUSED_VAR(cv); /* -W */
    {
	const char *	name = (const char *)SvPV_nolen(ST(0));
	const char *	RETVAL;
	dXSTARG;

	RETVAL = purple_prefs_get_path(name);
	sv_setpv(TARG, RETVAL); XSprePUSH; PUSHTARG;
    }
    XSRETURN(1);
}


XS(XS_Purple__Prefs_get_path_list); /* prototype to pass -Wmissing-prototypes */
XS(XS_Purple__Prefs_get_path_list)
{
#ifdef dVAR
    dVAR; dXSARGS;
#else
    dXSARGS;
#endif
    if (items != 1)
       Perl_croak(aTHX_ "Usage: %s(%s)", "Purple::Prefs::get_path_list", "name");
    PERL_UNUSED_VAR(cv); /* -W */
    PERL_UNUSED_VAR(ax); /* -Wall */
    SP -= items;
    {
	const char *	name = (const char *)SvPV_nolen(ST(0));
#line 122 "Prefs.xs"
	GList *l;
#line 353 "Prefs.c"
#line 124 "Prefs.xs"
	for (l = purple_prefs_get_path_list(name); l != NULL; l = g_list_delete_link(l, l)) {
		XPUSHs(sv_2mortal(newSVpv(l->data, 0)));
		g_free(l->data);
	}
#line 359 "Prefs.c"
	PUTBACK;
	return;
    }
}


XS(XS_Purple__Prefs_get_bool); /* prototype to pass -Wmissing-prototypes */
XS(XS_Purple__Prefs_get_bool)
{
#ifdef dVAR
    dVAR; dXSARGS;
#else
    dXSARGS;
#endif
    if (items != 1)
       Perl_croak(aTHX_ "Usage: %s(%s)", "Purple::Prefs::get_bool", "name");
    PERL_UNUSED_VAR(cv); /* -W */
    {
	const char *	name = (const char *)SvPV_nolen(ST(0));
	gboolean	RETVAL;

	RETVAL = purple_prefs_get_bool(name);
	ST(0) = boolSV(RETVAL);
	sv_2mortal(ST(0));
    }
    XSRETURN(1);
}


XS(XS_Purple__Prefs_get_handle); /* prototype to pass -Wmissing-prototypes */
XS(XS_Purple__Prefs_get_handle)
{
#ifdef dVAR
    dVAR; dXSARGS;
#else
    dXSARGS;
#endif
    if (items != 0)
       Perl_croak(aTHX_ "Usage: %s(%s)", "Purple::Prefs::get_handle", "");
    PERL_UNUSED_VAR(cv); /* -W */
    {
	Purple__Handle	RETVAL;

	RETVAL = purple_prefs_get_handle();
	ST(0) = purple_perl_bless_object(RETVAL, "Purple::Handle");

	sv_2mortal(ST(0));
    }
    XSRETURN(1);
}


XS(XS_Purple__Prefs_get_int); /* prototype to pass -Wmissing-prototypes */
XS(XS_Purple__Prefs_get_int)
{
#ifdef dVAR
    dVAR; dXSARGS;
#else
    dXSARGS;
#endif
    if (items != 1)
       Perl_croak(aTHX_ "Usage: %s(%s)", "Purple::Prefs::get_int", "name");
    PERL_UNUSED_VAR(cv); /* -W */
    {
	const char *	name = (const char *)SvPV_nolen(ST(0));
	int	RETVAL;
	dXSTARG;

	RETVAL = purple_prefs_get_int(name);
	XSprePUSH; PUSHi((IV)RETVAL);
    }
    XSRETURN(1);
}


XS(XS_Purple__Prefs_get_string); /* prototype to pass -Wmissing-prototypes */
XS(XS_Purple__Prefs_get_string)
{
#ifdef dVAR
    dVAR; dXSARGS;
#else
    dXSARGS;
#endif
    if (items != 1)
       Perl_croak(aTHX_ "Usage: %s(%s)", "Purple::Prefs::get_string", "name");
    PERL_UNUSED_VAR(cv); /* -W */
    {
	const char *	name = (const char *)SvPV_nolen(ST(0));
	const char *	RETVAL;
	dXSTARG;

	RETVAL = purple_prefs_get_string(name);
	sv_setpv(TARG, RETVAL); XSprePUSH; PUSHTARG;
    }
    XSRETURN(1);
}


XS(XS_Purple__Prefs_get_string_list); /* prototype to pass -Wmissing-prototypes */
XS(XS_Purple__Prefs_get_string_list)
{
#ifdef dVAR
    dVAR; dXSARGS;
#else
    dXSARGS;
#endif
    if (items != 1)
       Perl_croak(aTHX_ "Usage: %s(%s)", "Purple::Prefs::get_string_list", "name");
    PERL_UNUSED_VAR(cv); /* -W */
    PERL_UNUSED_VAR(ax); /* -Wall */
    SP -= items;
    {
	const char *	name = (const char *)SvPV_nolen(ST(0));
#line 148 "Prefs.xs"
	GList *l;
#line 475 "Prefs.c"
#line 150 "Prefs.xs"
	for (l = purple_prefs_get_string_list(name); l != NULL; l = g_list_delete_link(l, l)) {
		XPUSHs(sv_2mortal(newSVpv(l->data, 0)));
		g_free(l->data);
	}
#line 481 "Prefs.c"
	PUTBACK;
	return;
    }
}


XS(XS_Purple__Prefs_get_type); /* prototype to pass -Wmissing-prototypes */
XS(XS_Purple__Prefs_get_type)
{
#ifdef dVAR
    dVAR; dXSARGS;
#else
    dXSARGS;
#endif
    if (items != 1)
       Perl_croak(aTHX_ "Usage: %s(%s)", "Purple::Prefs::get_type", "name");
    PERL_UNUSED_VAR(cv); /* -W */
    {
	const char *	name = (const char *)SvPV_nolen(ST(0));
	Purple__PrefType	RETVAL;
	dXSTARG;

	RETVAL = purple_prefs_get_type(name);
	XSprePUSH; PUSHi((IV)RETVAL);
    }
    XSRETURN(1);
}


XS(XS_Purple__Prefs_load); /* prototype to pass -Wmissing-prototypes */
XS(XS_Purple__Prefs_load)
{
#ifdef dVAR
    dVAR; dXSARGS;
#else
    dXSARGS;
#endif
    if (items != 0)
       Perl_croak(aTHX_ "Usage: %s(%s)", "Purple::Prefs::load", "");
    PERL_UNUSED_VAR(cv); /* -W */
    {
	gboolean	RETVAL;

	RETVAL = purple_prefs_load();
	ST(0) = boolSV(RETVAL);
	sv_2mortal(ST(0));
    }
    XSRETURN(1);
}


XS(XS_Purple__Prefs_remove); /* prototype to pass -Wmissing-prototypes */
XS(XS_Purple__Prefs_remove)
{
#ifdef dVAR
    dVAR; dXSARGS;
#else
    dXSARGS;
#endif
    if (items != 1)
       Perl_croak(aTHX_ "Usage: %s(%s)", "Purple::Prefs::remove", "name");
    PERL_UNUSED_VAR(cv); /* -W */
    {
	const char *	name = (const char *)SvPV_nolen(ST(0));

	purple_prefs_remove(name);
    }
    XSRETURN_EMPTY;
}


XS(XS_Purple__Prefs_rename); /* prototype to pass -Wmissing-prototypes */
XS(XS_Purple__Prefs_rename)
{
#ifdef dVAR
    dVAR; dXSARGS;
#else
    dXSARGS;
#endif
    if (items != 2)
       Perl_croak(aTHX_ "Usage: %s(%s)", "Purple::Prefs::rename", "oldname, newname");
    PERL_UNUSED_VAR(cv); /* -W */
    {
	const char *	oldname = (const char *)SvPV_nolen(ST(0));
	const char *	newname = (const char *)SvPV_nolen(ST(1));

	purple_prefs_rename(oldname, newname);
    }
    XSRETURN_EMPTY;
}


XS(XS_Purple__Prefs_rename_boolean_toggle); /* prototype to pass -Wmissing-prototypes */
XS(XS_Purple__Prefs_rename_boolean_toggle)
{
#ifdef dVAR
    dVAR; dXSARGS;
#else
    dXSARGS;
#endif
    if (items != 2)
       Perl_croak(aTHX_ "Usage: %s(%s)", "Purple::Prefs::rename_boolean_toggle", "oldname, newname");
    PERL_UNUSED_VAR(cv); /* -W */
    {
	const char *	oldname = (const char *)SvPV_nolen(ST(0));
	const char *	newname = (const char *)SvPV_nolen(ST(1));

	purple_prefs_rename_boolean_toggle(oldname, newname);
    }
    XSRETURN_EMPTY;
}


XS(XS_Purple__Prefs_set_bool); /* prototype to pass -Wmissing-prototypes */
XS(XS_Purple__Prefs_set_bool)
{
#ifdef dVAR
    dVAR; dXSARGS;
#else
    dXSARGS;
#endif
    if (items != 2)
       Perl_croak(aTHX_ "Usage: %s(%s)", "Purple::Prefs::set_bool", "name, value");
    PERL_UNUSED_VAR(cv); /* -W */
    {
	const char *	name = (const char *)SvPV_nolen(ST(0));
	gboolean	value = (bool)SvTRUE(ST(1));

	purple_prefs_set_bool(name, value);
    }
    XSRETURN_EMPTY;
}


XS(XS_Purple__Prefs_set_generic); /* prototype to pass -Wmissing-prototypes */
XS(XS_Purple__Prefs_set_generic)
{
#ifdef dVAR
    dVAR; dXSARGS;
#else
    dXSARGS;
#endif
    if (items != 2)
       Perl_croak(aTHX_ "Usage: %s(%s)", "Purple::Prefs::set_generic", "name, value");
    PERL_UNUSED_VAR(cv); /* -W */
    {
	const char *	name = (const char *)SvPV_nolen(ST(0));
	gpointer	value = purple_perl_ref_object(ST(1));

	purple_prefs_set_generic(name, value);
    }
    XSRETURN_EMPTY;
}


XS(XS_Purple__Prefs_set_int); /* prototype to pass -Wmissing-prototypes */
XS(XS_Purple__Prefs_set_int)
{
#ifdef dVAR
    dVAR; dXSARGS;
#else
    dXSARGS;
#endif
    if (items != 2)
       Perl_croak(aTHX_ "Usage: %s(%s)", "Purple::Prefs::set_int", "name, value");
    PERL_UNUSED_VAR(cv); /* -W */
    {
	const char *	name = (const char *)SvPV_nolen(ST(0));
	int	value = (int)SvIV(ST(1));

	purple_prefs_set_int(name, value);
    }
    XSRETURN_EMPTY;
}


XS(XS_Purple__Prefs_set_string); /* prototype to pass -Wmissing-prototypes */
XS(XS_Purple__Prefs_set_string)
{
#ifdef dVAR
    dVAR; dXSARGS;
#else
    dXSARGS;
#endif
    if (items != 2)
       Perl_croak(aTHX_ "Usage: %s(%s)", "Purple::Prefs::set_string", "name, value");
    PERL_UNUSED_VAR(cv); /* -W */
    {
	const char *	name = (const char *)SvPV_nolen(ST(0));
	const char *	value = (const char *)SvPV_nolen(ST(1));

	purple_prefs_set_string(name, value);
    }
    XSRETURN_EMPTY;
}


XS(XS_Purple__Prefs_set_string_list); /* prototype to pass -Wmissing-prototypes */
XS(XS_Purple__Prefs_set_string_list)
{
#ifdef dVAR
    dVAR; dXSARGS;
#else
    dXSARGS;
#endif
    if (items != 2)
       Perl_croak(aTHX_ "Usage: %s(%s)", "Purple::Prefs::set_string_list", "name, value");
    PERL_UNUSED_VAR(cv); /* -W */
    PERL_UNUSED_VAR(ax); /* -Wall */
    SP -= items;
    {
	const char *	name = (const char *)SvPV_nolen(ST(0));
	SV *	value = ST(1);
#line 201 "Prefs.xs"
	GList *t_GL;
	int i, t_len;
#line 698 "Prefs.c"
#line 204 "Prefs.xs"
	t_GL = NULL;
	t_len = av_len((AV *)SvRV(value));

	for (i = 0; i <= t_len; i++)
		t_GL = g_list_append(t_GL, SvPVutf8_nolen(*av_fetch((AV *)SvRV(value), i, 0)));

	purple_prefs_set_string_list(name, t_GL);
	g_list_free(t_GL);
#line 708 "Prefs.c"
	PUTBACK;
	return;
    }
}


XS(XS_Purple__Prefs_set_path); /* prototype to pass -Wmissing-prototypes */
XS(XS_Purple__Prefs_set_path)
{
#ifdef dVAR
    dVAR; dXSARGS;
#else
    dXSARGS;
#endif
    if (items != 2)
       Perl_croak(aTHX_ "Usage: %s(%s)", "Purple::Prefs::set_path", "name, value");
    PERL_UNUSED_VAR(cv); /* -W */
    {
	const char *	name = (const char *)SvPV_nolen(ST(0));
	const char *	value = (const char *)SvPV_nolen(ST(1));

	purple_prefs_set_path(name, value);
    }
    XSRETURN_EMPTY;
}


XS(XS_Purple__Prefs_set_path_list); /* prototype to pass -Wmissing-prototypes */
XS(XS_Purple__Prefs_set_path_list)
{
#ifdef dVAR
    dVAR; dXSARGS;
#else
    dXSARGS;
#endif
    if (items != 2)
       Perl_croak(aTHX_ "Usage: %s(%s)", "Purple::Prefs::set_path_list", "name, value");
    PERL_UNUSED_VAR(cv); /* -W */
    PERL_UNUSED_VAR(ax); /* -Wall */
    SP -= items;
    {
	const char *	name = (const char *)SvPV_nolen(ST(0));
	SV *	value = ST(1);
#line 223 "Prefs.xs"
	GList *t_GL;
	int i, t_len;
#line 755 "Prefs.c"
#line 226 "Prefs.xs"
	t_GL = NULL;
	t_len = av_len((AV *)SvRV(value));

	for (i = 0; i <= t_len; i++)
		t_GL = g_list_append(t_GL, SvPVutf8_nolen(*av_fetch((AV *)SvRV(value), i, 0)));

	purple_prefs_set_path_list(name, t_GL);
	g_list_free(t_GL);
#line 765 "Prefs.c"
	PUTBACK;
	return;
    }
}


XS(XS_Purple__Prefs_trigger_callback); /* prototype to pass -Wmissing-prototypes */
XS(XS_Purple__Prefs_trigger_callback)
{
#ifdef dVAR
    dVAR; dXSARGS;
#else
    dXSARGS;
#endif
    if (items != 1)
       Perl_croak(aTHX_ "Usage: %s(%s)", "Purple::Prefs::trigger_callback", "name");
    PERL_UNUSED_VAR(cv); /* -W */
    {
	const char *	name = (const char *)SvPV_nolen(ST(0));

	purple_prefs_trigger_callback(name);
    }
    XSRETURN_EMPTY;
}


XS(XS_Purple__Prefs_get_children_names); /* prototype to pass -Wmissing-prototypes */
XS(XS_Purple__Prefs_get_children_names)
{
#ifdef dVAR
    dVAR; dXSARGS;
#else
    dXSARGS;
#endif
    if (items != 1)
       Perl_croak(aTHX_ "Usage: %s(%s)", "Purple::Prefs::get_children_names", "name");
    PERL_UNUSED_VAR(cv); /* -W */
    PERL_UNUSED_VAR(ax); /* -Wall */
    SP -= items;
    {
	const char *	name = (const char *)SvPV_nolen(ST(0));
#line 244 "Prefs.xs"
	GList *l;
#line 809 "Prefs.c"
#line 246 "Prefs.xs"
	for (l = purple_prefs_get_children_names(name); l != NULL; l = g_list_delete_link(l, l)) {
		XPUSHs(sv_2mortal(newSVpv(l->data, 0)));
		g_free(l->data);
	}
#line 815 "Prefs.c"
	PUTBACK;
	return;
    }
}


XS(XS_Purple__Prefs_update_old); /* prototype to pass -Wmissing-prototypes */
XS(XS_Purple__Prefs_update_old)
{
#ifdef dVAR
    dVAR; dXSARGS;
#else
    dXSARGS;
#endif
    if (items != 0)
       Perl_croak(aTHX_ "Usage: %s(%s)", "Purple::Prefs::update_old", "");
    PERL_UNUSED_VAR(cv); /* -W */
    {

	purple_prefs_update_old();
    }
    XSRETURN_EMPTY;
}

#ifdef __cplusplus
extern "C"
#endif
XS(boot_Purple__Prefs); /* prototype to pass -Wmissing-prototypes */
XS(boot_Purple__Prefs)
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

        newXSproto("Purple::Prefs::add_bool", XS_Purple__Prefs_add_bool, file, "$$");
        newXSproto("Purple::Prefs::add_int", XS_Purple__Prefs_add_int, file, "$$");
        newXSproto("Purple::Prefs::add_none", XS_Purple__Prefs_add_none, file, "$");
        newXSproto("Purple::Prefs::add_string", XS_Purple__Prefs_add_string, file, "$$");
        newXSproto("Purple::Prefs::add_string_list", XS_Purple__Prefs_add_string_list, file, "$$");
        newXSproto("Purple::Prefs::add_path", XS_Purple__Prefs_add_path, file, "$$");
        newXSproto("Purple::Prefs::add_path_list", XS_Purple__Prefs_add_path_list, file, "$$");
        newXSproto("Purple::Prefs::destroy", XS_Purple__Prefs_destroy, file, "");
        newXSproto("Purple::Prefs::connect_callback", XS_Purple__Prefs_connect_callback, file, "$$$;$");
        newXSproto("Purple::Prefs::disconnect_by_handle", XS_Purple__Prefs_disconnect_by_handle, file, "$");
        newXSproto("Purple::Prefs::disconnect_callback", XS_Purple__Prefs_disconnect_callback, file, "$");
        newXSproto("Purple::Prefs::exists", XS_Purple__Prefs_exists, file, "$");
        newXSproto("Purple::Prefs::get_path", XS_Purple__Prefs_get_path, file, "$");
        newXSproto("Purple::Prefs::get_path_list", XS_Purple__Prefs_get_path_list, file, "$");
        newXSproto("Purple::Prefs::get_bool", XS_Purple__Prefs_get_bool, file, "$");
        newXSproto("Purple::Prefs::get_handle", XS_Purple__Prefs_get_handle, file, "");
        newXSproto("Purple::Prefs::get_int", XS_Purple__Prefs_get_int, file, "$");
        newXSproto("Purple::Prefs::get_string", XS_Purple__Prefs_get_string, file, "$");
        newXSproto("Purple::Prefs::get_string_list", XS_Purple__Prefs_get_string_list, file, "$");
        newXSproto("Purple::Prefs::get_type", XS_Purple__Prefs_get_type, file, "$");
        newXSproto("Purple::Prefs::load", XS_Purple__Prefs_load, file, "");
        newXSproto("Purple::Prefs::remove", XS_Purple__Prefs_remove, file, "$");
        newXSproto("Purple::Prefs::rename", XS_Purple__Prefs_rename, file, "$$");
        newXSproto("Purple::Prefs::rename_boolean_toggle", XS_Purple__Prefs_rename_boolean_toggle, file, "$$");
        newXSproto("Purple::Prefs::set_bool", XS_Purple__Prefs_set_bool, file, "$$");
        newXSproto("Purple::Prefs::set_generic", XS_Purple__Prefs_set_generic, file, "$$");
        newXSproto("Purple::Prefs::set_int", XS_Purple__Prefs_set_int, file, "$$");
        newXSproto("Purple::Prefs::set_string", XS_Purple__Prefs_set_string, file, "$$");
        newXSproto("Purple::Prefs::set_string_list", XS_Purple__Prefs_set_string_list, file, "$$");
        newXSproto("Purple::Prefs::set_path", XS_Purple__Prefs_set_path, file, "$$");
        newXSproto("Purple::Prefs::set_path_list", XS_Purple__Prefs_set_path_list, file, "$$");
        newXSproto("Purple::Prefs::trigger_callback", XS_Purple__Prefs_trigger_callback, file, "$");
        newXSproto("Purple::Prefs::get_children_names", XS_Purple__Prefs_get_children_names, file, "$");
        newXSproto("Purple::Prefs::update_old", XS_Purple__Prefs_update_old, file, "");

    /* Initialisation Section */

#line 8 "Prefs.xs"
{
	HV *stash = gv_stashpv("Purple::Pref::Type", 1);

	static const constiv *civ, const_iv[] = {
#define const_iv(name) {#name, (IV)PURPLE_PREF_##name}
		const_iv(NONE),
		const_iv(BOOLEAN),
		const_iv(INT),
		const_iv(STRING),
		const_iv(STRING_LIST),
		const_iv(PATH),
		const_iv(PATH_LIST),
	};

	for (civ = const_iv + sizeof(const_iv) / sizeof(const_iv[0]); civ-- > const_iv; )
		newCONSTSUB(stash, (char *)civ->name, newSViv(civ->iv));
}

#line 913 "Prefs.c"

    /* End of Initialisation Section */

    if (PL_unitcheckav)
         call_list(PL_scopestack_ix, PL_unitcheckav);
    XSRETURN_YES;
}

