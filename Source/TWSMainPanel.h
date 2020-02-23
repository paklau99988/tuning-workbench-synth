/*
  ==============================================================================

  This is an automatically generated GUI class created by the Projucer!

  Be careful when adding custom code to these files, as only the code within
  the "//[xyz]" and "//[/xyz]" sections will be retained when the file is loaded
  and re-saved.

  Created with Projucer version: 5.4.7

  ------------------------------------------------------------------------------

  The Projucer is part of the JUCE library.
  Copyright (c) 2017 - ROLI Ltd.

  ==============================================================================
*/

#pragma once

//[Headers]     -- You can add your own extra header files here --
#include <JuceHeader.h>

class TWSTextAndControls;
class TWSTuningGrid;
//[/Headers]



//==============================================================================
/**
                                                                    //[Comments]
    An auto-generated component, created by the Projucer.

    Describe your class and how it works here!
                                                                    //[/Comments]
*/
class TWSMainPanel  : public Component,
                      public FileDragAndDropTarget,
                      public Button::Listener
{
public:
    //==============================================================================
    TWSMainPanel (TuningworkbenchsynthAudioProcessor &p);
    ~TWSMainPanel() override;

    //==============================================================================
    //[UserMethods]     -- You can add your own custom methods in this section.
    void connectValueTreeState( AudioProcessorValueTreeState &p );
    virtual bool isInterestedInFileDrag (const StringArray& files) override {
        return true; // FIXME
    }
    //[/UserMethods]

    void paint (Graphics& g) override;
    void resized() override;
    void buttonClicked (Button* buttonThatWasClicked) override;
    void filesDropped (const StringArray& filenames, int mouseX, int mouseY) override;



private:
    //[UserVariables]   -- You can add your own custom variables in this section.
    TuningworkbenchsynthAudioProcessor &processor;
    TWSTextAndControls *sclTextAndControls, *kbmTextAndControls;

    typedef AudioProcessorValueTreeState::SliderAttachment SliderAttachment;
    std::vector<std::unique_ptr<SliderAttachment>> sliderAttachments;
    typedef AudioProcessorValueTreeState::ButtonAttachment ButtonAttachment;
    std::vector<std::unique_ptr<ButtonAttachment>> buttonAttachments;
    //[/UserVariables]

    //==============================================================================
    std::unique_ptr<GroupComponent> groupComponent7;
    std::unique_ptr<GroupComponent> groupComponent3;
    std::unique_ptr<GroupComponent> groupComponent2;
    std::unique_ptr<GroupComponent> groupComponent;
    std::unique_ptr<Slider> squareMix;
    std::unique_ptr<TabbedComponent> tabbedComponent;
    std::unique_ptr<Slider> sineMix;
    std::unique_ptr<Slider> sawMix;
    std::unique_ptr<Slider> triMix;
    std::unique_ptr<Slider> AEG_A;
    std::unique_ptr<Slider> FEG_A;
    std::unique_ptr<Slider> AEG_D;
    std::unique_ptr<Slider> FEG_D;
    std::unique_ptr<Slider> AEG_S;
    std::unique_ptr<Slider> FEG_S;
    std::unique_ptr<Slider> AEG_R;
    std::unique_ptr<Slider> FEG_R;
    std::unique_ptr<GroupComponent> groupComponent4;
    std::unique_ptr<Slider> Filt_Cutoff;
    std::unique_ptr<Slider> Filt_Q;
    std::unique_ptr<ToggleButton> LPFToggle;
    std::unique_ptr<ToggleButton> HPToggle;
    std::unique_ptr<ToggleButton> BPFTogle;
    std::unique_ptr<GroupComponent> groupComponent5;
    std::unique_ptr<Slider> master_sat;
    std::unique_ptr<Slider> master_out;
    std::unique_ptr<Slider> FEG_depth;
    std::unique_ptr<Slider> uni_spread;
    std::unique_ptr<Slider> uni_count;
    std::unique_ptr<GroupComponent> groupComponent6;
    std::unique_ptr<Slider> pb_down;
    std::unique_ptr<Slider> pb_up;
    std::unique_ptr<Label> version;
    std::unique_ptr<TWSTuningGrid> tuningGrid;
    std::unique_ptr<TextButton> aboutButton;


    //==============================================================================
    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (TWSMainPanel)
};

//[EndFile] You can add extra defines here...
//[/EndFile]
