/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:23 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIView.h>
#import <Facebook/FBSpeechRecognitionServiceListener.h>

@class FBSpeechRecognitionService, UIButton, UIActivityIndicatorView, UIImageView, UIColor, NSString;

@interface FBSpeechRecoButton : UIView <FBSpeechRecognitionServiceListener> {

	FBSpeechRecognitionService* _client;
	UIButton* _button;
	UIActivityIndicatorView* _spinner;
	UIImageView* _micView;
	double _roundedCornerRadius;
	double _micScale;
	UIColor* _micOutlineColor;
	UIColor* _spinnerColor;
	UIColor* _bgInactiveColor;
	UIColor* _bgListeningColor;

}

@property (nonatomic,readonly) FBSpeechRecognitionService * client;              //@synthesize client=_client - In the implementation block
@property (assign,nonatomic) double roundedCornerRadius;                         //@synthesize roundedCornerRadius=_roundedCornerRadius - In the implementation block
@property (assign,nonatomic) double micScale;                                    //@synthesize micScale=_micScale - In the implementation block
@property (nonatomic,retain) UIColor * micOutlineColor;                          //@synthesize micOutlineColor=_micOutlineColor - In the implementation block
@property (nonatomic,retain) UIColor * spinnerColor;                             //@synthesize spinnerColor=_spinnerColor - In the implementation block
@property (nonatomic,retain) UIColor * bgInactiveColor;                          //@synthesize bgInactiveColor=_bgInactiveColor - In the implementation block
@property (nonatomic,retain) UIColor * bgListeningColor;                         //@synthesize bgListeningColor=_bgListeningColor - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)onRecognitionEnd;
-(void)didTapButton;
-(void)applyVisualDefaults;
-(void)setMicScale:(double)arg1 ;
-(void)setMicOutlineColor:(UIColor *)arg1 ;
-(void)setBgInactiveColor:(UIColor *)arg1 ;
-(void)setBgListeningColor:(UIColor *)arg1 ;
-(void)didStartRec;
-(void)didStopRec;
-(double)micScale;
-(UIColor *)micOutlineColor;
-(UIColor *)bgInactiveColor;
-(UIColor *)bgListeningColor;
-(void)layoutSubviews;
-(UIColor *)spinnerColor;
-(FBSpeechRecognitionService *)client;
-(id)initWithSession:(id)arg1 ;
-(void)addListener:(id)arg1 ;
-(void)removeListener:(id)arg1 ;
-(void)setRoundedCornerRadius:(double)arg1 ;
-(double)roundedCornerRadius;
-(void)setSpinnerColor:(UIColor *)arg1 ;
@end
