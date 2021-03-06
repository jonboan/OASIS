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
// .\be\be_codegen.cpp:652

#ifndef _TAO_IDL_TESTEXECUTIONMANAGERS_N1DE1D_CPP_
#define _TAO_IDL_TESTEXECUTIONMANAGERS_N1DE1D_CPP_


#include "TestExecutionManagerS.h"
#include "tao/PortableServer/Operation_Table_Perfect_Hash.h"
#include "tao/PortableServer/Upcall_Command.h"
#include "tao/PortableServer/Upcall_Wrapper.h"
#include "tao/TAO_Server_Request.h"
#include "tao/ORB_Core.h"
#include "tao/Profile.h"
#include "tao/Stub.h"
#include "tao/IFR_Client_Adapter.h"
#include "tao/Object_T.h"
#include "tao/AnyTypeCode/TypeCode.h"
#include "tao/AnyTypeCode/DynamicC.h"
#include "tao/CDR.h"
#include "tao/operation_details.h"
#include "tao/PortableInterceptor.h"
#include "ace/Dynamic_Service.h"
#include "ace/Malloc_Allocator.h"

// TAO_IDL - Generated from
// .\be\be_interface.cpp:1867

class TAO_OASIS_TestExecutionManagerViewer_Perfect_Hash_OpTable
  : public TAO_Perfect_Hash_OpTable
{
private:
  unsigned int hash (const char *str, unsigned int len);

public:
  const TAO_operation_db_entry * lookup (const char *str, unsigned int len);
};

/* C++ code produced by gperf version 2.8 (ACE version) */
/* Command-line: ace_gperf -m -M -J -c -C -D -E -T -f 0 -F 0,0 -a -o -t -p -K opname -L C++ -Z TAO_OASIS_TestExecutionManagerViewer_Perfect_Hash_OpTable -N lookup  */
unsigned int
TAO_OASIS_TestExecutionManagerViewer_Perfect_Hash_OpTable::hash (const char *str, unsigned int len)
{
  static const unsigned char asso_values[] =
    {
     20, 20, 20, 20, 20, 20, 20, 20, 20, 20,
     20, 20, 20, 20, 20, 20, 20, 20, 20, 20,
     20, 20, 20, 20, 20, 20, 20, 20, 20, 20,
     20, 20, 20, 20, 20, 20, 20, 20, 20, 20,
     20, 20, 20, 20, 20, 20, 20, 20, 20, 20,
     20, 20, 20, 20, 20, 20, 20, 20, 20, 20,
     20, 20, 20, 20, 20, 20, 20,  0, 20, 20,
     20, 20, 20, 20, 20, 20, 20, 20, 20, 20,
     20, 20, 20, 20, 20, 20, 20, 20, 20, 20,
     20, 20, 20, 20, 20,  0, 20,  0, 20, 20,
      5,  5, 20,  0, 20, 20, 20, 20, 20, 20,
     20, 20, 20, 20, 20,  0,  0, 20, 20, 20,
     20, 20, 20, 20, 20, 20, 20, 20,
    };
  return len + asso_values[(int) str[len - 1]] + asso_values[(int) str[0]];
}

