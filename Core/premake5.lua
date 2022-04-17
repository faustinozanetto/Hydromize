project "Core"
  kind "ConsoleApp"
  language "C++"
  cppdialect "C++20"
  staticruntime "off"

  targetdir ("%{wks.location}/Binaries/" .. outputdir .. "/%{prj.name}")
  objdir ("%{wks.location}/Intermediates/" .. outputdir .. "/%{prj.name}")

  files
	{
		"Source/**.h",
		"Source/**.cpp"
  }

  includedirs
	{
		"Source"
  }

  filter "system:windows"
		systemversion "latest"

  filter "configurations:Debug"
		defines "HM_DEBUG"
		runtime "Debug"
		symbols "on"