#pragma once
#include <JuceHeader.h>

//==============================================================================
/** Injury dark gothic look and feel — black, blood red accents, grunge. */
class InjuryLAF : public juce::LookAndFeel_V4
{
public:
    // Palette
    static const juce::Colour kBg;       // near-black background
    static const juce::Colour kPanel;    // dark panel
    static const juce::Colour kBorder;   // dim border
    static const juce::Colour kAccent;   // blood red / crimson
    static const juce::Colour kAccent2;  // dim rust
    static const juce::Colour kDim;      // dim text
    static const juce::Colour kTrack;    // track bg

    InjuryLAF();

    void drawRotarySlider (juce::Graphics&, int x, int y, int w, int h,
                           float sliderPos, float startAngle, float endAngle,
                           juce::Slider&) override;

    void drawLinearSlider (juce::Graphics&, int x, int y, int w, int h,
                           float sliderPos, float minPos, float maxPos,
                           juce::Slider::SliderStyle, juce::Slider&) override;

    void drawButtonBackground (juce::Graphics&, juce::Button&,
                               const juce::Colour& bg,
                               bool highlighted, bool down) override;

    void drawToggleButton (juce::Graphics&, juce::ToggleButton&,
                           bool highlighted, bool down) override;

    juce::Label* createSliderTextBox (juce::Slider&) override;
    juce::Font   getLabelFont        (juce::Label&)  override;

    /** Draw a section background with scratchy border and subtle title. */
    static void paintGrungePanelBg (juce::Graphics& g, juce::Rectangle<int> bounds,
                                     const juce::String& title = {});

    /** Draw the "INJURY" title with layered distressed text. */
    static void paintInjuryTitle (juce::Graphics& g, juce::Rectangle<int> bounds);
};
