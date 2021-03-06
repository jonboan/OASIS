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

#ifndef _TAO_IDL_DATACHANNELC_PRFO6M_H_
#define _TAO_IDL_DATACHANNELC_PRFO6M_H_

#include /**/ "ace/pre.h"


#include /**/ "ace/config-all.h"

#if !defined (ACE_LACKS_PRAGMA_ONCE)
# pragma once
#endif /* ACE_LACKS_PRAGMA_ONCE */


#include /**/ "OASIS_Tao_DataChannel_stub_export.h"
#include "tao/ORB.h"
#include "tao/SystemException.h"
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

#include "oasis/middleware/tao/OASIS_UUIDC.h"
#include "CommandChannelC.h"

#if TAO_MAJOR_VERSION != 2 || TAO_MINOR_VERSION != 1 || TAO_BETA_VERSION != 2
#error This file should be regenerated with TAO_IDL
#endif

#if defined (TAO_EXPORT_MACRO)
#undef TAO_EXPORT_MACRO
#endif
#define TAO_EXPORT_MACRO OASIS_TAO_DATACHANNEL_STUB_Export

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
  // .\be\be_type.cpp:261

  struct TimeValue;

  typedef
    ::TAO_Fixed_Var_T<
        TimeValue
      >
    TimeValue_var;

  typedef
    TimeValue &
    TimeValue_out;

  // TAO_IDL - Generated from
  // .\be\be_visitor_structure\structure_ch.cpp:51

  struct OASIS_TAO_DATACHANNEL_STUB_Export TimeValue
  {

    // TAO_IDL - Generated from
    // .\be\be_type.cpp:307

    
    typedef TimeValue_var _var_type;
    typedef TimeValue_out _out_type;
    
    ::CORBA::ULong sec;
    ::CORBA::ULong usec;
  };

  // TAO_IDL - Generated from
  // .\be\be_visitor_sequence\sequence_ch.cpp:102

#if !defined (_OASIS_BINARYDATA_CH_)
#define _OASIS_BINARYDATA_CH_

  class BinaryData;

  typedef
    ::TAO_FixedSeq_Var_T<
        BinaryData
      >
    BinaryData_var;

  typedef
    ::TAO_Seq_Out_T<
        BinaryData
      >
    BinaryData_out;

  class OASIS_TAO_DATACHANNEL_STUB_Export BinaryData
    : public
        ::TAO::unbounded_value_sequence<
            ::CORBA::Octet
          >
  {
  public:
    BinaryData (void);
    BinaryData ( ::CORBA::ULong max);
    BinaryData (
      ::CORBA::ULong max,
      ::CORBA::ULong length,
      ::CORBA::Octet* buffer,
      ::CORBA::Boolean release = false);
    BinaryData (const BinaryData &);
    virtual ~BinaryData (void);
    

    // TAO_IDL - Generated from
    // .\be\be_type.cpp:307

    
    typedef BinaryData_var _var_type;
    typedef BinaryData_out _out_type;

    

#if (TAO_NO_COPY_OCTET_SEQUENCES == 1)
    BinaryData (
        ::CORBA::ULong length,
        const ACE_Message_Block* mb
      )
      : ::TAO::unbounded_value_sequence< ::CORBA::Octet> (length, mb) {}
#endif /* TAO_NO_COPY_OCTET_SEQUENCE == 1 */
  };

