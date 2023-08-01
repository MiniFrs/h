local OrionLib = loadstring(game:HttpGet(('https://raw.githubusercontent.com/shlexware/Orion/main/source')))()
local Window = OrionLib:MakeWindow({Name = "Da Rizz Studio Hub",HidePremium = false,IntroText = "Da Rizz Studio Hub",SaveConfig = true,ConfigFolder = "OrionTest"})

local ToggleTab = Window:MakeTab({
	Name = "Toggles",
	Icon = "rbxassetid://4483345998",
	PremiumOnly = false
})


local PopularTab = Window:MakeTab({
	Name = "PopularUI",
	Icon = "rbxassetid://7734042071",
	PremiumOnly = false
})

local ToggleSection = ToggleTab:AddSection({
	Name = "Toggle"
})

local HubTab = Window:MakeTab({
	Name = "Main Hub",
	Icon = "rbxassetid://7733960981",
	PremiumOnly = false
})

function 
HubTab:AddToggle({
	Name = "Hello",
	Default = false,
	Callback = function(Value)
	
	end    
}) 


ToggleTab:AddButton({
	Name = "Fly Gui!",
	Callback = function()
      		loadstring(game:HttpGet("https://raw.githubusercontent.com/MiniUnbloxks/A/main/B"))()
  	end
})



ToggleSection:NewToggle("Speed", "Choose your speed", function(state)
    if state then
        game.Player.LocalPlayer.Character.Humanoid.WalkSpeed = 180
    else
        game.Player.LocalPlayer.Character.Humanoid.WalkSpeed = 16
    end
end)



ToggleTab:AddButton({
	Name = "Reset!",
	Callback = function()
				game.Players.LocalPlayer.Character.Humanoid.Health = 0
  	end
})



PopularTab:AddButton({
	Name = "BrookhavenUI!",
	Callback = function()
      		loadstring(game:HttpGet("https://raw.githubusercontent.com/IceMael7/NewIceHub/main/Brookhaven"))()
  	end
})

PopularTab:AddButton({
	Name = "SwagMode!",
	Callback = function()
      		loadstring(game:HttpGet('https://raw.githubusercontent.com/lerkermer/lua-projects/master/SwagModeV002'))()
  	end    
})


OrionLib:Init()

