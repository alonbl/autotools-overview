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
