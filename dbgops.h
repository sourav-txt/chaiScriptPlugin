#ifndef DBG_FUNCTION
#define DBG_FUNCTION(x)
#endif

DBG_FUNCTION(DbgMemWrite)
DBG_FUNCTION(DbgMemGetPageSize)
DBG_FUNCTION(DbgCmdExec)
DBG_FUNCTION(DbgCmdExecDirect)
DBG_FUNCTION(DbgIsValidExpression)
DBG_FUNCTION(DbgIsDebugging)
DBG_FUNCTION(DbgIsJumpGoingToExecute)
DBG_FUNCTION(DbgSetLabelAt)
DBG_FUNCTION(DbgClearLabelRange)
DBG_FUNCTION(DbgSetCommentAt)
DBG_FUNCTION(DbgClearCommentRange)
DBG_FUNCTION(DbgGetBookmarkAt)
DBG_FUNCTION(DbgSetBookmarkAt)
DBG_FUNCTION(DbgClearBookmarkRange)
DBG_FUNCTION(DbgGetBpxTypeAt)
DBG_FUNCTION(DbgValFromString)
DBG_FUNCTION(DbgGetRegDump)
DBG_FUNCTION(DbgValToString)
DBG_FUNCTION(DbgMemIsValidReadPtr)
DBG_FUNCTION(DbgGetFunctionTypeAt)
DBG_FUNCTION(DbgGetLoopTypeAt)
DBG_FUNCTION(DbgGetBranchDestination)
DBG_FUNCTION(DbgScriptLoad)
DBG_FUNCTION(DbgScriptUnload)
DBG_FUNCTION(DbgScriptRun)
DBG_FUNCTION(DbgScriptStep)
DBG_FUNCTION(DbgScriptBpToggle)
DBG_FUNCTION(DbgScriptBpGet)
DBG_FUNCTION(DbgScriptCmdExec)
DBG_FUNCTION(DbgScriptAbort)
DBG_FUNCTION(DbgScriptGetLineType)
DBG_FUNCTION(DbgScriptSetIp)
DBG_FUNCTION(DbgSymbolEnum)
DBG_FUNCTION(DbgAssembleAt)
DBG_FUNCTION(DbgModBaseFromName)
DBG_FUNCTION(DbgSettingsUpdated)
DBG_FUNCTION(DbgMenuEntryClicked)
DBG_FUNCTION(DbgFunctionOverlaps)
DBG_FUNCTION(DbgFunctionAdd)
DBG_FUNCTION(DbgFunctionDel)
DBG_FUNCTION(DbgArgumentOverlaps)
DBG_FUNCTION(DbgArgumentAdd)
DBG_FUNCTION(DbgArgumentDel)
DBG_FUNCTION(DbgLoopOverlaps)
DBG_FUNCTION(DbgLoopAdd)
DBG_FUNCTION(DbgLoopDel)
DBG_FUNCTION(DbgXrefAdd)
DBG_FUNCTION(DbgXrefDelAll)
DBG_FUNCTION(DbgGetXrefCountAt)
DBG_FUNCTION(DbgGetXrefTypeAt)
DBG_FUNCTION(DbgIsRunLocked)
DBG_FUNCTION(DbgIsBpDisabled)
DBG_FUNCTION(DbgSetAutoCommentAt)
DBG_FUNCTION(DbgClearAutoCommentRange)
DBG_FUNCTION(DbgSetAutoLabelAt)
DBG_FUNCTION(DbgClearAutoLabelRange)
DBG_FUNCTION(DbgSetAutoBookmarkAt)
DBG_FUNCTION(DbgClearAutoBookmarkRange)
DBG_FUNCTION(DbgSetAutoFunctionAt)
DBG_FUNCTION(DbgClearAutoFunctionRange)
DBG_FUNCTION(DbgFunctions)
DBG_FUNCTION(DbgWinEvent)
DBG_FUNCTION(DbgWinEventGlobal)
DBG_FUNCTION(DbgIsRunning)
DBG_FUNCTION(DbgGetTimeWastedCounter)
DBG_FUNCTION(DbgGetArgTypeAt)
DBG_FUNCTION(DbgReleaseEncodeTypeBuffer)
DBG_FUNCTION(DbgGetEncodeTypeAt)
DBG_FUNCTION(DbgGetEncodeSizeAt)
DBG_FUNCTION(DbgSetEncodeType)
DBG_FUNCTION(DbgDelEncodeTypeRange)
DBG_FUNCTION(DbgDelEncodeTypeSegment)

DBG_FUNCTION(Script::Debug::Wait)
DBG_FUNCTION(Script::Debug::Run)
DBG_FUNCTION(Script::Debug::Pause)
DBG_FUNCTION(Script::Debug::Stop)
DBG_FUNCTION(Script::Debug::StepIn)
DBG_FUNCTION(Script::Debug::StepOver)
DBG_FUNCTION(Script::Debug::StepOut)
DBG_FUNCTION(Script::Debug::SetBreakpoint)
DBG_FUNCTION(Script::Debug::DeleteBreakpoint)
//DBG_FUNCTION(Script::Debug::DisableBreakpoint)
DBG_FUNCTION(Script::Debug::SetHardwareBreakpoint)
DBG_FUNCTION(Script::Debug::DeleteHardwareBreakpoint)

