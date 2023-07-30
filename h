local OrionLib = loadstring(game:HttpGet(('https://raw.githubusercontent.com/shlexware/Orion/main/source')))()
local Window = OrionLib:MakeWindow({Name = "Da Rizz Studio's", HidePremium = false, SaveConfig = true, ConfigFolder = "OrionTest"})
	
local ToggleTab = Window:MakeTab({
	Name = "Toggles",
	Icon = "rbxassetid://4483345998",
	PremiumOnly = false
})

local HubTab = Window:MakeTab({
	Name = "Main Hub",
	Icon = "rbxassetid://4483345998",
	PremiumOnly = false
})

local Hub = HubTab:AddSection({
	Name = "Hub"
})
ToggleTab:AddToggle({
	Name = "Jump High",
	Default = false,
	Callback = function(Value)
		game.Players.LocalPlayer.Character.Humanoid.JumpPower = 100
	end    
}) 


        
ToggleTab:AddToggle({
	Name = "This is a toggle!",
	Default = false,
	Callback = function(Value)
		game.Players.LocalPlayer.Character.Humanoid.WalkSpeed = 200
	end    
})

PlayerToggle:Set(true)





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
