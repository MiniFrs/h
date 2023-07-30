local OrionLib = loadstring(game:HttpGet(('https://raw.githubusercontent.com/shlexware/Orion/main/source')))()
local Window = OrionLib:MakeWindow({Name = "Da Rizz Studios", HidePremium = false, SaveConfig = true, ConfigFolder = "OrionTest"})

local Main = Window:NewTab("Main")
local MainSection = main:NewSection("MainSection")

MainSection:NewSlider("Speed", "Choose your speed", 500, 0, function(s) -- 500 (MaxValue) | 0 (MinValue)
        game.Players.LocalPlayer.Character.Humanoid.WalkSpeed = s
end)

MainSection:NewToggle("Jump High", "Jump really high", function(state)
        if state then
            game.Players.LocalPlayer.Character.Humanoid.JumpPower = 200
        else
            game.Players.LocalPlayer.Character.Humanoid.JumpPower = 50
        end
end)

MainSection:NewToggle("", "Jump really high", function(state)
        if state then
            print(1)
        else
            print(1)
        end
end)


MainSection:NewToggle("Jump High", "Jump really high", function(state)
        if state then
            print(1)
        else
            print(1)
        end
end)
