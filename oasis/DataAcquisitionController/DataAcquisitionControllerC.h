// -*- C++ -*-
// $Id$

/**
 * Code generated by the The ACE ORB (TAO) IDL Compiler v2.1.2
 * TAO and the TAO IDL Compiler have been developed by:
 *       Center for Distributed Object Computing
 *       Washington University
 *       St. Louis, MO
 *       USA
 *       http://www.cs.wustl.edu/~schmidt/doc-center.html
 * and
 *       Distributed Object Computing Laboratory
 *       University of California at Irvine
 *       Irvine, CA
 *       USA
 * and
 *       Institute for Software Integrated Systems
 *       Vanderbilt University
 *       Nashville, TN
 *       USA
 *       http://www.isis.vanderbilt.edu/
 *
 * Information about TAO is available at:
 *     http://www.cs.wustl.edu/~schmidt/TAO.html
 **/

// TAO_IDL - Generated from
// .\be\be_codegen.cpp:152

#ifndef _TAO_IDL_DATAACQUISITIONCONTROLLERC_RP7KUU_H_
#define _TAO_IDL_DATAACQUISITIONCONTROLLERC_RP7KUU_H_

#include /**/ "ace/pre.h"


#include /**/ "ace/config-all.h"

#if !defined (ACE_LACKS_PRAGMA_ONCE)
# pragma once
#endif /* ACE_LACKS_PRAGMA_ONCE */


#include /**/ "DAC_stub_export.h"
#include "tao/ORB.h"
#include "tao/SystemException.h"
#include "tao/UserException.h"
#include "tao/Basic_Types.h"
#include "tao/ORB_Constants.h"
#include "tao/Object.h"
#include "tao/String_Manager_T.h"
#include "tao/Sequence_T.h"
#include "tao/Objref_VarOut_T.h"
#include "tao/Seq_Var_T.h"
#include "tao/Seq_Out_T.h"
#include "tao/VarOut_T.h"
#include "tao/Arg_Traits_T.h"
#include "tao/Basic_Arguments.h"
#include "tao/Special_Basic_Arguments.h"
#include "tao/Any_Insert_Policy_T.h"
#include "tao/Fixed_Size_Argument_T.h"
#include "tao/Var_Size_Argument_T.h"
#include "tao/Object_Argument_T.h"
#include "tao/UB_String_Arguments.h"
#include /**/ "tao/Version.h"
#include /**/ "tao/Versioned_Namespace.h"

#include "Remote_ServiceC.h"

#if TAO_MAJOR_VERSION != 2 || TAO_MINOR_VERSION != 1 || TAO_BETA_VERSION != 2
#error This file should be regenerated with TAO_IDL
#endif

#if defined (TAO_EXPORT_MACRO)
#undef TAO_EXPORT_MACRO
#endif
#define TAO_EXPORT_MACRO OASIS_DAC_STUB_Export

// TAO_IDL - Generated from
// .\be\be_visitor_root\root_ch.cpp:160
TAO_BEGIN_VERSIONED_NAMESPACE_DECL



namespace TAO
{
  template<typename T> class Narrow_Utils;
}
TAO_END_VERSIONED_NAMESPACE_DECL



// TAO_IDL - Generated from
// .\be\be_visitor_module\module_ch.cpp:38

namespace OASIS
{

  // TAO_IDL - Generated from
  // .\be\be_visitor_sequence\sequence_ch.cpp:102

#if !defined (_OASIS_REMOTESERVICELIST_CH_)
#define _OASIS_REMOTESERVICELIST_CH_

  class RemoteServiceList;

  typedef
    ::TAO_VarSeq_Var_T<
        RemoteServiceList
      >
    RemoteServiceList_var;

  typedef
    ::TAO_Seq_Out_T<
        RemoteServiceList
      >
    RemoteServiceList_out;

  class OASIS_DAC_STUB_Export RemoteServiceList
    : public
        ::TAO::unbounded_object_reference_sequence<
            RemoteService,
            RemoteService_var
          >
  {
  public:
    RemoteServiceList (void);
    RemoteServiceList ( ::CORBA::ULong max);
    RemoteServiceList (
      ::CORBA::ULong max,
      ::CORBA::ULong length,
      RemoteService_ptr* buffer,
      ::CORBA::Boolean release = false);
    RemoteServiceList (const RemoteServiceList &);
    virtual ~RemoteServiceList (void);
    

    // TAO_IDL - Generated from
    // .\be\be_type.cpp:307

    
    typedef RemoteServiceList_var _var_type;
    typedef RemoteServiceList_out _out_type;
  };

#endif /* end #if !defined */