const TAO_operation_db_entry *
TAO_OASIS_TestExecutionManagerViewer_Perfect_Hash_OpTable::lookup (const char *str, unsigned int len)
{
  enum
    {
      TOTAL_KEYWORDS = 8,
      MIN_WORD_LENGTH = 5,
      MAX_WORD_LENGTH = 14,
      MIN_HASH_VALUE = 5,
      MAX_HASH_VALUE = 19,
      HASH_VALUE_RANGE = 15,
      DUPLICATES = 0,
      WORDLIST_SIZE = 13
    };

  static const TAO_operation_db_entry wordlist[] =
    {
      {"",0,0},{"",0,0},{"",0,0},{"",0,0},{"",0,0},
      {"_is_a", &TAO_ServantBase::_is_a_thru_poa_skel, 0},
      {"",0,0},
      {"get_DAC", &POA_OASIS::TestExecutionManagerViewer::get_DAC_skel, 0},
      {"get_DACs", &POA_OASIS::TestExecutionManagerViewer::get_DACs_skel, 0},
      {"",0,0},
      {"_component", &TAO_ServantBase::_component_thru_poa_skel, 0},
      {"",0,0},{"",0,0},
      {"_non_existent", &TAO_ServantBase::_non_existent_thru_poa_skel, 0},
      {"_get_name", &POA_OASIS::TestExecutionManagerViewer::_get_name_skel, 0},
      {"_interface", &TAO_ServantBase::_interface_skel, 0},
      {"",0,0},{"",0,0},{"",0,0},
      {"_repository_id", &TAO_ServantBase::_repository_id_thru_poa_skel, 0},
    };

  if (len <= MAX_WORD_LENGTH && len >= MIN_WORD_LENGTH)
    {
      unsigned int key = hash (str, len);

      if (key <= MAX_HASH_VALUE && key >= MIN_HASH_VALUE)
        {
          const char *s = wordlist[key].opname;

          if (*str == *s && !ACE_OS::strncmp (str + 1, s + 1, len - 1))
            return &wordlist[key];
        }
    }
  return 0;
}

static TAO_OASIS_TestExecutionManagerViewer_Perfect_Hash_OpTable tao_OASIS_TestExecutionManagerViewer_optable;

// TAO_IDL - Generated from
// .\be\be_visitor_interface\interface_ss.cpp:93

POA_OASIS::TestExecutionManagerViewer::TestExecutionManagerViewer (void)
  : TAO_ServantBase ()
{
  this->optable_ = &tao_OASIS_TestExecutionManagerViewer_optable;
}

POA_OASIS::TestExecutionManagerViewer::TestExecutionManagerViewer (const TestExecutionManagerViewer& rhs)
  : TAO_Abstract_ServantBase (rhs),
    TAO_ServantBase (rhs)
{
}

POA_OASIS::TestExecutionManagerViewer::~TestExecutionManagerViewer (void)
{
}

namespace POA_OASIS
{
  

  // TAO_IDL - Generated from
  // .\be\be_visitor_operation\upcall_command_ss.cpp:83

  class _get_name_TestExecutionManagerViewer
    : public TAO::Upcall_Command
  {
  public:
    inline _get_name_TestExecutionManagerViewer (
      POA_OASIS::TestExecutionManagerViewer * servant,
      TAO_Operation_Details const * operation_details,
      TAO::Argument * const args[])
      : servant_ (servant)
        , operation_details_ (operation_details)
        , args_ (args)
    {
    }

    virtual void execute (void)
    {
      TAO::SArg_Traits< char *>::ret_arg_type retval =
        TAO::Portable_Server::get_ret_arg< char *> (
          this->operation_details_,
          this->args_);
      
      retval =
        this->servant_->name ();
    }
  
  private:
    POA_OASIS::TestExecutionManagerViewer * const servant_;
    TAO_Operation_Details const * const operation_details_;
    TAO::Argument * const * const args_;
  };
}

// TAO_IDL - Generated from
// .\be\be_visitor_operation\operation_ss.cpp:171

void POA_OASIS::TestExecutionManagerViewer::_get_name_skel (
  TAO_ServerRequest & server_request,
  TAO::Portable_Server::Servant_Upcall *TAO_INTERCEPTOR (servant_upcall),
  TAO_ServantBase *servant)
{
#if TAO_HAS_INTERCEPTORS == 1
  static ::CORBA::TypeCode_ptr const * const exceptions = 0;
  static ::CORBA::ULong const nexceptions = 0;
#endif /* TAO_HAS_INTERCEPTORS */

  TAO::SArg_Traits< char *>::ret_val retval;

  TAO::Argument * const args[] =
    {
      &retval
    };
  
  static size_t const nargs = 1;

  POA_OASIS::TestExecutionManagerViewer * const impl =
    dynamic_cast<POA_OASIS::TestExecutionManagerViewer *> (servant);

  if (!impl)
    {
      throw ::CORBA::INTERNAL ();
    }

  _get_name_TestExecutionManagerViewer command (
    impl,
    server_request.operation_details (),
    args);
  
  TAO::Upcall_Wrapper upcall_wrapper;
  upcall_wrapper.upcall (server_request
                         , args
                         , nargs
                         , command
#if TAO_HAS_INTERCEPTORS == 1
                         , servant_upcall
                         , exceptions
                         , nexceptions
#endif  /* TAO_HAS_INTERCEPTORS == 1 */
                         );
}


