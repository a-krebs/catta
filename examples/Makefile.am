# This file is part of catta.
#
# catta is free software; you can redistribute it and/or modify it
# under the terms of the GNU Lesser General Public License as
# published by the Free Software Foundation; either version 2 of the
# License, or (at your option) any later version.
#
# catta is distributed in the hope that it will be useful, but WITHOUT
# ANY WARRANTY; without even the implied warranty of MERCHANTABILITY
# or FITNESS FOR A PARTICULAR PURPOSE. See the GNU General Public
# License for more details.
#
# You should have received a copy of the GNU Lesser General Public
# License along with catta; if not, write to the Free Software
# Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA 02111-1307
# USA.

AM_CFLAGS=-I$(top_srcdir)/include

if ENABLE_TESTS
noinst_PROGRAMS = \
	core-publish-service \
	core-browse-services
endif

core_publish_service_SOURCES = core-publish-service.c
core_publish_service_CFLAGS = $(AM_CFLAGS)
core_publish_service_LDADD = $(AM_LDADD) ../src/libcatta.la

core_browse_services_SOURCES = core-browse-services.c
core_browse_services_CFLAGS = $(AM_CFLAGS)
core_browse_services_LDADD = $(AM_LDADD) ../src/libcatta.la