  // TAO_IDL - Generated from
  // .\be\be_visitor_exception\exception_ch.cpp:44

  class OASIS_DAC_STUB_Export ServiceNotFound : public ::CORBA::UserException
  {
  public:
    ::TAO::String_Manager name;

    ServiceNotFound (void);
    ServiceNotFound (const ServiceNotFound &);
    ~ServiceNotFound (void);

    ServiceNotFound &operator= (const ServiceNotFound &);

    static ServiceNotFound *_downcast ( ::CORBA::Exception *);
    static const ServiceNotFound *_downcast ( ::CORBA::Exception const *);

    static ::CORBA::Exception *_alloc (void);

    virtual ::CORBA::Exception *_tao_duplicate (void) const;

    virtual void _raise (void) const;

    virtual void _tao_encode (TAO_OutputCDR &cdr) const;
    virtual void _tao_decode (TAO_InputCDR &cdr);

    // TAO_IDL - Generated from
    // .\be\be_visitor_exception\exception_ctor.cpp:54

    ServiceNotFound (
        const char * _tao_name);
  };

  // TAO_IDL - Generated from
  // .\be\be_visitor_exception\exception_ch.cpp:44

  class OASIS_DAC_STUB_Export NoRemoteService : public ::CORBA::UserException
  {
  public:
    ::TAO::String_Manager name;

    NoRemoteService (void);
    NoRemoteService (const NoRemoteService &);
    ~NoRemoteService (void);

    NoRemoteService &operator= (const NoRemoteService &);

    static NoRemoteService *_downcast ( ::CORBA::Exception *);
    static const NoRemoteService *_downcast ( ::CORBA::Exception const *);

    static ::CORBA::Exception *_alloc (void);

    virtual ::CORBA::Exception *_tao_duplicate (void) const;

    virtual void _raise (void) const;

    virtual void _tao_encode (TAO_OutputCDR &cdr) const;
    virtual void _tao_decode (TAO_InputCDR &cdr);

    // TAO_IDL - Generated from
    // .\be\be_visitor_exception\exception_ctor.cpp:54

    NoRemoteService (
        const char * _tao_name);
  };

  // TAO_IDL - Generated from
  // .\be\be_visitor_exception\exception_ch.cpp:44

  class OASIS_DAC_STUB_Export ProbeNotFound : public ::CORBA::UserException
  {
  public:
    ::TAO::String_Manager name;
    ::TAO::String_Manager einode;

    ProbeNotFound (void);
    ProbeNotFound (const ProbeNotFound &);
    ~ProbeNotFound (void);

    ProbeNotFound &operator= (const ProbeNotFound &);

    static ProbeNotFound *_downcast ( ::CORBA::Exception *);
    static const ProbeNotFound *_downcast ( ::CORBA::Exception const *);

    static ::CORBA::Exception *_alloc (void);

    virtual ::CORBA::Exception *_tao_duplicate (void) const;

    virtual void _raise (void) const;

    virtual void _tao_encode (TAO_OutputCDR &cdr) const;
    virtual void _tao_decode (TAO_InputCDR &cdr);

    // TAO_IDL - Generated from
    // .\be\be_visitor_exception\exception_ctor.cpp:54

    ProbeNotFound (
        const char * _tao_name,
        const char * _tao_einode);
  };

  // TAO_IDL - Generated from
  // .\be\be_type.cpp:261

  struct ProbeInstance;

  typedef
    ::TAO_Var_Var_T<
        ProbeInstance
      >
    ProbeInstance_var;

  typedef
    ::TAO_Out_T<
        ProbeInstance
      >
    ProbeInstance_out;

  // TAO_IDL - Generated from
  // .\be\be_visitor_structure\structure_ch.cpp:51

  struct OASIS_DAC_STUB_Export ProbeInstance
  {