namespace POA_OASIS
{
  

  // TAO_IDL - Generated from
  // .\be\be_visitor_operation\upcall_command_ss.cpp:83

  class get_DACs_TestExecutionManagerViewer
    : public TAO::Upcall_Command
  {
  public:
    inline get_DACs_TestExecutionManagerViewer (
      POA_OASIS::TestExecutionManagerViewer * servant,
      TAO_Operation_Details const * operation_details,
      TAO::Argument * const args[])
      : servant_ (servant)
        , operation_details_ (operation_details)
        , args_ (args)
    {
    }

    virtual void execute (void)
    {
      TAO::SArg_Traits< ::OASIS::DataAcquisitionControllerSeq>::ret_arg_type retval =
        TAO::Portable_Server::get_ret_arg< ::OASIS::DataAcquisitionControllerSeq> (
          this->operation_details_,
          this->args_);
      
      retval =
        this->servant_->get_DACs ();
    }
  
  private:
    POA_OASIS::TestExecutionManagerViewer * const servant_;
    TAO_Operation_Details const * const operation_details_;
    TAO::Argument * const * const args_;
  };
}

// TAO_IDL - Generated from
// .\be\be_visitor_operation\operation_ss.cpp:171

void POA_OASIS::TestExecutionManagerViewer::get_DACs_skel (
  TAO_ServerRequest & server_request,
  TAO::Portable_Server::Servant_Upcall *TAO_INTERCEPTOR (servant_upcall),
  TAO_ServantBase *servant)
{
#if TAO_HAS_INTERCEPTORS == 1
  static ::CORBA::TypeCode_ptr const * const exceptions = 0;
  static ::CORBA::ULong const nexceptions = 0;
#endif /* TAO_HAS_INTERCEPTORS */

  TAO::SArg_Traits< ::OASIS::DataAcquisitionControllerSeq>::ret_val retval;

  TAO::Argument * const args[] =
    {
      &retval
    };
  
  static size_t const nargs = 1;

  POA_OASIS::TestExecutionManagerViewer * const impl =
    dynamic_cast<POA_OASIS::TestExecutionManagerViewer *> (servant);

  if (!impl)
    {
      throw ::CORBA::INTERNAL ();
    }

  get_DACs_TestExecutionManagerViewer command (
    impl,
    server_request.operation_details (),
    args);
  
  TAO::Upcall_Wrapper upcall_wrapper;
  upcall_wrapper.upcall (server_request
                         , args
                         , nargs
                         , command
#if TAO_HAS_INTERCEPTORS == 1
                         , servant_upcall
                         , exceptions
                         , nexceptions
#endif  /* TAO_HAS_INTERCEPTORS == 1 */
                         );
}


namespace POA_OASIS
{
  

  // TAO_IDL - Generated from
  // .\be\be_visitor_operation\upcall_command_ss.cpp:83

  class get_DAC_TestExecutionManagerViewer
    : public TAO::Upcall_Command
  {
  public:
    inline get_DAC_TestExecutionManagerViewer (
      POA_OASIS::TestExecutionManagerViewer * servant,
      TAO_Operation_Details const * operation_details,
      TAO::Argument * const args[])
      : servant_ (servant)
        , operation_details_ (operation_details)
        , args_ (args)
    {
    }

    virtual void execute (void)
    {
      TAO::SArg_Traits< ::OASIS::DataAcquisitionController>::ret_arg_type retval =
        TAO::Portable_Server::get_ret_arg< ::OASIS::DataAcquisitionController> (
          this->operation_details_,
          this->args_);
      
      TAO::SArg_Traits< char *>::in_arg_type arg_1 =
        TAO::Portable_Server::get_in_arg< char *> (
          this->operation_details_,
          this->args_,
          1);
        
      retval =
        this->servant_->get_DAC (
          arg_1);
    }
  
  private:
    POA_OASIS::TestExecutionManagerViewer * const servant_;
    TAO_Operation_Details const * const operation_details_;
    TAO::Argument * const * const args_;
  };
}

