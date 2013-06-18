EXTRA_DIST = $(aegis_DATA)
aegisdir   = ../debian
aegis_DATA = ohm-plugins-misc.aegis

CLEANFILES = $(aegis_DATA)

ohm-plugins-misc.aegis: ohm-plugins-misc.credentials
	../scripts/gen-aegis-config.sh \
            --path /usr/bin/ohm-session-agent $(shell pwd) > $@