    // TAO_IDL - Generated from
    // .\be\be_type.cpp:307

    
    typedef ProbeInstance_var _var_type;
    typedef ProbeInstance_out _out_type;
    
    ::TAO::String_Manager inst_name;
    ::TAO::String_Manager inst_uuid;
    ::TAO::String_Manager inst_type_name;
    ::TAO::String_Manager einode_name;
  };

  // TAO_IDL - Generated from
  // .\be\be_visitor_sequence\sequence_ch.cpp:102

#if !defined (_OASIS_PROBEINSTANCELIST_CH_)
#define _OASIS_PROBEINSTANCELIST_CH_

  class ProbeInstanceList;

  typedef
    ::TAO_VarSeq_Var_T<
        ProbeInstanceList
      >
    ProbeInstanceList_var;

  typedef
    ::TAO_Seq_Out_T<
        ProbeInstanceList
      >
    ProbeInstanceList_out;

  class OASIS_DAC_STUB_Export ProbeInstanceList
    : public
        ::TAO::unbounded_value_sequence<
            ProbeInstance
          >
  {
  public:
    ProbeInstanceList (void);
    ProbeInstanceList ( ::CORBA::ULong max);
    ProbeInstanceList (
      ::CORBA::ULong max,
      ::CORBA::ULong length,
      ProbeInstance* buffer,
      ::CORBA::Boolean release = false);
    ProbeInstanceList (const ProbeInstanceList &);
    virtual ~ProbeInstanceList (void);
    

    // TAO_IDL - Generated from
    // .\be\be_type.cpp:307

    
    typedef ProbeInstanceList_var _var_type;
    typedef ProbeInstanceList_out _out_type;
  };

#endif /* end #if !defined */

  // TAO_IDL - Generated from
  // .\be\be_interface.cpp:750

#if !defined (_OASIS_DATAACQUISITIONCONTROLLER__VAR_OUT_CH_)
#define _OASIS_DATAACQUISITIONCONTROLLER__VAR_OUT_CH_

  class DataAcquisitionController;
  typedef DataAcquisitionController *DataAcquisitionController_ptr;

  typedef
    TAO_Objref_Var_T<
        DataAcquisitionController
      >
    DataAcquisitionController_var;
  
  typedef
    TAO_Objref_Out_T<
        DataAcquisitionController
      >
    DataAcquisitionController_out;

#endif /* end #if !defined */

  // TAO_IDL - Generated from
  // .\be\be_visitor_interface\interface_ch.cpp:43

  class OASIS_DAC_STUB_Export DataAcquisitionController
    : public virtual ::CORBA::Object
  {
  public:
    friend class TAO::Narrow_Utils<DataAcquisitionController>;

    // TAO_IDL - Generated from
    // .\be\be_type.cpp:307

    typedef DataAcquisitionController_ptr _ptr_type;
    typedef DataAcquisitionController_var _var_type;
    typedef DataAcquisitionController_out _out_type;

    // The static operations.
    static DataAcquisitionController_ptr _duplicate (DataAcquisitionController_ptr obj);

    static void _tao_release (DataAcquisitionController_ptr obj);

    static DataAcquisitionController_ptr _narrow (::CORBA::Object_ptr obj);
    static DataAcquisitionController_ptr _unchecked_narrow (::CORBA::Object_ptr obj);
    static DataAcquisitionController_ptr _nil (void);

    virtual char * name (
      void);

    virtual void send_command (
      const char * einode,
      const char * cmdstr);

    virtual ::OASIS::RemoteService_ptr get_service (
      const char * name);

    virtual ::OASIS::RemoteServiceList * get_services (
      void);

    virtual ::OASIS::ProbeInstanceList * get_probe_instances (
      void);

    virtual char * get_schema (
      const char * name,
      const char * einode);

    // TAO_IDL - Generated from
    // .\be\be_visitor_interface\interface_ch.cpp:140

    virtual ::CORBA::Boolean _is_a (const char *type_id);
    virtual const char* _interface_repository_id (void) const;
    virtual ::CORBA::Boolean marshal (TAO_OutputCDR &cdr);
  
  protected:
    // Concrete interface only.
    DataAcquisitionController (void);

    // Concrete non-local interface only.
    DataAcquisitionController (
        ::IOP::IOR *ior,
        TAO_ORB_Core *orb_core);
    
    // Non-local interface only.
    DataAcquisitionController (
        TAO_Stub *objref,
        ::CORBA::Boolean _tao_collocated = false,
        TAO_Abstract_ServantBase *servant = 0,
        TAO_ORB_Core *orb_core = 0);

    virtual ~DataAcquisitionController (void);
  
  private:
    // Private and unimplemented for concrete interfaces.
    DataAcquisitionController (const DataAcquisitionController &);

    void operator= (const DataAcquisitionController &);
  };

// TAO_IDL - Generated from
// .\be\be_visitor_module\module_ch.cpp:67

} // module OASIS

