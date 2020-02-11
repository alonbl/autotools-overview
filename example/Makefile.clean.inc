# autoconf junk
MAINTAINERCLEANFILES += \
	$(srcdir)/aclocal.m4 \
	$(srcdir)/compile \
	$(srcdir)/config.h.in \
	$(srcdir)/config.h.in~ \
	$(srcdir)/configure \
	$(srcdir)/depcomp \
	$(srcdir)/install-sh \
	$(srcdir)/missing \
	$(srcdir)/config.guess \
	$(srcdir)/config.sub \
	$(NULL)
# automake junk
MAINTAINERCLEANFILES += \
	$(srcdir)/Makefile.in \
	$(srcdir)/test-driver \
	$(NULL)
# libtool junk
MAINTAINERCLEANFILES += \
	$(srcdir)/ltmain.sh \
	$(srcdir)/m4/libtool.m4 \
	$(srcdir)/m4/ltoptions.m4 \
	$(srcdir)/m4/ltsugar.m4 \
	$(srcdir)/m4/ltversion.m4 \
	$(srcdir)/m4/lt~obsolete.m4 \
	$(NULL)
# gettext junk
MAINTAINERCLEANFILES += \
	$(srcdir)/ABOUT-NLS \
	$(srcdir)/ChangeLog \
	$(srcdir)/config.rpath \
	$(srcdir)/m4/ChangeLog \
	$(srcdir)/m4/gettext.m4 \
	$(srcdir)/m4/host-cpu-c-abi.m4 \
	$(srcdir)/m4/iconv.m4 \
	$(srcdir)/m4/intlmacosx.m4 \
	$(srcdir)/m4/lib-ld.m4 \
	$(srcdir)/m4/lib-link.m4 \
	$(srcdir)/m4/lib-prefix.m4 \
	$(srcdir)/m4/nls.m4 \
	$(srcdir)/m4/po.m4 \
	$(srcdir)/m4/progtest.m4 \
	$(srcdir)/po/ChangeLog \
	$(srcdir)/po/Makefile.in.in \
	$(srcdir)/po/Makevars.template \
	$(srcdir)/po/Rules-quot \
	$(srcdir)/po/boldquot.sed \
	$(srcdir)/po/en@boldquot.header \
	$(srcdir)/po/en@quot.header \
	$(srcdir)/po/insert-header.sin \
	$(srcdir)/po/quot.sed \
	$(srcdir)/po/remove-potcdate.sin \
	$(NULL)
