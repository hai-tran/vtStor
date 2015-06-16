/*
<License>
Copyright 2015 Virtium Technology

Licensed under the Apache License, Version 2.0 (the "License");
you may not use this file except in compliance with the License.
You may obtain a copy of the License at

http ://www.apache.org/licenses/LICENSE-2.0

Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an "AS IS" BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License.
</License>
*/
#include "BufferInterface.h"

namespace vtStor
{

std::shared_ptr<vtStor::cBufferInterface> cBufferInterface::ToSharedPtr( void* Object )
{
    return( *reinterpret_cast<std::shared_ptr<vtStor::cBufferInterface>*>( Object ) );
}

void* cBufferInterface::ToVoidPointer( std::shared_ptr<vtStor::cBufferInterface>& Object )
{
    return( reinterpret_cast<void*>( &(Object) ) );
}

cBufferInterface::cBufferInterface()
{
}

cBufferInterface::~cBufferInterface()
{
}

}