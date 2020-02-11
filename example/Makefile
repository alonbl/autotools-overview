PACKAGE_NAME = example1
PACKAGE_VERSION = 0.0.0
EXEEXT =
CROSS_COMPILE =
CC = $(CROSS_COMPILE)gcc
INSTALL = install
MY_VAR1 = myvar1
MY_VAR2 = myvar2
DEFS = -DMY_VAR1="\"$(MY_VAR1)\"" -DMY_VAR2="$(MY_VAR2)"
CFLAGS =
LDFLAGS =
LIBS =
prefix = /usr/local
bindir = $(prefix)/bin
docdir = $(prefix)/share/doc/$(PACKAGE_NAME)

all:		\
		prog1$(EXEEXT) \
		README.md \
		$(NULL)

clean:
	rm -f prog1$(EXEEXT)
	rm -f README.md

install:	all
	$(INSTALL) -d -m 755 "$(DESTDIR)$(bindir)"
	$(INSTALL) -m 755 prog1$(EXEEXT) "$(DESTDIR)$(bindir)"
	$(INSTALL) -d -m 755 "$(DESTDIR)$(docdir)"
	$(INSTALL) -m 644 README.md "$(DESTDIR)$(docdir)"

uninstall:
	rm -f "$(DESTDIR)$(bindir)/prog1$(EXEEXT)"
	rm -f "$(DESTDIR)$(docdir)/README.md"

prog1$(EXEEXT):		\
		main.c \
		common.c \
		$(NULL)
	$(CC) -o $@ $(CPPFLAGS) $(CFLAGS) $(DEFS) $^ $(LDFLAGS) $(LIBS)

%: %.in
	sed \
		-e 's/@PACKAGE_VERSION@/$(PACKAGE_VERSION)/g' \
		-e 's/@MY_VAR2@/$(MY_VAR2)/g' \
		"$^" > "$@"