DBG_FUNCTION(Script::Register::GetDR0)
DBG_FUNCTION(Script::Register::SetDR0)
DBG_FUNCTION(Script::Register::GetDR1)
DBG_FUNCTION(Script::Register::SetDR1)
DBG_FUNCTION(Script::Register::GetDR2)
DBG_FUNCTION(Script::Register::SetDR2)
DBG_FUNCTION(Script::Register::GetDR3)
DBG_FUNCTION(Script::Register::SetDR3)
DBG_FUNCTION(Script::Register::GetDR6)
DBG_FUNCTION(Script::Register::SetDR6)
DBG_FUNCTION(Script::Register::GetDR7)
DBG_FUNCTION(Script::Register::SetDR7)

DBG_FUNCTION(Script::Register::GetEAX)
DBG_FUNCTION(Script::Register::SetEAX)
DBG_FUNCTION(Script::Register::GetAX)
DBG_FUNCTION(Script::Register::SetAX)
DBG_FUNCTION(Script::Register::GetAH)
DBG_FUNCTION(Script::Register::SetAH)
DBG_FUNCTION(Script::Register::GetAL)
DBG_FUNCTION(Script::Register::SetAL)
DBG_FUNCTION(Script::Register::GetEBX)
DBG_FUNCTION(Script::Register::SetEBX)
DBG_FUNCTION(Script::Register::GetBX)
DBG_FUNCTION(Script::Register::SetBX)
DBG_FUNCTION(Script::Register::GetBH)
DBG_FUNCTION(Script::Register::SetBH)
DBG_FUNCTION(Script::Register::GetBL)
DBG_FUNCTION(Script::Register::SetBL)
DBG_FUNCTION(Script::Register::GetECX)
DBG_FUNCTION(Script::Register::SetECX)
DBG_FUNCTION(Script::Register::GetCX)
DBG_FUNCTION(Script::Register::SetCX)
DBG_FUNCTION(Script::Register::GetCH)
DBG_FUNCTION(Script::Register::SetCH)
DBG_FUNCTION(Script::Register::GetCL)
DBG_FUNCTION(Script::Register::SetCL)
DBG_FUNCTION(Script::Register::GetEDX)
DBG_FUNCTION(Script::Register::SetEDX)
DBG_FUNCTION(Script::Register::GetDX)
DBG_FUNCTION(Script::Register::SetDX)
DBG_FUNCTION(Script::Register::GetDH)
DBG_FUNCTION(Script::Register::SetDH)
DBG_FUNCTION(Script::Register::GetDL)
DBG_FUNCTION(Script::Register::SetDL)
DBG_FUNCTION(Script::Register::GetEDI)
DBG_FUNCTION(Script::Register::SetEDI)
DBG_FUNCTION(Script::Register::GetDI)
DBG_FUNCTION(Script::Register::SetDI)
DBG_FUNCTION(Script::Register::GetESI)
DBG_FUNCTION(Script::Register::SetESI)
DBG_FUNCTION(Script::Register::GetSI)
DBG_FUNCTION(Script::Register::SetSI)
DBG_FUNCTION(Script::Register::GetEBP)
DBG_FUNCTION(Script::Register::SetEBP)
DBG_FUNCTION(Script::Register::GetBP)
DBG_FUNCTION(Script::Register::SetBP)
DBG_FUNCTION(Script::Register::GetESP)
DBG_FUNCTION(Script::Register::SetESP)
DBG_FUNCTION(Script::Register::GetSP)
DBG_FUNCTION(Script::Register::SetSP)
DBG_FUNCTION(Script::Register::GetEIP)
DBG_FUNCTION(Script::Register::SetEIP)

