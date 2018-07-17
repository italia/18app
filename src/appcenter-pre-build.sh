#!/bin/bash
find $APPCENTER_SOURCE_DIRECTORY -name '*.sln' -print0 | xargs -0 -n1 nuget restore -DisableParallelProcessing