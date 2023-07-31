local OrionLib = loadstring(game:HttpGet(('https://raw.githubusercontent.com/shlexware/Orion/main/source')))()
local Window = OrionLib:MakeWindow({Name = "Da Rizz Studio's", HidePremium = false, IntroText = "Da Rizz Studio Hub",SaveConfig = true, ConfigFolder = "OrionTest"})
	
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
HubTab:AddToggle({
	Name = "Hello",
	Default = false,
	Callback = function(Value)
		print("hello")
	end    
}) 


        
ToggleTab:AddToggle({
	Name = "Super Speed",
	Default = false,
	Callback = function(Value)
		game.Players.LocalPlayer.Character.Humanoid.WalkSpeed = 200
end
	})

ToggleTab:AddToggle({
	Name = "Jump High",
	Default = false,
	Callback = function(Value)
		game.Players.LocalPlayer.Character.Humanoid.JumpPower = 100
	end    
}) 




OrionLib:Init()
