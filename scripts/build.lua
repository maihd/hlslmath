--
-- HLSL Math build system
--

function io.fileexists(filename)
   local file = io.open(filename)
   if file then
      file:close()
      return true
   else
      return false
   end
end

function build()
   local targetFileName = "../hlslmath.h"
   local totalFileNames = {
      "../src/hlsldef.h",
      "../src/hlsltypes.h",
      "../src/hlslcommon.h",
      
      "../src/hlslint.h",
      "../src/hlslint2.h",
      "../src/hlslint3.h",
      "../src/hlslint4.h",
      "../src/hlsluint.h",
      "../src/hlslfloat.h",
      "../src/hlslfloat2.h",
      "../src/hlslfloat3.h",
      "../src/hlslfloat4.h",

      "../src/hlslfloat2x2.h",
      "../src/hlslfloat3x3.h",
      "../src/hlslfloat4x4.h",
   }
   
   local targetFile = io.open(targetFileName, "w+")
   for i, v in ipairs(totalFileNames) do
      local file = io.open(v)
      targetFile:write(file:read("*a"))
      targetFile:write("\n")
      file:close()
   end
   targetFile:close()
end

-- Execute build
build()
