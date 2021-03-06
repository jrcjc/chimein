/*
 * This file was generated automatically by ExtUtils::ParseXS version 2.18_02 from the
 * contents of SSLConn.xs. Do not edit this file, edit SSLConn.xs instead.
 *
 *	ANY CHANGES MADE HERE WILL BE LOST! 
 *
 */

#line 1 "SSLConn.xs"
#include "module.h"

/* TODO


Purple::Ssl::Connection
purple_ssl_connect(account, host, port, func, error_func, data)
	Purple::Account account
	const char *host
	int port
	PurpleSslInputFunction func
	PurpleSslErrorFunction error_func

void
purple_ssl_input_add(gsc, func, data)
	Purple::Ssl::Connection gsc
	Purple::SslInputFunction func

Purple::Ssl::Connection
purple_ssl_connect_fd(account, fd, func, error_func, data)
	Purple::Account account
	int fd
	PurpleSslInputFunction func
	PurpleSslErrorFunction error_func

*/

#ifndef PERL_UNUSED_VAR
#  define PERL_UNUSED_VAR(var) if (0) var = var
#endif

#line 42 "SSLConn.c"

XS(XS_Purple__SSL_close); /* prototype to pass -Wmissing-prototypes */
XS(XS_Purple__SSL_close)
{
#ifdef dVAR
    dVAR; dXSARGS;
#else
    dXSARGS;
#endif
    if (items != 1)
       Perl_croak(aTHX_ "Usage: %s(%s)", "Purple::SSL::close", "gsc");
    PERL_UNUSED_VAR(cv); /* -W */
    {
	Purple__Ssl__Connection	gsc = purple_perl_ref_object(ST(0));

	purple_ssl_close(gsc);
    }
    XSRETURN_EMPTY;
}


XS(XS_Purple__SSL_get_ops); /* prototype to pass -Wmissing-prototypes */
XS(XS_Purple__SSL_get_ops)
{
#ifdef dVAR
    dVAR; dXSARGS;
#else
    dXSARGS;
#endif
    if (items != 0)
       Perl_croak(aTHX_ "Usage: %s(%s)", "Purple::SSL::get_ops", "");
    PERL_UNUSED_VAR(cv); /* -W */
    {
	Purple__Ssl__Ops	RETVAL;

	RETVAL = purple_ssl_get_ops();
	ST(0) = purple_perl_bless_object(RETVAL, "Purple::Ssl::Ops");

	sv_2mortal(ST(0));
    }
    XSRETURN(1);
}


XS(XS_Purple__SSL_is_supported); /* prototype to pass -Wmissing-prototypes */
XS(XS_Purple__SSL_is_supported)
{
#ifdef dVAR
    dVAR; dXSARGS;
#else
    dXSARGS;
#endif
    if (items != 0)
       Perl_croak(aTHX_ "Usage: %s(%s)", "Purple::SSL::is_supported", "");
    PERL_UNUSED_VAR(cv); /* -W */
    {
	gboolean	RETVAL;

	RETVAL = purple_ssl_is_supported();
	ST(0) = boolSV(RETVAL);
	sv_2mortal(ST(0));
    }
    XSRETURN(1);
}


XS(XS_Purple__SSL_read); /* prototype to pass -Wmissing-prototypes */
XS(XS_Purple__SSL_read)
{
#ifdef dVAR
    dVAR; dXSARGS;
#else
    dXSARGS;
#endif
    if (items != 3)
       Perl_croak(aTHX_ "Usage: %s(%s)", "Purple::SSL::read", "gsc, buffer, len");
    PERL_UNUSED_VAR(cv); /* -W */
    {
	Purple__Ssl__Connection	gsc = purple_perl_ref_object(ST(0));
	void *	buffer = INT2PTR(void *,SvIV(ST(1)));
	size_t	len = (size_t)SvUV(ST(2));
	size_t	RETVAL;
	dXSTARG;

	RETVAL = purple_ssl_read(gsc, buffer, len);
	XSprePUSH; PUSHu((UV)RETVAL);
    }
    XSRETURN(1);
}


XS(XS_Purple__SSL_set_ops); /* prototype to pass -Wmissing-prototypes */
XS(XS_Purple__SSL_set_ops)
{
#ifdef dVAR
    dVAR; dXSARGS;
#else
    dXSARGS;
#endif
    if (items != 1)
       Perl_croak(aTHX_ "Usage: %s(%s)", "Purple::SSL::set_ops", "ops");
    PERL_UNUSED_VAR(cv); /* -W */
    {
	Purple__Ssl__Ops	ops = purple_perl_ref_object(ST(0));

	purple_ssl_set_ops(ops);
    }
    XSRETURN_EMPTY;
}


XS(XS_Purple__SSL_write); /* prototype to pass -Wmissing-prototypes */
XS(XS_Purple__SSL_write)
{
#ifdef dVAR
    dVAR; dXSARGS;
#else
    dXSARGS;
#endif
    if (items != 3)
       Perl_croak(aTHX_ "Usage: %s(%s)", "Purple::SSL::write", "gsc, buffer, len");
    PERL_UNUSED_VAR(cv); /* -W */
    {
	Purple__Ssl__Connection	gsc = purple_perl_ref_object(ST(0));
	void *	buffer = INT2PTR(void *,SvIV(ST(1)));
	size_t	len = (size_t)SvUV(ST(2));
	size_t	RETVAL;
	dXSTARG;

	RETVAL = purple_ssl_write(gsc, buffer, len);
	XSprePUSH; PUSHu((UV)RETVAL);
    }
    XSRETURN(1);
}

#ifdef __cplusplus
extern "C"
#endif
XS(boot_Purple__SSL); /* prototype to pass -Wmissing-prototypes */
XS(boot_Purple__SSL)
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

        newXSproto("Purple::SSL::close", XS_Purple__SSL_close, file, "$");
        newXSproto("Purple::SSL::get_ops", XS_Purple__SSL_get_ops, file, "");
        newXSproto("Purple::SSL::is_supported", XS_Purple__SSL_is_supported, file, "");
        newXSproto("Purple::SSL::read", XS_Purple__SSL_read, file, "$$$");
        newXSproto("Purple::SSL::set_ops", XS_Purple__SSL_set_ops, file, "$");
        newXSproto("Purple::SSL::write", XS_Purple__SSL_write, file, "$$$");
    if (PL_unitcheckav)
         call_list(PL_scopestack_ix, PL_unitcheckav);
    XSRETURN_YES;
}

