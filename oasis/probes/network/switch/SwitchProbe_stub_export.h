// -*- C++ -*-
// ------------------------------

#ifndef _OASIS_SWITCHPROBE_STUB_EXPORT_H
#define _OASIS_SWITCHPROBE_STUB_EXPORT_H

#include "ace/config-all.h"
#include "oasis/config.h"

#if defined (ACE_AS_STATIC_LIBS) && !defined (OASIS_SWITCHPROBE_STUB_HAS_DLL)
#  define OASIS_SWITCHPROBE_STUB_HAS_DLL 0
#endif /* ACE_AS_STATIC_LIBS && OASIS_SWITCHPROBE_STUB_HAS_DLL */

#if !defined (OASIS_SWITCHPROBE_STUB_HAS_DLL)
#  define OASIS_SWITCHPROBE_STUB_HAS_DLL 1
#endif /* ! OASIS_SWITCHPROBE_STUB_HAS_DLL */

#if defined (OASIS_SWITCHPROBE_STUB_HAS_DLL) && (OASIS_SWITCHPROBE_STUB_HAS_DLL == 1)
#  if defined (OASIS_SWITCHPROBE_STUB_BUILD_DLL)
#    define OASIS_SWITCHPROBE_STUB_Export ACE_Proper_Export_Flag
#    define OASIS_SWITCHPROBE_STUB_SINGLETON_DECLARATION(T) ACE_EXPORT_SINGLETON_DECLARATION (T)
#    define OASIS_SWITCHPROBE_STUB_SINGLETON_DECLARE(SINGLETON_TYPE, CLASS, LOCK) ACE_EXPORT_SINGLETON_DECLARE(SINGLETON_TYPE, CLASS, LOCK)
#  else /* OASIS_SWITCHPROBE_STUB_BUILD_DLL */
#    define OASIS_SWITCHPROBE_STUB_Export ACE_Proper_Import_Flag
#    define OASIS_SWITCHPROBE_STUB_SINGLETON_DECLARATION(T) ACE_IMPORT_SINGLETON_DECLARATION (T)
#    define OASIS_SWITCHPROBE_STUB_SINGLETON_DECLARE(SINGLETON_TYPE, CLASS, LOCK) ACE_IMPORT_SINGLETON_DECLARE(SINGLETON_TYPE, CLASS, LOCK)
#  endif /* OASIS_SWITCHPROBE_STUB_BUILD_DLL */
#else /* OASIS_SWITCHPROBE_STUB_HAS_DLL == 1 */
#  define OASIS_SWITCHPROBE_STUB_Export
#  define OASIS_SWITCHPROBE_STUB_SINGLETON_DECLARATION(T)
#  define OASIS_SWITCHPROBE_STUB_SINGLETON_DECLARE(SINGLETON_TYPE, CLASS, LOCK)
#endif /* OASIS_SWITCHPROBE_STUB_HAS_DLL == 1 */

// Set OASIS_SWITCHPROBE_STUB_NTRACE = 0 to turn on library specific tracing even if
// tracing is turned off for ACE.
#if !defined (OASIS_SWITCHPROBE_STUB_NTRACE)
#  if (ACE_NTRACE == 1)
#    define OASIS_SWITCHPROBE_STUB_NTRACE 1
#  else /* (ACE_NTRACE == 1) */
#    define OASIS_SWITCHPROBE_STUB_NTRACE 0
#  endif /* (ACE_NTRACE == 1) */
#endif /* !OASIS_SWITCHPROBE_STUB_NTRACE */

#if (OASIS_SWITCHPROBE_STUB_NTRACE == 1)
#  define OASIS_SWITCHPROBE_STUB_TRACE(X)
#else /* (OASIS_SWITCHPROBE_STUB_NTRACE == 1) */
#  if !defined (ACE_HAS_TRACE)
#    define ACE_HAS_TRACE
#  endif /* ACE_HAS_TRACE */
#  define OASIS_SWITCHPROBE_STUB_TRACE(X) ACE_TRACE_IMPL(X)
#  include "ace/Trace.h"
#endif /* (OASIS_SWITCHPROBE_STUB_NTRACE == 1) */

#endif /* OASIS_SWITCHPROBE_STUB_EXPORT_H */

// End of auto generated file.