// TAO_IDL - Generated from
// .\be\be_visitor_operation\operation_ss.cpp:171

void POA_OASIS::TestExecutionManagerViewer::get_DAC_skel (
  TAO_ServerRequest & server_request,
  TAO::Portable_Server::Servant_Upcall *TAO_INTERCEPTOR (servant_upcall),
  TAO_ServantBase *servant)
{
#if TAO_HAS_INTERCEPTORS == 1
  static ::CORBA::TypeCode_ptr const * const exceptions = 0;
  static ::CORBA::ULong const nexceptions = 0;
#endif /* TAO_HAS_INTERCEPTORS */

  TAO::SArg_Traits< ::OASIS::DataAcquisitionController>::ret_val retval;
  TAO::SArg_Traits< char *>::in_arg_val _tao_name;

  TAO::Argument * const args[] =
    {
      &retval,
      &_tao_name
    };
  
  static size_t const nargs = 2;

  POA_OASIS::TestExecutionManagerViewer * const impl =
    dynamic_cast<POA_OASIS::TestExecutionManagerViewer *> (servant);

  if (!impl)
    {
      throw ::CORBA::INTERNAL ();
    }

  get_DAC_TestExecutionManagerViewer command (
    impl,
    server_request.operation_details (),
    args);
  
  TAO::Upcall_Wrapper upcall_wrapper;
  upcall_wrapper.upcall (server_request
                         , args
                         , nargs
                         , command
#if TAO_HAS_INTERCEPTORS == 1
                         , servant_upcall
                         , exceptions
                         , nexceptions
#endif  /* TAO_HAS_INTERCEPTORS == 1 */
                         );
}



// TAO_IDL - Generated from
// .\be\be_visitor_interface\interface_ss.cpp:166



::CORBA::Boolean POA_OASIS::TestExecutionManagerViewer::_is_a (const char* value)
{
  return
    (
      ACE_OS::strcmp (
          value,
          "IDL:OASIS/TestExecutionManagerViewer:1.0"
        ) == 0 ||
      !ACE_OS::strcmp (
          value,
          "IDL:omg.org/CORBA/Object:1.0"
        )
    );
}

const char* POA_OASIS::TestExecutionManagerViewer::_interface_repository_id (void) const
{
  return "IDL:OASIS/TestExecutionManagerViewer:1.0";
}

// TAO_IDL - Generated from
// .\be\be_visitor_interface\interface_ss.cpp:426

void POA_OASIS::TestExecutionManagerViewer::_dispatch (
  TAO_ServerRequest & req,
  TAO::Portable_Server::Servant_Upcall* servant_upcall)
{
  this->synchronous_upcall_dispatch (req, servant_upcall, this);
}

// TAO_IDL - Generated from
// .\be\be_visitor_interface\interface_ss.cpp:373

OASIS::TestExecutionManagerViewer *
POA_OASIS::TestExecutionManagerViewer::_this (void)
{
  TAO_Stub *stub = this->_create_stub ();

  TAO_Stub_Auto_Ptr safe_stub (stub);
  ::CORBA::Object_ptr tmp = CORBA::Object_ptr ();

  ::CORBA::Boolean const _tao_opt_colloc =
    stub->servant_orb_var ()->orb_core ()->optimize_collocation_objects ();
  
  ACE_NEW_RETURN (
      tmp,
      ::CORBA::Object (stub, _tao_opt_colloc, this),
      0);
  
  ::CORBA::Object_var obj = tmp;
  (void) safe_stub.release ();

  typedef ::OASIS::TestExecutionManagerViewer STUB_SCOPED_NAME;
  return
    TAO::Narrow_Utils<STUB_SCOPED_NAME>::unchecked_narrow (
        obj.in ());
}

// TAO_IDL - Generated from
// .\be\be_interface.cpp:1867

class TAO_OASIS_TestExecutionManager_Perfect_Hash_OpTable
  : public TAO_Perfect_Hash_OpTable
{
private:
  unsigned int hash (const char *str, unsigned int len);

public:
  const TAO_operation_db_entry * lookup (const char *str, unsigned int len);
};

