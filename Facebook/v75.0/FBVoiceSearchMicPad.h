/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:01 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <UIKit/UIView.h>

@class FBButton, NSDictionary, FBAudioVisualizerWave, UIView, UIActivityIndicatorView;

@interface FBVoiceSearchMicPad : UIView {

	FBButton* _searchButton;
	FBButton* _closeButton;
	NSDictionary* _buttonConfigForState;
	FBAudioVisualizerWave* _wave;
	UIView* _backgroundView;
	UIActivityIndicatorView* _spinner;
	/*^block*/id _onTapClose;
	/*^block*/id _onTapSearch;

}

@property (nonatomic,copy) id onTapClose;                               //@synthesize onTapClose=_onTapClose - In the implementation block
@property (nonatomic,copy) id onTapSearch;                              //@synthesize onTapSearch=_onTapSearch - In the implementation block
@property (nonatomic,retain) FBAudioVisualizerWave * wave;              //@synthesize wave=_wave - In the implementation block
-(void)setupBackground;
-(void)setupButtons;
-(void)displayStep:(unsigned long long)arg1 ;
-(void)setupSearchButtonConfigs;
-(void)didTapSearch;
-(void)didTapClose;
-(id)onTapClose;
-(void)setOnTapClose:(id)arg1 ;
-(id)onTapSearch;
-(void)setOnTapSearch:(id)arg1 ;
-(FBAudioVisualizerWave *)wave;
-(void)setWave:(FBAudioVisualizerWave *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
@end
