// file      : Utility/Synch/Policy/Null.ipp
// author    : Boris Kolpackov <boris@kolpackov.net>
// copyright : Copyright (c) 2002-2003 Boris Kolpackov
// license   : http://kolpackov.net/license.html

namespace Utility
{
  namespace Synch
  {
    namespace Policy
    {
      inline NullGuard::
      NullGuard (NullMutex&) throw ()
      {
      }
    }
  }
}

//$Id: Null.ipp 80826 2008-03-04 14:51:23Z wotte $
