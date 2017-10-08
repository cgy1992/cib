/////////////////////////////////////////////////////////////////////////////
// WARNING WARNING WARNING WARNING WARNING WARNING WARNING WARNING WARNING //
// This file is generated by CIB and should not be edited.
// If CIB is run again the edited changes will go away for ever.
/////////////////////////////////////////////////////////////////////////////

#ifndef __CIB_Shape_H__
#define __CIB_Shape_H__

#include <map>
#include <cstdint>

namespace _cib_ { namespace ShapeLib {
    /**
     * \brief MetaInterface is just a map between unique id and function pointer.

     There is one instance of MetaInterface class for each exported classes.
     There will be cases when instance of this class will be created on adhoc basis
     mainly by client side glue code to provide callback mechanism to the library.
     */
    class MetaInterface
    {
    private:
        typedef std::map<std::uint32_t, void*> MethodIdToProcMap;
        MethodIdToProcMap methods;

    protected:
        /**
         * Creates the map between unique id and function pointer.
         * Derived class must implement it.
         */
        virtual void LoadMethods() {}

    public:
        void AddMethod(std::uint32_t funcCibId, void* proc)
        {
            methods[funcCibId] = proc;
        }
        void* GetMethod(std::uint32_t funcCibId)
        {
            if(methods.empty())
                LoadMethods();
            MethodIdToProcMap::const_iterator itr = methods.find(funcCibId);
            return itr != methods.end() ? itr->second : (void*) 0;
        }
    };
}}

#endif //__CIB_H__