/* C++ code produced by gperf version 2.8 (ACE version) */
/* Command-line: ace_gperf -m -M -J -c -C -D -E -T -f 0 -F 0,0 -a -o -t -p -K opname -L C++ -Z TAO_OASIS_TestExecutionManager_Perfect_Hash_OpTable -N lookup  */
unsigned int
TAO_OASIS_TestExecutionManager_Perfect_Hash_OpTable::hash (const char *str, unsigned int len)
{
  static const unsigned char asso_values[] =
    {
     25, 25, 25, 25, 25, 25, 25, 25, 25, 25,
     25, 25, 25, 25, 25, 25, 25, 25, 25, 25,
     25, 25, 25, 25, 25, 25, 25, 25, 25, 25,
     25, 25, 25, 25, 25, 25, 25, 25, 25, 25,
     25, 25, 25, 25, 25, 25, 25, 25, 25, 25,
     25, 25, 25, 25, 25, 25, 25, 25, 25, 25,
     25, 25, 25, 25, 25, 25, 25,  0, 25, 25,
     25, 25, 25, 25, 25, 25, 25, 25, 25, 25,
     25, 25, 25, 25, 25, 25, 25, 25, 25, 25,
     25, 25, 25, 25, 25,  0, 25,  0, 25, 25,
      5,  5, 25,  0, 25, 25, 25, 25, 25, 25,
     25, 25, 25, 25,  0,  0,  0, 10, 25, 25,
     25, 25, 25, 25, 25, 25, 25, 25,
    };
  return len + asso_values[(int) str[len - 1]] + asso_values[(int) str[0]];
}

const TAO_operation_db_entry *
TAO_OASIS_TestExecutionManager_Perfect_Hash_OpTable::lookup (const char *str, unsigned int len)
{
  enum
    {
      TOTAL_KEYWORDS = 10,
      MIN_WORD_LENGTH = 5,
      MAX_WORD_LENGTH = 14,
      MIN_HASH_VALUE = 5,
      MAX_HASH_VALUE = 24,
      HASH_VALUE_RANGE = 20,
      DUPLICATES = 0,
      WORDLIST_SIZE = 15
    };

  static const TAO_operation_db_entry wordlist[] =
    {
      {"",0,0},{"",0,0},{"",0,0},{"",0,0},{"",0,0},
      {"_is_a", &TAO_ServantBase::_is_a_thru_poa_skel, 0},
      {"",0,0},
      {"get_DAC", &POA_OASIS::TestExecutionManagerViewer::get_DAC_skel, 0},
      {"get_DACs", &POA_OASIS::TestExecutionManagerViewer::get_DACs_skel, 0},
      {"",0,0},
      {"_component", &TAO_ServantBase::_component_thru_poa_skel, 0},
      {"",0,0},
      {"register_DAC", &POA_OASIS::TestExecutionManager::register_DAC_skel, 0},
      {"_non_existent", &TAO_ServantBase::_non_existent_thru_poa_skel, 0},
      {"_get_name", &POA_OASIS::TestExecutionManagerViewer::_get_name_skel, 0},
      {"_interface", &TAO_ServantBase::_interface_skel, 0},
      {"",0,0},{"",0,0},{"",0,0},
      {"_repository_id", &TAO_ServantBase::_repository_id_thru_poa_skel, 0},
      {"",0,0},{"",0,0},{"",0,0},{"",0,0},
      {"unregister_DAC", &POA_OASIS::TestExecutionManager::unregister_DAC_skel, 0},
    };

  if (len <= MAX_WORD_LENGTH && len >= MIN_WORD_LENGTH)
    {
      unsigned int key = hash (str, len);

      if (key <= MAX_HASH_VALUE && key >= MIN_HASH_VALUE)
        {
          const char *s = wordlist[key].opname;

          if (*str == *s && !ACE_OS::strncmp (str + 1, s + 1, len - 1))
            return &wordlist[key];
        }
    }
  return 0;
}

static TAO_OASIS_TestExecutionManager_Perfect_Hash_OpTable tao_OASIS_TestExecutionManager_optable;

