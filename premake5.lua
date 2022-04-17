workspace "Hydromize"
  architecture "x86_64"
  startproject "Core"

  configurations { "Debug", "Release" }

  flags { "MultiProcessorCompile" }

outputdir = "%{cfg.buildcfg}-%{cfg.system}-%{cfg.architecture}"

group "Dependencies"
  include "ThirdParty/Premake"
group ""

include "Core"