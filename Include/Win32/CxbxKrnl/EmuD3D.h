// ******************************************************************
// *
// *    .,-:::::    .,::      .::::::::.    .,::      .:
// *  ,;;;'````'    `;;;,  .,;;  ;;;'';;'   `;;;,  .,;; 
// *  [[[             '[[,,[['   [[[__[[\.    '[[,,[['  
// *  $$$              Y$$$P     $$""""Y$$     Y$$$P    
// *  `88bo,__,o,    oP"``"Yo,  _88o,,od8P   oP"``"Yo,  
// *    "YUMMMMMP",m"       "Mm,""YUMMMP" ,m"       "Mm,
// *
// *   Cxbx->Win32->CxbxKrnl->EmuD3D.h
// *
// *  This file is part of the Cxbx project.
// *
// *  Cxbx and Cxbe are free software; you can redistribute them
// *  and/or modify them under the terms of the GNU General Public
// *  License as published by the Free Software Foundation; either
// *  version 2 of the license, or (at your option) any later version.
// *
// *  This program is distributed in the hope that it will be useful,
// *  but WITHOUT ANY WARRANTY; without even the implied warranty of
// *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
// *  GNU General Public License for more details.
// *
// *  You should have recieved a copy of the GNU General Public License
// *  along with this program; see the file COPYING.
// *  If not, write to the Free Software Foundation, Inc.,
// *  59 Temple Place - Suite 330, Bostom, MA 02111-1307, USA.
// *
// *  (c) 2002-2003 Aaron Robinson <caustik@caustik.com>
// *
// *  All rights reserved
// *
// ******************************************************************
#ifndef EMUD3D_H
#define EMUD3D_H

#include "Emu.h"

// ******************************************************************
// * func: EmuInitD3D
// ******************************************************************
VOID EmuInitD3D(Xbe::Header *XbeHeader, uint32 XbeHeaderSize);

// ******************************************************************
// * func: EmuIDirect3D8_CreateDevice
// ******************************************************************
win32::HRESULT WINAPI EmuIDirect3D8_CreateDevice
(
    win32::UINT                    Adapter,
    win32::D3DDEVTYPE              DeviceType,
    win32::HWND                    hFocusWindow,
    win32::DWORD                   BehaviorFlags,
    win32::D3DPRESENT_PARAMETERS  *pPresentationParameters,
    win32::IDirect3DDevice8      **ppReturnedDeviceInterface
);

// ******************************************************************
// * func: EmuIDirect3DDevice8_Clear
// ******************************************************************
win32::HRESULT WINAPI EmuIDirect3DDevice8_Clear
(
    win32::DWORD                  Count,
    CONST win32::D3DRECT         *pRects,
    win32::DWORD                  Flags,
    win32::D3DCOLOR               Color,
    float                         Z,
    win32::DWORD                  Stencil
);

// ******************************************************************
// * func: EmuIDirect3DDevice8_Swap
// ******************************************************************
win32::HRESULT WINAPI EmuIDirect3DDevice8_Swap
(
    win32::DWORD Flags
);

#endif