// TAO_IDL - Generated from
// .\be\be_visitor_arg_traits.cpp:68

TAO_BEGIN_VERSIONED_NAMESPACE_DECL


// Arg traits specializations.
namespace TAO
{

  // TAO_IDL - Generated from
  // .\be\be_visitor_arg_traits.cpp:685

  template<>
  class Arg_Traits< ::OASIS::RemoteServiceList>
    : public
        Var_Size_Arg_Traits_T<
            ::OASIS::RemoteServiceList,
            TAO::Any_Insert_Policy_Noop
          >
  {
  };

  // TAO_IDL - Generated from
  // .\be\be_visitor_arg_traits.cpp:947

  template<>
  class Arg_Traits< ::OASIS::ProbeInstance>
    : public
        Var_Size_Arg_Traits_T<
            ::OASIS::ProbeInstance,
            TAO::Any_Insert_Policy_Noop
          >
  {
  };

  // TAO_IDL - Generated from
  // .\be\be_visitor_arg_traits.cpp:685

  template<>
  class Arg_Traits< ::OASIS::ProbeInstanceList>
    : public
        Var_Size_Arg_Traits_T<
            ::OASIS::ProbeInstanceList,
            TAO::Any_Insert_Policy_Noop
          >
  {
  };

  // TAO_IDL - Generated from
  // .\be\be_visitor_arg_traits.cpp:147

#if !defined (_OASIS_DATAACQUISITIONCONTROLLER__ARG_TRAITS_)
#define _OASIS_DATAACQUISITIONCONTROLLER__ARG_TRAITS_

  template<>
  class  Arg_Traits< ::OASIS::DataAcquisitionController>
    : public
        Object_Arg_Traits_T<
            ::OASIS::DataAcquisitionController_ptr,
            ::OASIS::DataAcquisitionController_var,
            ::OASIS::DataAcquisitionController_out,
            TAO::Objref_Traits<OASIS::DataAcquisitionController>,
            TAO::Any_Insert_Policy_Noop
          >
  {
  };

#endif /* end #if !defined */
}

TAO_END_VERSIONED_NAMESPACE_DECL



// TAO_IDL - Generated from
// .\be\be_visitor_traits.cpp:62

TAO_BEGIN_VERSIONED_NAMESPACE_DECL

// Traits specializations.
namespace TAO
{

#if !defined (_OASIS_DATAACQUISITIONCONTROLLER__TRAITS_)
#define _OASIS_DATAACQUISITIONCONTROLLER__TRAITS_

  template<>
  struct OASIS_DAC_STUB_Export Objref_Traits< ::OASIS::DataAcquisitionController>
  {
    static ::OASIS::DataAcquisitionController_ptr duplicate (
        ::OASIS::DataAcquisitionController_ptr p);
    static void release (
        ::OASIS::DataAcquisitionController_ptr p);
    static ::OASIS::DataAcquisitionController_ptr nil (void);
    static ::CORBA::Boolean marshal (
        const ::OASIS::DataAcquisitionController_ptr p,
        TAO_OutputCDR & cdr);
  };

#endif /* end #if !defined */
}
TAO_END_VERSIONED_NAMESPACE_DECL



// TAO_IDL - Generated from
// .\be\be_visitor_sequence\cdr_op_ch.cpp:68

#if !defined _TAO_CDR_OP_OASIS_RemoteServiceList_H_
#define _TAO_CDR_OP_OASIS_RemoteServiceList_H_
TAO_BEGIN_VERSIONED_NAMESPACE_DECL


OASIS_DAC_STUB_Export ::CORBA::Boolean operator<< (
    TAO_OutputCDR &strm,
    const OASIS::RemoteServiceList &_tao_sequence);
