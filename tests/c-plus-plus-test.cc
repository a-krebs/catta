/* $Id$ */

/***
  This file is part of avahi.
 
  avahi is free software; you can redistribute it and/or modify it
  under the terms of the GNU Lesser General Public License as
  published by the Free Software Foundation; either version 2.1 of the
  License, or (at your option) any later version.
 
  avahi is distributed in the hope that it will be useful, but WITHOUT
  ANY WARRANTY; without even the implied warranty of MERCHANTABILITY
  or FITNESS FOR A PARTICULAR PURPOSE. See the GNU Lesser General
  Public License for more details.
 
  You should have received a copy of the GNU Lesser General Public
  License along with avahi; if not, write to the Free Software
  Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA 02111-1307
  USA.
***/

#include <avahi-common/error.h>
#include <avahi-common/strlst.h>
#include <avahi-common/simple-watch.h>
#include <avahi-common/dbus.h>
#include <avahi-common/timeval.h>
#include <avahi-common/watch.h>
#include <avahi-common/malloc.h>
#include <avahi-common/domain.h>
#include <avahi-common/cdecl.h>
#include <avahi-common/alternative.h>
#include <avahi-common/gccmacro.h>
#include <avahi-common/defs.h>
#include <avahi-common/address.h>
#include <avahi-common/llist.h>
#include <avahi-core/query-sched.h>
#include <avahi-core/probe-sched.h>
#include <avahi-core/announce.h>
#include <avahi-core/util.h>
#include <avahi-core/rrlist.h>
#include <avahi-core/dns.h>
#include <avahi-core/fdutil.h>
#include <avahi-core/core.h>
#include <avahi-core/prioq.h>
#include <avahi-core/browse.h>
#include <avahi-core/netlink.h>
#include <avahi-core/cache.h>
#include <avahi-core/server.h>
#include <avahi-core/socket.h>
#include <avahi-core/rr.h>
#include <avahi-core/iface.h>
#include <avahi-core/hashmap.h>
#include <avahi-core/log.h>
#include <avahi-core/timeeventq.h>
#include <avahi-core/response-sched.h>
#include <avahi-client/internal.h>
#include <avahi-client/client.h>

int main(int argc, char*argv[]) {
    return 0;
}
