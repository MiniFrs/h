local OrionLib = loadstring(game:HttpGet(('https://raw.githubusercontent.com/shlexware/Orion/main/source')))()
local Window = OrionLib:MakeWindow({Name = "Da Rizz Studio's", HidePremium = false, SaveConfig = true, ConfigFolder = "OrionTest"})

local ToggleTab = Window:MakeTab({
	Name = "Toggles",
	Icon = "rbxassetid://4483345998",
	PremiumOnly = false
})
ToggleTab:AddDropdown({
	Name = "Toggles",
	Default = "1",
	Options = {"1", "2"},
	Callback = function(Value)
		game.Players.LocalPlayer.Character.Humanoid.JumpPower = 200
	end    
})
local HubTab = Window:MakeTab({
	Name = "Main Hub",
	Icon = "rbxassetid://4483345998",
	PremiumOnly = false
})

local Hub = HubTab:AddSection({
	Name = "Hub"
})
local PlayerToggles = Tab:AddSection({
	Name = "PlayerToggles"
})

ToggleTab:AddToggle({
	Name = "Jump High",
	Default = false,
	Callback = function(Value)
		game.Players.LocalPlayer.Character.Humanoid.JumpPower = 200
	end    
})



Hub:NewSlider("Speed", "Choose your speed", 500, 0, function(s) -- 500 (MaxValue) | 0 (MinValue)
        game.Players.LocalPlayer.Character.Humanoid.WalkSpeed = s
end)

Hub:NewToggle("Jump High", "Jump really high", function(state)
        if state then
            game.Players.LocalPlayer.Character.Humanoid.JumpPower = 200
        else
            game.Players.LocalPlayer.Character.Humanoid.JumpPower = 50
        end
end)

Hub:NewToggle("", "Jump really high", function(state)
        if state then
            print(1)
        else
            print(1)
        end
end)


Hub:NewToggle("Jump High", "Jump really high", function(state)
        if state then
            print(1)
        else
            print(1)
        end
end)

OrionLib:Init()
