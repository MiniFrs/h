local Library = loadstring(game:HttpGet("https://raw.githubusercontent.com/xHeptc/Kavo-UI-Library/main/source.lua"))()
local Window = Library.CreateLib("Mini's Studio Hub", "MidNight") 
if game.PlaceId == 2788229376 then
    local Main = Window:NewTab("Main")
    local MainSection = Tab:NewSection("MainSection")
    local Toggles = Window:NewTab("Toggles")
    local ToggleSection = Tab:NewSection("ToggleSection")
    local OtherUI = Window:NewTab("Other UI")
    local UISection = Tab:NewSection("UI Section")

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
            
        else
            
        end
    end)


    MainSection:NewToggle("Jump High", "Jump really high", function(state)
        if state then

        else
            game.Players.LocalPlayer.Character.Humanoid.JumpPower = 50
        end
    end)


    OtherUI:NewButton("Faded", "Faded UI", function()
        loadstring(game:HttpGet("https://raw.githubusercontent.com/NighterEpic/Faded/main/YesEpic", true))()
    end)

    OtherUI:NewButton("SWAG MODE", "Swag Mode UI", function()
        loadstring(game:HttpGet("loadstring(game:HttpGet("https://raw.githubusercontent.com/lerkermer/lua-projects/master/SwagModeV002"))()", true))()
    end)

    OtherUI:NewButton("Faded", "Faded UI", function()
        loadstring(game:HttpGet("https://raw.githubusercontent.com/NighterEpic/Faded/main/YesEpic", true))()
    end)

end