// TAO_IDL - Generated from
// .\be\be_visitor_interface\interface_ss.cpp:93

POA_OASIS::TestExecutionManager::TestExecutionManager (void)
  : TAO_ServantBase ()
{
  this->optable_ = &tao_OASIS_TestExecutionManager_optable;
}

POA_OASIS::TestExecutionManager::TestExecutionManager (const TestExecutionManager& rhs)
  : TAO_Abstract_ServantBase (rhs),
    TAO_ServantBase (rhs),
    POA_OASIS::TestExecutionManagerViewer (rhs)
{
}

POA_OASIS::TestExecutionManager::~TestExecutionManager (void)
{
}

namespace POA_OASIS
{
  

  // TAO_IDL - Generated from
  // .\be\be_visitor_operation\upcall_command_ss.cpp:83

  class register_DAC_TestExecutionManager
    : public TAO::Upcall_Command
  {
  public:
    inline register_DAC_TestExecutionManager (
      POA_OASIS::TestExecutionManager * servant,
      TAO_Operation_Details const * operation_details,
      TAO::Argument * const args[])
      : servant_ (servant)
        , operation_details_ (operation_details)
        , args_ (args)
    {
    }

    virtual void execute (void)
    {
      TAO::SArg_Traits< ::OASIS::DataAcquisitionController>::in_arg_type arg_1 =
        TAO::Portable_Server::get_in_arg< ::OASIS::DataAcquisitionController> (
          this->operation_details_,
          this->args_,
          1);
        
      this->servant_->register_DAC (
        arg_1);
    }
  
  private:
    POA_OASIS::TestExecutionManager * const servant_;
    TAO_Operation_Details const * const operation_details_;
    TAO::Argument * const * const args_;
  };
}

// TAO_IDL - Generated from
// .\be\be_visitor_operation\operation_ss.cpp:171

void POA_OASIS::TestExecutionManager::register_DAC_skel (
  TAO_ServerRequest & server_request,
  TAO::Portable_Server::Servant_Upcall *TAO_INTERCEPTOR (servant_upcall),
  TAO_ServantBase *servant)
{
#if TAO_HAS_INTERCEPTORS == 1
  static ::CORBA::TypeCode_ptr const * const exceptions = 0;
  static ::CORBA::ULong const nexceptions = 0;
#endif /* TAO_HAS_INTERCEPTORS */

  TAO::SArg_Traits< void>::ret_val retval;
  TAO::SArg_Traits< ::OASIS::DataAcquisitionController>::in_arg_val _tao_dac;

  TAO::Argument * const args[] =
    {
      &retval,
      &_tao_dac
    };
  
  static size_t const nargs = 2;

  POA_OASIS::TestExecutionManager * const impl =
    dynamic_cast<POA_OASIS::TestExecutionManager *> (servant);

  if (!impl)
    {
      throw ::CORBA::INTERNAL ();
    }

  register_DAC_TestExecutionManager command (
    impl,
    server_request.operation_details (),
    args);
  
  TAO::Upcall_Wrapper upcall_wrapper;
  upcall_wrapper.upcall (server_request
                         , args
                         , nargs
                         , command
#if TAO_HAS_INTERCEPTORS == 1
                         , servant_upcall
                         , exceptions
                         , nexceptions
#endif  /* TAO_HAS_INTERCEPTORS == 1 */
                         );
}


namespace POA_OASIS
{
  

  // TAO_IDL - Generated from
  // .\be\be_visitor_operation\upcall_command_ss.cpp:83

  class unregister_DAC_TestExecutionManager
    : public TAO::Upcall_Command
  {
  public:
    inline unregister_DAC_TestExecutionManager (
      POA_OASIS::TestExecutionManager * servant,
      TAO_Operation_Details const * operation_details,
      TAO::Argument * const args[])
      : servant_ (servant)
        , operation_details_ (operation_details)
        , args_ (args)
    {
    }

    virtual void execute (void)
    {
      TAO::SArg_Traits< ::OASIS::DataAcquisitionController>::in_arg_type arg_1 =
        TAO::Portable_Server::get_in_arg< ::OASIS::DataAcquisitionController> (
          this->operation_details_,
          this->args_,
          1);
        
      this->servant_->unregister_DAC (
        arg_1);
    }
  
  private:
    POA_OASIS::TestExecutionManager * const servant_;
    TAO_Operation_Details const * const operation_details_;
    TAO::Argument * const * const args_;
  };
}