OASIS_DAC_STUB_Export ::CORBA::Boolean operator>> (
    TAO_InputCDR &strm,
    OASIS::RemoteServiceList &_tao_sequence);

TAO_END_VERSIONED_NAMESPACE_DECL



#endif /* _TAO_CDR_OP_OASIS_RemoteServiceList_H_ */

// TAO_IDL - Generated from
// .\be\be_visitor_exception\cdr_op_ch.cpp:40
TAO_BEGIN_VERSIONED_NAMESPACE_DECL



OASIS_DAC_STUB_Export ::CORBA::Boolean operator<< (TAO_OutputCDR &, const OASIS::ServiceNotFound &);
OASIS_DAC_STUB_Export ::CORBA::Boolean operator>> (TAO_InputCDR &, OASIS::ServiceNotFound &);

TAO_END_VERSIONED_NAMESPACE_DECL



// TAO_IDL - Generated from
// .\be\be_visitor_exception\cdr_op_ch.cpp:40
TAO_BEGIN_VERSIONED_NAMESPACE_DECL



OASIS_DAC_STUB_Export ::CORBA::Boolean operator<< (TAO_OutputCDR &, const OASIS::NoRemoteService &);
OASIS_DAC_STUB_Export ::CORBA::Boolean operator>> (TAO_InputCDR &, OASIS::NoRemoteService &);

TAO_END_VERSIONED_NAMESPACE_DECL



// TAO_IDL - Generated from
// .\be\be_visitor_exception\cdr_op_ch.cpp:40
TAO_BEGIN_VERSIONED_NAMESPACE_DECL



OASIS_DAC_STUB_Export ::CORBA::Boolean operator<< (TAO_OutputCDR &, const OASIS::ProbeNotFound &);
OASIS_DAC_STUB_Export ::CORBA::Boolean operator>> (TAO_InputCDR &, OASIS::ProbeNotFound &);

TAO_END_VERSIONED_NAMESPACE_DECL



// TAO_IDL - Generated from
// .\be\be_visitor_structure\cdr_op_ch.cpp:46


TAO_BEGIN_VERSIONED_NAMESPACE_DECL

OASIS_DAC_STUB_Export ::CORBA::Boolean operator<< (TAO_OutputCDR &, const OASIS::ProbeInstance &);
OASIS_DAC_STUB_Export ::CORBA::Boolean operator>> (TAO_InputCDR &, OASIS::ProbeInstance &);

TAO_END_VERSIONED_NAMESPACE_DECL



// TAO_IDL - Generated from
// .\be\be_visitor_sequence\cdr_op_ch.cpp:68

#if !defined _TAO_CDR_OP_OASIS_ProbeInstanceList_H_
#define _TAO_CDR_OP_OASIS_ProbeInstanceList_H_
TAO_BEGIN_VERSIONED_NAMESPACE_DECL


OASIS_DAC_STUB_Export ::CORBA::Boolean operator<< (
    TAO_OutputCDR &strm,
    const OASIS::ProbeInstanceList &_tao_sequence);
OASIS_DAC_STUB_Export ::CORBA::Boolean operator>> (
    TAO_InputCDR &strm,
    OASIS::ProbeInstanceList &_tao_sequence);

TAO_END_VERSIONED_NAMESPACE_DECL



#endif /* _TAO_CDR_OP_OASIS_ProbeInstanceList_H_ */

// TAO_IDL - Generated from
// .\be\be_visitor_interface\cdr_op_ch.cpp:44

TAO_BEGIN_VERSIONED_NAMESPACE_DECL

OASIS_DAC_STUB_Export ::CORBA::Boolean operator<< (TAO_OutputCDR &, const OASIS::DataAcquisitionController_ptr );
OASIS_DAC_STUB_Export ::CORBA::Boolean operator>> (TAO_InputCDR &, OASIS::DataAcquisitionController_ptr &);

TAO_END_VERSIONED_NAMESPACE_DECL



// TAO_IDL - Generated from
// .\be\be_codegen.cpp:1703
#if defined (__ACE_INLINE__)
#include "DataAcquisitionControllerC.inl"
#endif /* defined INLINE */

#include /**/ "ace/post.h"

#endif /* ifndef */
