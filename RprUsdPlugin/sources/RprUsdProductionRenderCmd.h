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

#ifndef __RPRUSDPRODUCTIONRENDERCMD__
#define __RPRUSDPRODUCTIONRENDERCMD__

#include <maya/MPxCommand.h>
#include <maya/MSyntax.h>
#include <maya/MArgDatabase.h>
#include <maya/MDagPath.h>
#include <maya/MCommonRenderSettingsData.h>

// Command arguments.
#define kCameraFlag "-cam"
#define kCameraFlagLong "-camera"
#define kRenderLayerFlag "-l"
#define kRenderLayerFlagLong "-layer"
#define kWidthFlag "-w"
#define kWidthFlagLong "-width"
#define kHeightFlag "-h"
#define kHeightFlagLong "-height"

#define kStartFlag "-s"
#define kStartFlagLong "-start"

#define kStopFlag "-st"
#define kStopFlagLong "-stop"

#define kIsRunningFlag "-ir"
#define kIsRunningFlagLong "-isRunning"

#define kProductionIsRunningFlag "-ifr"
#define kProductionIsRunningFlagLong "-isProductionRunning"


/** Perform a single frame */
class RprUsdProductionRenderCmd : public MPxCommand
{
public:

	// MPxCommand Implementation
	// -----------------------------------------------------------------------------

	/**
	 * Perform a render command to either start or
	 * communicate with a frame, IPR or batch render.
	 */
	MStatus doIt(const MArgList& args) override;

	/** Used by Maya to create the command instance. */
	static void* creator();

	/** Return the command syntax object. */
	static MSyntax newSyntax();


	// Static Methods
	// -----------------------------------------------------------------------------

	/** Clean up before plug-in shutdown. */
	static void cleanUp();

public:
	static MString s_commandName;

private:

};

#endif //__RPRUSDPRODUCTIONRENDERCMD__