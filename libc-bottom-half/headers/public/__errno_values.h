#ifndef __wasilibc___errno_values_h
#define __wasilibc___errno_values_h

#include <wasix/api.h>

#define E2BIG __WASI_ERRNO_2BIG
#define EACCES __WASI_ERRNO_ACCES
#define EADDRINUSE __WASI_ERRNO_ADDRINUSE
#define EADDRNOTAVAIL __WASI_ERRNO_ADDRNOTAVAIL
#define EAFNOSUPPORT __WASI_ERRNO_AFNOSUPPORT
#define EAGAIN __WASI_ERRNO_AGAIN
#define EALREADY __WASI_ERRNO_ALREADY
#define EBADF __WASI_ERRNO_BADF
#define EBADMSG __WASI_ERRNO_BADMSG
#define EBUSY __WASI_ERRNO_BUSY
#define ECANCELED __WASI_ERRNO_CANCELED
#define ECHILD __WASI_ERRNO_CHILD
#define ECONNABORTED __WASI_ERRNO_CONNABORTED
#define ECONNREFUSED __WASI_ERRNO_CONNREFUSED
#define ECONNRESET __WASI_ERRNO_CONNRESET
#define EDEADLK __WASI_ERRNO_DEADLK
#define EDESTADDRREQ __WASI_ERRNO_DESTADDRREQ
#define EDOM __WASI_ERRNO_DOM
#define EDQUOT __WASI_ERRNO_DQUOT
#define EEXIST __WASI_ERRNO_EXIST
#define EFAULT __WASI_ERRNO_FAULT
#define EFBIG __WASI_ERRNO_FBIG
#define EHOSTUNREACH __WASI_ERRNO_HOSTUNREACH
#define EIDRM __WASI_ERRNO_IDRM
#define EILSEQ __WASI_ERRNO_ILSEQ
#define EINPROGRESS __WASI_ERRNO_INPROGRESS
#define EINTR __WASI_ERRNO_INTR
#define EINVAL __WASI_ERRNO_INVAL
#define EIO __WASI_ERRNO_IO
#define EISCONN __WASI_ERRNO_ISCONN
#define EISDIR __WASI_ERRNO_ISDIR
#define ELOOP __WASI_ERRNO_LOOP
#define EMFILE __WASI_ERRNO_MFILE
#define EMLINK __WASI_ERRNO_MLINK
#define EMSGSIZE __WASI_ERRNO_MSGSIZE
#define EMULTIHOP __WASI_ERRNO_MULTIHOP
#define ENAMETOOLONG __WASI_ERRNO_NAMETOOLONG
#define ENETDOWN __WASI_ERRNO_NETDOWN
#define ENETRESET __WASI_ERRNO_NETRESET
#define ENETUNREACH __WASI_ERRNO_NETUNREACH
#define ENFILE __WASI_ERRNO_NFILE
#define ENOBUFS __WASI_ERRNO_NOBUFS
#define ENODEV __WASI_ERRNO_NODEV
#define ENOENT __WASI_ERRNO_NOENT
#define ENOEXEC __WASI_ERRNO_NOEXEC
#define ENOLCK __WASI_ERRNO_NOLCK
#define ENOLINK __WASI_ERRNO_NOLINK
#define ENOMEM __WASI_ERRNO_NOMEM
#define ENOMSG __WASI_ERRNO_NOMSG
#define ENOPROTOOPT __WASI_ERRNO_NOPROTOOPT
#define ENOSPC __WASI_ERRNO_NOSPC
#define ENOSYS __WASI_ERRNO_NOSYS
#define ENOTCONN __WASI_ERRNO_NOTCONN
#define ENOTDIR __WASI_ERRNO_NOTDIR
#define ENOTEMPTY __WASI_ERRNO_NOTEMPTY
#define ENOTRECOVERABLE __WASI_ERRNO_NOTRECOVERABLE
#define ENOTSOCK __WASI_ERRNO_NOTSOCK
#define ENOTSUP __WASI_ERRNO_NOTSUP
#define ENOTTY __WASI_ERRNO_NOTTY
#define ENXIO __WASI_ERRNO_NXIO
#define EOVERFLOW __WASI_ERRNO_OVERFLOW
#define EOWNERDEAD __WASI_ERRNO_OWNERDEAD
#define EPERM __WASI_ERRNO_PERM
#define EPIPE __WASI_ERRNO_PIPE
#define EPROTO __WASI_ERRNO_PROTO
#define EPROTONOSUPPORT __WASI_ERRNO_PROTONOSUPPORT
#define EPROTOTYPE __WASI_ERRNO_PROTOTYPE
#define ERANGE __WASI_ERRNO_RANGE
#define EROFS __WASI_ERRNO_ROFS
#define ESPIPE __WASI_ERRNO_SPIPE
#define ESRCH __WASI_ERRNO_SRCH
#define ESTALE __WASI_ERRNO_STALE
#define ETIMEDOUT __WASI_ERRNO_TIMEDOUT
#define ETXTBSY __WASI_ERRNO_TXTBSY
#define EXDEV __WASI_ERRNO_XDEV
#define ENOTCAPABLE __WASI_ERRNO_NOTCAPABLE

#define EOPNOTSUPP ENOTSUP
#define EWOULDBLOCK EAGAIN

#endif