#endif /* end #if !defined */

  // TAO_IDL - Generated from
  // .\be\be_type.cpp:261

  struct DataPacket;

  typedef
    ::TAO_Var_Var_T<
        DataPacket
      >
    DataPacket_var;

  typedef
    ::TAO_Out_T<
        DataPacket
      >
    DataPacket_out;

  // TAO_IDL - Generated from
  // .\be\be_visitor_structure\structure_ch.cpp:51

  struct OASIS_TAO_DATACHANNEL_STUB_Export DataPacket
  {

    // TAO_IDL - Generated from
    // .\be\be_type.cpp:307

    
    typedef DataPacket_var _var_type;
    typedef DataPacket_out _out_type;
    
    OASIS::UUID einode_uuid;
    ::CORBA::Long byte_order;
    OASIS::BinaryData data;
  };

  // TAO_IDL - Generated from
  // .\be\be_type.cpp:261

  struct SoftwareProbeMetadata;

  typedef
    ::TAO_Var_Var_T<
        SoftwareProbeMetadata
      >
    SoftwareProbeMetadata_var;

  typedef
    ::TAO_Out_T<
        SoftwareProbeMetadata
      >
    SoftwareProbeMetadata_out;

  // TAO_IDL - Generated from
  // .\be\be_visitor_structure\structure_ch.cpp:51

  struct OASIS_TAO_DATACHANNEL_STUB_Export SoftwareProbeMetadata
  {

    // TAO_IDL - Generated from
    // .\be\be_type.cpp:307

    
    typedef SoftwareProbeMetadata_var _var_type;
    typedef SoftwareProbeMetadata_out _out_type;
    
    OASIS::UUID uuid;
    ::TAO::String_Manager type;
    ::CORBA::Octet version_major;
    ::CORBA::Octet version_minor;
    ::TAO::String_Manager schema;
  };

  // TAO_IDL - Generated from
  // .\be\be_type.cpp:261

  struct SoftwareProbeEntry;

  typedef
    ::TAO_Var_Var_T<
        SoftwareProbeEntry
      >
    SoftwareProbeEntry_var;

  typedef
    ::TAO_Out_T<
        SoftwareProbeEntry
      >
    SoftwareProbeEntry_out;

  // TAO_IDL - Generated from
  // .\be\be_visitor_structure\structure_ch.cpp:51

  struct OASIS_TAO_DATACHANNEL_STUB_Export SoftwareProbeEntry
  {

    // TAO_IDL - Generated from
    // .\be\be_type.cpp:307

    
    typedef SoftwareProbeEntry_var _var_type;
    typedef SoftwareProbeEntry_out _out_type;
    
    ::TAO::String_Manager name;
    OASIS::SoftwareProbeMetadata metadata;
  };

  // TAO_IDL - Generated from
  // .\be\be_visitor_sequence\sequence_ch.cpp:102

#if !defined (_OASIS_SOFTWAREPROBEENTRYSEQ_CH_)
#define _OASIS_SOFTWAREPROBEENTRYSEQ_CH_

  class SoftwareProbeEntrySeq;

  typedef
    ::TAO_VarSeq_Var_T<
        SoftwareProbeEntrySeq
      >
    SoftwareProbeEntrySeq_var;

  typedef
    ::TAO_Seq_Out_T<
        SoftwareProbeEntrySeq
      >
    SoftwareProbeEntrySeq_out;

  class OASIS_TAO_DATACHANNEL_STUB_Export SoftwareProbeEntrySeq
    : public
        ::TAO::unbounded_value_sequence<
            SoftwareProbeEntry
          >
  {
  public:
    SoftwareProbeEntrySeq (void);
    SoftwareProbeEntrySeq ( ::CORBA::ULong max);
    SoftwareProbeEntrySeq (
      ::CORBA::ULong max,
      ::CORBA::ULong length,
      SoftwareProbeEntry* buffer,
      ::CORBA::Boolean release = false);
    SoftwareProbeEntrySeq (const SoftwareProbeEntrySeq &);
    virtual ~SoftwareProbeEntrySeq (void);
    

    // TAO_IDL - Generated from
    // .\be\be_type.cpp:307

    
    typedef SoftwareProbeEntrySeq_var _var_type;
    typedef SoftwareProbeEntrySeq_out _out_type;
  };

#endif /* end #if !defined */

  // TAO_IDL - Generated from
  // .\be\be_type.cpp:261

  struct EINodeRegistration;

  typedef
    ::TAO_Var_Var_T<
        EINodeRegistration
      >
    EINodeRegistration_var;

  typedef
    ::TAO_Out_T<
        EINodeRegistration
      >
    EINodeRegistration_out;

  // TAO_IDL - Generated from
  // .\be\be_visitor_structure\structure_ch.cpp:51

  struct OASIS_TAO_DATACHANNEL_STUB_Export EINodeRegistration
  {

    // TAO_IDL - Generated from
    // .\be\be_type.cpp:307

    
    typedef EINodeRegistration_var _var_type;
    typedef EINodeRegistration_out _out_type;
    
    OASIS::UUID uuid;
    ::TAO::String_Manager name;
    OASIS::SoftwareProbeEntrySeq probes;
    OASIS::CommandChannel_var cmd_channel;
  };

  // TAO_IDL - Generated from
  // .\be\be_interface.cpp:750

