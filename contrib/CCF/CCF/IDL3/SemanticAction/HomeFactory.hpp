// file      : CCF/IDL3/SemanticAction/HomeFactory.hpp
// author    : Boris Kolpackov <boris@dre.vanderbilt.edu>
// cvs-id    : $Id: HomeFactory.hpp 77342 2007-02-22 22:16:47Z wotte $

#ifndef CCF_IDL3_SEMANTIC_ACTION_HOME_FACTORY_HPP
#define CCF_IDL3_SEMANTIC_ACTION_HOME_FACTORY_HPP

#include "CCF/IDL3/SemanticAction/Elements.hpp"

namespace CCF
{
  namespace IDL3
  {
    namespace SemanticAction
    {
      struct HomeFactory
      {
        virtual ~HomeFactory ()
        {
        }
        
        virtual void
        name (SimpleIdentifierPtr const& id) = 0;

        virtual void
        parameter (IdentifierPtr const& type,
                   SimpleIdentifierPtr const& name) = 0;

        virtual void
        raises (IdentifierPtr const& id) = 0;
      };
    }
  }
}

#endif  // CCF_IDL3_SEMANTIC_ACTION_HOME_FACTORY_HPP
