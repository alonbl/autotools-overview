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
