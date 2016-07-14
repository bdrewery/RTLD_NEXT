PROGS=	test test_linked

MAN=

LDADD.test_linked+=	-Llib1 -llib1
LDFLAGS+= -Wl,-rpath,${.CURDIR}/lib1

SUBDIR+= lib1
all: lib1

.include <bsd.progs.mk>
