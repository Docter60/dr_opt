-- premake5.lua
workspace "dr_arg"
   configurations { "Debug" }
   platforms { "Win32", "Win64" }

project "dr_arg"
   kind "ConsoleApp"
   language "C++"
   targetdir "bin/%{cfg.buildcfg}"

   files { "src/**.h", "src/**.c", "src/**.hpp", "src/**.cpp" }

   filter "configurations:Debug"
      defines { "DEBUG" }
      symbols "On"