#if !defined (_OASIS_DATACHANNEL__VAR_OUT_CH_)
#define _OASIS_DATACHANNEL__VAR_OUT_CH_

  class DataChannel;
  typedef DataChannel *DataChannel_ptr;

  typedef
    TAO_Objref_Var_T<
        DataChannel
      >
    DataChannel_var;
  
  typedef
    TAO_Objref_Out_T<
        DataChannel
      >
    DataChannel_out;

#endif /* end #if !defined */

  // TAO_IDL - Generated from
  // .\be\be_visitor_interface\interface_ch.cpp:43

  class OASIS_TAO_DATACHANNEL_STUB_Export DataChannel
    : public virtual ::CORBA::Object
  {
  public:
    friend class TAO::Narrow_Utils<DataChannel>;

    // TAO_IDL - Generated from
    // .\be\be_type.cpp:307

    typedef DataChannel_ptr _ptr_type;
    typedef DataChannel_var _var_type;
    typedef DataChannel_out _out_type;

    // The static operations.
    static DataChannel_ptr _duplicate (DataChannel_ptr obj);

    static void _tao_release (DataChannel_ptr obj);

    static DataChannel_ptr _narrow (::CORBA::Object_ptr obj);
    static DataChannel_ptr _unchecked_narrow (::CORBA::Object_ptr obj);
    static DataChannel_ptr _nil (void);

    virtual void send_data (
      const ::OASIS::DataPacket & p);

    virtual void register_einode (
      const ::OASIS::EINodeRegistration & reg);

    virtual void unregister_einode (
      const ::OASIS::UUID & uuid);

    // TAO_IDL - Generated from
    // .\be\be_visitor_interface\interface_ch.cpp:140

    virtual ::CORBA::Boolean _is_a (const char *type_id);
    virtual const char* _interface_repository_id (void) const;
    virtual ::CORBA::Boolean marshal (TAO_OutputCDR &cdr);
  
  protected:
    // Concrete interface only.
    DataChannel (void);

    // Concrete non-local interface only.
    DataChannel (
        ::IOP::IOR *ior,
        TAO_ORB_Core *orb_core);
    
    // Non-local interface only.
    DataChannel (
        TAO_Stub *objref,
        ::CORBA::Boolean _tao_collocated = false,
        TAO_Abstract_ServantBase *servant = 0,
        TAO_ORB_Core *orb_core = 0);

    virtual ~DataChannel (void);
  
  private:
    // Private and unimplemented for concrete interfaces.
    DataChannel (const DataChannel &);

    void operator= (const DataChannel &);
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
  // .\be\be_visitor_arg_traits.cpp:947

  template<>
  class Arg_Traits< ::OASIS::TimeValue>
    : public
        Fixed_Size_Arg_Traits_T<
            ::OASIS::TimeValue,
            TAO::Any_Insert_Policy_Noop
          >
  {
  };

  // TAO_IDL - Generated from
  // .\be\be_visitor_arg_traits.cpp:685

  template<>
  class Arg_Traits< ::OASIS::BinaryData>
    : public
        Var_Size_Arg_Traits_T<
            ::OASIS::BinaryData,
            TAO::Any_Insert_Policy_Noop
          >
  {
  };

  // TAO_IDL - Generated from
  // .\be\be_visitor_arg_traits.cpp:947

  template<>
  class Arg_Traits< ::OASIS::DataPacket>
    : public
        Var_Size_Arg_Traits_T<
            ::OASIS::DataPacket,
            TAO::Any_Insert_Policy_Noop
          >
  {
  };

  // TAO_IDL - Generated from
  // .\be\be_visitor_arg_traits.cpp:947

  template<>
  class Arg_Traits< ::OASIS::SoftwareProbeMetadata>
    : public
        Var_Size_Arg_Traits_T<
            ::OASIS::SoftwareProbeMetadata,
            TAO::Any_Insert_Policy_Noop
          >
  {
  };

  // TAO_IDL - Generated from
  // .\be\be_visitor_arg_traits.cpp:947

  template<>
  class Arg_Traits< ::OASIS::SoftwareProbeEntry>
    : public
        Var_Size_Arg_Traits_T<
            ::OASIS::SoftwareProbeEntry,
            TAO::Any_Insert_Policy_Noop
          >
  {
  };

  // TAO_IDL - Generated from
  // .\be\be_visitor_arg_traits.cpp:685

  template<>
  class Arg_Traits< ::OASIS::SoftwareProbeEntrySeq>
    : public
        Var_Size_Arg_Traits_T<
            ::OASIS::SoftwareProbeEntrySeq,
            TAO::Any_Insert_Policy_Noop
          >
  {
  };

  // TAO_IDL - Generated from
  // .\be\be_visitor_arg_traits.cpp:947

  template<>
  class Arg_Traits< ::OASIS::EINodeRegistration>
    : public
        Var_Size_Arg_Traits_T<
            ::OASIS::EINodeRegistration,
            TAO::Any_Insert_Policy_Noop
          >
  {
  };

  // TAO_IDL - Generated from
  // .\be\be_visitor_arg_traits.cpp:147

#if !defined (_OASIS_DATACHANNEL__ARG_TRAITS_)
#define _OASIS_DATACHANNEL__ARG_TRAITS_

  template<>
  class  Arg_Traits< ::OASIS::DataChannel>
    : public
        Object_Arg_Traits_T<
            ::OASIS::DataChannel_ptr,
            ::OASIS::DataChannel_var,
            ::OASIS::DataChannel_out,
            TAO::Objref_Traits<OASIS::DataChannel>,
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

#if !defined (_OASIS_DATACHANNEL__TRAITS_)
#define _OASIS_DATACHANNEL__TRAITS_

  template<>
  struct OASIS_TAO_DATACHANNEL_STUB_Export Objref_Traits< ::OASIS::DataChannel>
  {
    static ::OASIS::DataChannel_ptr duplicate (
        ::OASIS::DataChannel_ptr p);
    static void release (
        ::OASIS::DataChannel_ptr p);
    static ::OASIS::DataChannel_ptr nil (void);
    static ::CORBA::Boolean marshal (
        const ::OASIS::DataChannel_ptr p,
        TAO_OutputCDR & cdr);
  };

#endif /* end #if !defined */
}
TAO_END_VERSIONED_NAMESPACE_DECL



