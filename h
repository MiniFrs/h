local OrionLib = loadstring(game:HttpGet(('https://raw.githubusercontent.com/shlexware/Orion/main/source')))()
local Window = OrionLib:MakeWindow({Name = "Da Rizz Studio Hub",HidePremium = false,IntroText = "Da Rizz Studio Hub",SaveConfig = true,ConfigFolder = "OrionTest"})
	
local ToggleTab = Window:MakeTab({
	Name = "Toggles",
	Icon = "rbxassetid://4483345998",
	PremiumOnly = false
})


local PopularTab = Window:MakeTab({
	Name = "PopularUI",
	Icon = "rbxassetid://4483345998",
	PremiumOnly = false
})


local HubTab = Window:MakeTab({
	Name = "Main Hub",
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



PopularTab:AddButton({
	Name = "BrookhavenUI!",
	Callback = function()
      		loadstring(game:HttpGet(('https://raw.githubusercontent.com/rblxscriptsnet/unfair/main/rblxhub.lua'),true))()
  	end
})

Tab:AddButton({
	Name = "Button!",
	Callback = function()
      		loadstring(game:HttpGet('https://raw.githubusercontent.com/lerkermer/lua-projects/master/SwagModeV002'))()
  	end    
})


OrionLib:Init()

