/*
 * This file was generated automatically by ExtUtils::ParseXS version 2.18_02 from the
 * contents of Sound.xs. Do not edit this file, edit Sound.xs instead.
 *
 *	ANY CHANGES MADE HERE WILL BE LOST! 
 *
 */

#line 1 "Sound.xs"
#include "module.h"

#ifndef PERL_UNUSED_VAR
#  define PERL_UNUSED_VAR(var) if (0) var = var
#endif

#line 17 "Sound.c"

XS(XS_Purple__Sound_play_event); /* prototype to pass -Wmissing-prototypes */
XS(XS_Purple__Sound_play_event)
{
#ifdef dVAR
    dVAR; dXSARGS;
#else
    dXSARGS;
#endif
    if (items != 2)
       Perl_croak(aTHX_ "Usage: %s(%s)", "Purple::Sound::play_event", "event, account");
    PERL_UNUSED_VAR(cv); /* -W */
    {
	Purple__SoundEventID	event = (Purple__SoundEventID)SvIV(ST(0));
	Purple__Account	account = purple_perl_ref_object(ST(1));

	purple_sound_play_event(event, account);
    }
    XSRETURN_EMPTY;
}


XS(XS_Purple__Sound_play_file); /* prototype to pass -Wmissing-prototypes */
XS(XS_Purple__Sound_play_file)
{
#ifdef dVAR
    dVAR; dXSARGS;
#else
    dXSARGS;
#endif
    if (items != 2)
       Perl_croak(aTHX_ "Usage: %s(%s)", "Purple::Sound::play_file", "filename, account");
    PERL_UNUSED_VAR(cv); /* -W */
    {
	const char *	filename = (const char *)SvPV_nolen(ST(0));
	Purple__Account	account = purple_perl_ref_object(ST(1));

	purple_sound_play_file(filename, account);
    }
    XSRETURN_EMPTY;
}

#ifdef __cplusplus
extern "C"
#endif
XS(boot_Purple__Sound); /* prototype to pass -Wmissing-prototypes */
XS(boot_Purple__Sound)
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

        newXSproto("Purple::Sound::play_event", XS_Purple__Sound_play_event, file, "$$");
        newXSproto("Purple::Sound::play_file", XS_Purple__Sound_play_file, file, "$$");

    /* Initialisation Section */

#line 7 "Sound.xs"
{
	HV *stash = gv_stashpv("Purple::SoundEventID", 1);

	static const constiv *civ, const_iv[] = {
#define const_iv(name) {#name, (IV)PURPLE_SOUND_##name}
		const_iv(BUDDY_ARRIVE),
		const_iv(BUDDY_LEAVE),
		const_iv(RECEIVE),
		const_iv(FIRST_RECEIVE),
		const_iv(SEND),
		const_iv(CHAT_JOIN),
		const_iv(CHAT_LEAVE),
		const_iv(CHAT_YOU_SAY),
		const_iv(CHAT_SAY),
		const_iv(POUNCE_DEFAULT),
		const_iv(CHAT_NICK),
	};

	for (civ = const_iv + sizeof(const_iv) / sizeof(const_iv[0]); civ-- > const_iv; )
		newCONSTSUB(stash, (char *)civ->name, newSViv(civ->iv));
}

#line 105 "Sound.c"

    /* End of Initialisation Section */

    if (PL_unitcheckav)
         call_list(PL_scopestack_ix, PL_unitcheckav);
    XSRETURN_YES;
}