// TAO_IDL - Generated from
// .\be\be_visitor_structure\cdr_op_ch.cpp:46


TAO_BEGIN_VERSIONED_NAMESPACE_DECL

OASIS_TAO_DATACHANNEL_STUB_Export ::CORBA::Boolean operator<< (TAO_OutputCDR &, const OASIS::TimeValue &);
OASIS_TAO_DATACHANNEL_STUB_Export ::CORBA::Boolean operator>> (TAO_InputCDR &, OASIS::TimeValue &);

TAO_END_VERSIONED_NAMESPACE_DECL



// TAO_IDL - Generated from
// .\be\be_visitor_sequence\cdr_op_ch.cpp:68

#if !defined _TAO_CDR_OP_OASIS_BinaryData_H_
#define _TAO_CDR_OP_OASIS_BinaryData_H_
TAO_BEGIN_VERSIONED_NAMESPACE_DECL


OASIS_TAO_DATACHANNEL_STUB_Export ::CORBA::Boolean operator<< (
    TAO_OutputCDR &strm,
    const OASIS::BinaryData &_tao_sequence);
OASIS_TAO_DATACHANNEL_STUB_Export ::CORBA::Boolean operator>> (
    TAO_InputCDR &strm,
    OASIS::BinaryData &_tao_sequence);

TAO_END_VERSIONED_NAMESPACE_DECL



#endif /* _TAO_CDR_OP_OASIS_BinaryData_H_ */

// TAO_IDL - Generated from
// .\be\be_visitor_structure\cdr_op_ch.cpp:46


