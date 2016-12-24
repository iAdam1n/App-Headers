/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:36:37 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/91AA76A0-F2FF-4AAA-BCD2-7E5978B32B63/Skype.app/Skype
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Skype/Skype-Structs.h>
#import <Skype/SKPMojiStatusBaseView.h>

@class UIButton;

@interface SKPMojiStatusViewPlaying : SKPMojiStatusBaseView {

	/*^block*/id _stopTapBlock;
	UIButton* _button;

}

@property (nonatomic,retain) UIButton * button;              //@synthesize button=_button - In the implementation block
@property (nonatomic,copy) id stopTapBlock;                  //@synthesize stopTapBlock=_stopTapBlock - In the implementation block
-(id)stopTapBlock;
-(void)setStopTapBlock:(id)arg1 ;
-(void)buttonEvent:(id)arg1 ;
-(void)configureStatusElementWithSize:(CGSize)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(UIButton *)button;
-(void)setButton:(UIButton *)arg1 ;
@end