#ifdef _WIN64
DBG_FUNCTION(Script::Register::GetRAX)
DBG_FUNCTION(Script::Register::SetRAX)
DBG_FUNCTION(Script::Register::GetRBX)
DBG_FUNCTION(Script::Register::SetRBX)
DBG_FUNCTION(Script::Register::GetRCX)
DBG_FUNCTION(Script::Register::SetRCX)
DBG_FUNCTION(Script::Register::GetRDX)
DBG_FUNCTION(Script::Register::SetRDX)
DBG_FUNCTION(Script::Register::GetRSI)
DBG_FUNCTION(Script::Register::SetRSI)
DBG_FUNCTION(Script::Register::GetSIL)
DBG_FUNCTION(Script::Register::SetSIL)
DBG_FUNCTION(Script::Register::GetRDI)
DBG_FUNCTION(Script::Register::SetRDI)
DBG_FUNCTION(Script::Register::GetDIL)
DBG_FUNCTION(Script::Register::SetDIL)
DBG_FUNCTION(Script::Register::GetRBP)
DBG_FUNCTION(Script::Register::SetRBP)
DBG_FUNCTION(Script::Register::GetBPL)
DBG_FUNCTION(Script::Register::SetBPL)
DBG_FUNCTION(Script::Register::GetRSP)
DBG_FUNCTION(Script::Register::SetRSP)
DBG_FUNCTION(Script::Register::GetSPL)
DBG_FUNCTION(Script::Register::SetSPL)
DBG_FUNCTION(Script::Register::GetRIP)
DBG_FUNCTION(Script::Register::SetRIP)
DBG_FUNCTION(Script::Register::GetR8)
DBG_FUNCTION(Script::Register::SetR8)
DBG_FUNCTION(Script::Register::GetR8D)
DBG_FUNCTION(Script::Register::SetR8D)
DBG_FUNCTION(Script::Register::GetR8W)
DBG_FUNCTION(Script::Register::SetR8W)
DBG_FUNCTION(Script::Register::GetR8B)
DBG_FUNCTION(Script::Register::SetR8B)
DBG_FUNCTION(Script::Register::GetR9)
DBG_FUNCTION(Script::Register::SetR9)
DBG_FUNCTION(Script::Register::GetR9D)
DBG_FUNCTION(Script::Register::SetR9D)
DBG_FUNCTION(Script::Register::GetR9W)
DBG_FUNCTION(Script::Register::SetR9W)
DBG_FUNCTION(Script::Register::GetR9B)
DBG_FUNCTION(Script::Register::SetR9B)
DBG_FUNCTION(Script::Register::GetR10)
DBG_FUNCTION(Script::Register::SetR10)
DBG_FUNCTION(Script::Register::GetR10D)
DBG_FUNCTION(Script::Register::SetR10D)
DBG_FUNCTION(Script::Register::GetR10W)
DBG_FUNCTION(Script::Register::SetR10W)
DBG_FUNCTION(Script::Register::GetR10B)
DBG_FUNCTION(Script::Register::SetR10B)
DBG_FUNCTION(Script::Register::GetR11)
DBG_FUNCTION(Script::Register::SetR11)
DBG_FUNCTION(Script::Register::GetR11D)
DBG_FUNCTION(Script::Register::SetR11D)
DBG_FUNCTION(Script::Register::GetR11W)
DBG_FUNCTION(Script::Register::SetR11W)
DBG_FUNCTION(Script::Register::GetR11B)
DBG_FUNCTION(Script::Register::SetR11B)
DBG_FUNCTION(Script::Register::GetR12)
DBG_FUNCTION(Script::Register::SetR12)
DBG_FUNCTION(Script::Register::GetR12D)
DBG_FUNCTION(Script::Register::SetR12D)
DBG_FUNCTION(Script::Register::GetR12W)
DBG_FUNCTION(Script::Register::SetR12W)
DBG_FUNCTION(Script::Register::GetR12B)
DBG_FUNCTION(Script::Register::SetR12B)
DBG_FUNCTION(Script::Register::GetR13)
DBG_FUNCTION(Script::Register::SetR13)
DBG_FUNCTION(Script::Register::GetR13D)
DBG_FUNCTION(Script::Register::SetR13D)
DBG_FUNCTION(Script::Register::GetR13W)
DBG_FUNCTION(Script::Register::SetR13W)
DBG_FUNCTION(Script::Register::GetR13B)
DBG_FUNCTION(Script::Register::SetR13B)
DBG_FUNCTION(Script::Register::GetR14)
DBG_FUNCTION(Script::Register::SetR14)
DBG_FUNCTION(Script::Register::GetR14D)
DBG_FUNCTION(Script::Register::SetR14D)
DBG_FUNCTION(Script::Register::GetR14W)
DBG_FUNCTION(Script::Register::SetR14W)
DBG_FUNCTION(Script::Register::GetR14B)
DBG_FUNCTION(Script::Register::SetR14B)
DBG_FUNCTION(Script::Register::GetR15)
DBG_FUNCTION(Script::Register::SetR15)
DBG_FUNCTION(Script::Register::GetR15D)
DBG_FUNCTION(Script::Register::SetR15D)
DBG_FUNCTION(Script::Register::GetR15W)
DBG_FUNCTION(Script::Register::SetR15W)
DBG_FUNCTION(Script::Register::GetR15B)
DBG_FUNCTION(Script::Register::SetR15B)
#endif //_WIN64

DBG_FUNCTION(Script::Register::GetCIP)
DBG_FUNCTION(Script::Register::SetCIP)
DBG_FUNCTION(Script::Register::GetCSP)
DBG_FUNCTION(Script::Register::SetCSP)

DBG_FUNCTION(Script::Stack::Pop)
DBG_FUNCTION(Script::Stack::Push)
DBG_FUNCTION(Script::Stack::Peek)

DBG_FUNCTION(Script::Assembler::AssembleMem)
#undef DBG_FUNCTION
