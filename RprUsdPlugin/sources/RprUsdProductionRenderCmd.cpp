/**********************************************************************
Copyright 2020 Advanced Micro Devices, Inc
Licensed under the Apache License, Version 2.0 (the "License");
you may not use this file except in compliance with the License.
You may obtain a copy of the License at
	http://www.apache.org/licenses/LICENSE-2.0
Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an "AS IS" BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License.
********************************************************************/

#include "RprUsdProductionRenderCmd.h"

MString RprUsdProductionRenderCmd::s_commandName = "RprUsdRender";


// MPxCommand Implementation
// -----------------------------------------------------------------------------
void* RprUsdProductionRenderCmd::creator()
{
	return new RprUsdProductionRenderCmd;
}

// -----------------------------------------------------------------------------
MSyntax RprUsdProductionRenderCmd::newSyntax()
{
	MSyntax syntax;

	CHECK_MSTATUS(syntax.addFlag(kCameraFlag, kCameraFlagLong, MSyntax::kString));
	CHECK_MSTATUS(syntax.addFlag(kRenderLayerFlag, kRenderLayerFlagLong, MSyntax::kString));
	CHECK_MSTATUS(syntax.addFlag(kWidthFlag, kWidthFlagLong, MSyntax::kLong));
	CHECK_MSTATUS(syntax.addFlag(kHeightFlag, kHeightFlagLong, MSyntax::kLong));
	CHECK_MSTATUS(syntax.addFlag(kStartFlag, kStartFlagLong, MSyntax::kNoArg));
	CHECK_MSTATUS(syntax.addFlag(kStopFlag, kStopFlagLong, MSyntax::kNoArg));

	CHECK_MSTATUS(syntax.addFlag(kIsRunningFlag, kIsRunningFlagLong, MSyntax::kNoArg));
	CHECK_MSTATUS(syntax.addFlag(kProductionIsRunningFlag, kProductionIsRunningFlagLong, MSyntax::kNoArg));

	return syntax;
}

// -----------------------------------------------------------------------------
MStatus RprUsdProductionRenderCmd::doIt(const MArgList & args)
{
	// Parse arguments.
	MArgDatabase argData(syntax(), args);


	return MStatus::kSuccess;
}

// Static Methods
// -----------------------------------------------------------------------------
void RprUsdProductionRenderCmd::cleanUp()
{
}


