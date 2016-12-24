/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:36:39 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/91AA76A0-F2FF-4AAA-BCD2-7E5978B32B63/Skype.app/Skype
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIView.h>

@class MKButton, SKPSwiftCardChatCellStylesheet, UISlider, UILabel, UIView;

@interface SKPVideoPlayerToolBarView : UIView {

	MKButton* _playButton;
	MKButton* _speakerButton;
	MKButton* _fullScreenToggleButton;
	unsigned long long _toolbarType;
	SKPSwiftCardChatCellStylesheet* _avPlayerViewStylesheet;
	UISlider* _scrubber;
	UILabel* _durationLabel;
	UIView* _scrubberContainerView;

}

@property (nonatomic,readonly) SKPSwiftCardChatCellStylesheet * avPlayerViewStylesheet;              //@synthesize avPlayerViewStylesheet=_avPlayerViewStylesheet - In the implementation block
@property (nonatomic,retain) MKButton * playButton;                                                  //@synthesize playButton=_playButton - In the implementation block
@property (nonatomic,retain) MKButton * speakerButton;                                               //@synthesize speakerButton=_speakerButton - In the implementation block
@property (nonatomic,retain) MKButton * fullScreenToggleButton;                                      //@synthesize fullScreenToggleButton=_fullScreenToggleButton - In the implementation block
@property (nonatomic,retain) UISlider * scrubber;                                                    //@synthesize scrubber=_scrubber - In the implementation block
@property (nonatomic,retain) UILabel * durationLabel;                                                //@synthesize durationLabel=_durationLabel - In the implementation block
@property (assign,nonatomic) unsigned long long toolbarType;                                         //@synthesize toolbarType=_toolbarType - In the implementation block
@property (nonatomic,retain) UIView * scrubberContainerView;                                         //@synthesize scrubberContainerView=_scrubberContainerView - In the implementation block
-(MKButton *)fullScreenToggleButton;
-(void)setToolbarType:(unsigned long long)arg1 ;
-(UILabel *)durationLabel;
-(unsigned long long)toolbarType;
-(SKPSwiftCardChatCellStylesheet *)avPlayerViewStylesheet;
-(id)heightAndWidthConstraintWithView:(id)arg1 forConstant:(double)arg2 ;
-(id)initToolbarWithAudioControls;
-(id)initToolbarWithVideoControls;
-(void)setFullScreenToggleButton:(MKButton *)arg1 ;
-(void)setDurationLabel:(UILabel *)arg1 ;
-(id)init;
-(void)updateConstraints;
-(id)buttonWithTitle:(id)arg1 ;
-(MKButton *)playButton;
-(void)setScrubberContainerView:(UIView *)arg1 ;
-(UIView *)scrubberContainerView;
-(MKButton *)speakerButton;
-(void)setSpeakerButton:(MKButton *)arg1 ;
-(UISlider *)scrubber;
-(void)setScrubber:(UISlider *)arg1 ;
-(void)setPlayButton:(MKButton *)arg1 ;
@end