TAO_BEGIN_VERSIONED_NAMESPACE_DECL

OASIS_TAO_DATACHANNEL_STUB_Export ::CORBA::Boolean operator<< (TAO_OutputCDR &, const OASIS::DataPacket &);
OASIS_TAO_DATACHANNEL_STUB_Export ::CORBA::Boolean operator>> (TAO_InputCDR &, OASIS::DataPacket &);

TAO_END_VERSIONED_NAMESPACE_DECL



// TAO_IDL - Generated from
// .\be\be_visitor_structure\cdr_op_ch.cpp:46


TAO_BEGIN_VERSIONED_NAMESPACE_DECL

OASIS_TAO_DATACHANNEL_STUB_Export ::CORBA::Boolean operator<< (TAO_OutputCDR &, const OASIS::SoftwareProbeMetadata &);
OASIS_TAO_DATACHANNEL_STUB_Export ::CORBA::Boolean operator>> (TAO_InputCDR &, OASIS::SoftwareProbeMetadata &);

TAO_END_VERSIONED_NAMESPACE_DECL



// TAO_IDL - Generated from
// .\be\be_visitor_structure\cdr_op_ch.cpp:46


TAO_BEGIN_VERSIONED_NAMESPACE_DECL

OASIS_TAO_DATACHANNEL_STUB_Export ::CORBA::Boolean operator<< (TAO_OutputCDR &, const OASIS::SoftwareProbeEntry &);
OASIS_TAO_DATACHANNEL_STUB_Export ::CORBA::Boolean operator>> (TAO_InputCDR &, OASIS::SoftwareProbeEntry &);

TAO_END_VERSIONED_NAMESPACE_DECL



// TAO_IDL - Generated from
// .\be\be_visitor_sequence\cdr_op_ch.cpp:68

#if !defined _TAO_CDR_OP_OASIS_SoftwareProbeEntrySeq_H_
#define _TAO_CDR_OP_OASIS_SoftwareProbeEntrySeq_H_
TAO_BEGIN_VERSIONED_NAMESPACE_DECL


OASIS_TAO_DATACHANNEL_STUB_Export ::CORBA::Boolean operator<< (
    TAO_OutputCDR &strm,
    const OASIS::SoftwareProbeEntrySeq &_tao_sequence);
OASIS_TAO_DATACHANNEL_STUB_Export ::CORBA::Boolean operator>> (
    TAO_InputCDR &strm,
    OASIS::SoftwareProbeEntrySeq &_tao_sequence);

TAO_END_VERSIONED_NAMESPACE_DECL



#endif /* _TAO_CDR_OP_OASIS_SoftwareProbeEntrySeq_H_ */

// TAO_IDL - Generated from
// .\be\be_visitor_structure\cdr_op_ch.cpp:46


TAO_BEGIN_VERSIONED_NAMESPACE_DECL

OASIS_TAO_DATACHANNEL_STUB_Export ::CORBA::Boolean operator<< (TAO_OutputCDR &, const OASIS::EINodeRegistration &);
OASIS_TAO_DATACHANNEL_STUB_Export ::CORBA::Boolean operator>> (TAO_InputCDR &, OASIS::EINodeRegistration &);

TAO_END_VERSIONED_NAMESPACE_DECL



// TAO_IDL - Generated from
// .\be\be_visitor_interface\cdr_op_ch.cpp:44

TAO_BEGIN_VERSIONED_NAMESPACE_DECL

OASIS_TAO_DATACHANNEL_STUB_Export ::CORBA::Boolean operator<< (TAO_OutputCDR &, const OASIS::DataChannel_ptr );
OASIS_TAO_DATACHANNEL_STUB_Export ::CORBA::Boolean operator>> (TAO_InputCDR &, OASIS::DataChannel_ptr &);

TAO_END_VERSIONED_NAMESPACE_DECL



// TAO_IDL - Generated from
// .\be\be_codegen.cpp:1703
#if defined (__ACE_INLINE__)
#include "DataChannelC.inl"
#endif /* defined INLINE */

#include /**/ "ace/post.h"

#endif /* ifndef */

