#include "Libs.h"

#include "LibC.h"
#include "LibKernel.h"
#include "LibSceGnmDriver.h"
#include <core/PS4/HLE/Graphics/video_out.h>
#include "core/hle/libraries/libuserservice/user_service.h"
#include "core/hle/libraries/libpad/pad.h"
#include <Emulator/HLE/Libraries/LibSystemService/system_service.h>

namespace HLE::Libs {

void Init_HLE_Libs(SymbolsResolver *sym) {
    LibC::LibC_Register(sym);
    LibKernel::LibKernel_Register(sym);
    Graphics::VideoOut::videoOutRegisterLib(sym);
    LibSceGnmDriver::LibSceGnmDriver_Register(sym);
    Core::Libraries::LibUserService::userServiceSymbolsRegister(sym);
    Core::Libraries::LibPad::padSymbolsRegister(sym);
    Emulator::HLE::Libraries::LibSystemService::libSystemService_Register(sym);
}
}  // namespace HLE::Libs