// TAO_IDL - Generated from
// .\be\be_visitor_operation\operation_ss.cpp:171

void POA_OASIS::TestExecutionManager::unregister_DAC_skel (
  TAO_ServerRequest & server_request,
  TAO::Portable_Server::Servant_Upcall *TAO_INTERCEPTOR (servant_upcall),
  TAO_ServantBase *servant)
{
#if TAO_HAS_INTERCEPTORS == 1
  static ::CORBA::TypeCode_ptr const * const exceptions = 0;
  static ::CORBA::ULong const nexceptions = 0;
#endif /* TAO_HAS_INTERCEPTORS */

  TAO::SArg_Traits< void>::ret_val retval;
  TAO::SArg_Traits< ::OASIS::DataAcquisitionController>::in_arg_val _tao_dac;

  TAO::Argument * const args[] =
    {
      &retval,
      &_tao_dac
    };
  
  static size_t const nargs = 2;

  POA_OASIS::TestExecutionManager * const impl =
    dynamic_cast<POA_OASIS::TestExecutionManager *> (servant);

  if (!impl)
    {
      throw ::CORBA::INTERNAL ();
    }

  unregister_DAC_TestExecutionManager command (
    impl,
    server_request.operation_details (),
    args);
  
  TAO::Upcall_Wrapper upcall_wrapper;
  upcall_wrapper.upcall (server_request
                         , args
                         , nargs
                         , command
#if TAO_HAS_INTERCEPTORS == 1
                         , servant_upcall
                         , exceptions
                         , nexceptions
#endif  /* TAO_HAS_INTERCEPTORS == 1 */
                         );
}



// TAO_IDL - Generated from
// .\be\be_visitor_interface\interface_ss.cpp:166



::CORBA::Boolean POA_OASIS::TestExecutionManager::_is_a (const char* value)
{
  return
    (
      ACE_OS::strcmp (
          value,
          "IDL:OASIS/TestExecutionManagerViewer:1.0"
        ) == 0 ||
      ACE_OS::strcmp (
          value,
          "IDL:OASIS/TestExecutionManager:1.0"
        ) == 0 ||
      !ACE_OS::strcmp (
          value,
          "IDL:omg.org/CORBA/Object:1.0"
        )
    );
}

const char* POA_OASIS::TestExecutionManager::_interface_repository_id (void) const
{
  return "IDL:OASIS/TestExecutionManager:1.0";
}

// TAO_IDL - Generated from
// .\be\be_visitor_interface\interface_ss.cpp:426

void POA_OASIS::TestExecutionManager::_dispatch (
  TAO_ServerRequest & req,
  TAO::Portable_Server::Servant_Upcall* servant_upcall)
{
  this->synchronous_upcall_dispatch (req, servant_upcall, this);
}

// TAO_IDL - Generated from
// .\be\be_visitor_interface\interface_ss.cpp:373

OASIS::TestExecutionManager *
POA_OASIS::TestExecutionManager::_this (void)
{
  TAO_Stub *stub = this->_create_stub ();

  TAO_Stub_Auto_Ptr safe_stub (stub);
  ::CORBA::Object_ptr tmp = CORBA::Object_ptr ();

  ::CORBA::Boolean const _tao_opt_colloc =
    stub->servant_orb_var ()->orb_core ()->optimize_collocation_objects ();
  
  ACE_NEW_RETURN (
      tmp,
      ::CORBA::Object (stub, _tao_opt_colloc, this),
      0);
  
  ::CORBA::Object_var obj = tmp;
  (void) safe_stub.release ();

  typedef ::OASIS::TestExecutionManager STUB_SCOPED_NAME;
  return
    TAO::Narrow_Utils<STUB_SCOPED_NAME>::unchecked_narrow (
        obj.in ());
}

#endif /* ifndef */

