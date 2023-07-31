
local OrionLib = loadstring(game:HttpGet(('https://raw.githubusercontent.com/shlexware/Orion/main/source')))()
local Window = OrionLib:MakeWindow({Name = "Da Rizz Studio Hub", HidePremium = false, IntroText = "Da Rizz Studio Hub",SaveConfig = true, ConfigFolder = "OrionTest"})
	
local ToggleTab = Window:MakeTab({
	Name = "Toggles",
	Icon = "rbxassetid://4483345998",
	PremiumOnly = false
})

local HubTab = Window:MakeTab({
	Name = "Main Hub",
	Icon = "rbxassetid://7733960981",
	PremiumOnly = false
})

local PopularUI = Window:MakeTab({
	Name = "PopularUI",
	Icon = "rbxassetid://7733960981",
	PremiumOnly = false
})

HubTab:AddToggle({
	Name = "Hello",
	Default = false,
	Callback = function(Value)
		print("hi")
	end    
}) 



ToggleTab:AddSlider({
	Name = "Speed!",
	Min = 16,
	Max = 500,
	Default = 5,
	Color = Color3.fromRGB(255,255,255),
	Increment = 3,
	ValueName = "Speed",
	Callback = function(Value)
		game.Players.LocalPlayer.Character.Humanoid.WalkSpeed = Value
	end    
})

 

local Input = ToggleTab:CreateInput({
	Name = "Jump Power"
	PlaceHolderText = "1-200"
	RemoveTextAfterFocusLost= true
Callback = function(Text)
	game.Player.LocalPlayer.Character.Humanoid.JumpPower = (Text)
end,
})


OrionLib:Init()
