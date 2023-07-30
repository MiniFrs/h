local OrionLib = loadstring(game:HttpGet(('https://raw.githubusercontent.com/shlexware/Orion/main/source')))()
local Window = OrionLib:MakeWindow({Name = "Testinf", HidePremium = false, SaveConfig = true, ConfigFolder = "OrionTest"})

local Main = Window:NewTab("Main")
local Section = Window:AddSection({
	Name = "Home"
})
local main = Window:MakeTab({
	Name = "Thing 1",
	Icon = "rbxassetid://4483345998",
	PremiumOnly = false
})
Section:NewSlider("Speed", "Choose your speed", 500, 0, function(s) -- 500 (MaxValue) | 0 (MinValue)
        game.Players.LocalPlayer.Character.Humanoid.WalkSpeed = s
end)

Section:NewToggle("Jump High", "Jump really high", function(state)
        if state then
            game.Players.LocalPlayer.Character.Humanoid.JumpPower = 200
        else
            game.Players.LocalPlayer.Character.Humanoid.JumpPower = 50
        end
end)

Section:NewToggle("", "Jump really high", function(state)
        if state then
            print(1)
        else
            print(1)
        end
end)


Section:NewToggle("Jump High", "Jump really high", function(state)
        if state then
            print(1)
        else
            print(1)
        end
end)
