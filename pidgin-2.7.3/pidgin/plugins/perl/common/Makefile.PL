use 5.006;
use ExtUtils::MakeMaker;
# See lib/ExtUtils/MakeMaker.pm for details of how to influence the contents
# of the Makefile that is written.
WriteMakefile(
    'NAME'             => 'Pidgin',
    'VERSION_FROM'     => './Pidgin.pm', # finds $VERSION
    ($] >= 5.005 ? ## Add these new keywords supported since 5.005
      ('ABSTRACT_FROM' => './Pidgin.pm', # finds $ABSTRACT
       'AUTHOR'        => 'Pidgin <http://pidgin.im/>') :  ()),
    'DEFINE'        => '-Wall  -DPURPLE_DISABLE_DEPRECATED -DPIDGIN_DISABLE_DEPRECATED -DFINCH_DISABLE_DEPRECATED -DGNT_DISABLE_DEPRECATED',
    'INC'           => '-I. -I. -I../../../.. -I../../../../libpurple -I../../../../pidgin ',
    'OBJECT'        => '$(O_FILES)', # link all the C files too
    'TYPEMAPS'      => ["../../../../libpurple/plugins/perl/common/typemap"],
#    'OPTIMIZE'      => '-g', # For debugging.
    'INSTALLDIRS'          => 'vendor',
    'INSTALL_BASE'         => '$(prefix)',
    'INSTALLVENDORARCH'    => '$(libdir)/pidgin/perl',
    'INSTALLVENDORMAN3DIR' => '$(mandir)/man3',
    'macro'                => {
        'prefix'      => '/usr/local',
        'exec_prefix' => '${prefix}',
        'libdir'      => '${exec_prefix}/lib',
        'mandir'      => '${datarootdir}/man',
        'datarootdir' => '${prefix}/share',
    },
);
