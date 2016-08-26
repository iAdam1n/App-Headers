/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:53:37 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D5AA3D7F-F68B-43D8-8CC1-85DAFE886350/Telegram.app/Telegram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Telegram/Telegram-Structs.h>
#import <UIKit/UIView.h>

@class TGStaticBackdropAreaData, UIColor, NSString, CALayer;

@interface TGMessageImageViewTimestampView : UIView {

	TGStaticBackdropAreaData* _backdropArea;
	UIColor* _timestampColor;
	NSString* _timestampString;
	NSString* _signatureString;
	BOOL _displayCheckmarks;
	int _checkmarkValue;
	int _checkmarkDisplayValue;
	BOOL _timestampStringSizeCalculated;
	CGSize _timestampStringSize;
	CGSize _signatureStringSize;
	CALayer* _chechmarkFirstLayer;
	CALayer* _chechmarkSecondLayer;
	CALayer* _clockFrameLayer;
	CALayer* _clockMinLayer;
	CALayer* _clockHourLayer;
	BOOL _isBroadcast;
	BOOL _transparent;
	NSString* _viewsString;
	double _maxWidth;

}
+(id)stringForCount:(int)arg1 ;
-(void)setDisplayProgress:(BOOL)arg1 ;
-(void)setIsBroadcast:(BOOL)arg1 ;
-(void)_addFirstCheckmark;
-(void)_addSecondCheckmark;
-(void)_removeCheckmarks;
-(void)updateProgressPosition;
-(void)_addProgress;
-(void)_removeProgress;
-(id)_layerQueue;
-(id)_dequeueLayer;
-(id)_createRotationAnimationWithDuration:(double)arg1 ;
-(CGSize)timestampStringSize;
-(void)_enqueueLayer:(id)arg1 ;
-(id)_checkmarkAnimation;
-(id)timestampFont;
-(double)broadcastIconWidth;
-(double)viewsWidth;
-(CGSize)timestampSize;
-(void)setBackdropArea:(id)arg1 transitionDuration:(double)arg2 ;
-(void)setTimestampColor:(id)arg1 ;
-(void)setTimestampString:(id)arg1 signatureString:(id)arg2 displayCheckmarks:(BOOL)arg3 checkmarkValue:(int)arg4 displayViews:(BOOL)arg5 viewsValue:(int)arg6 animated:(BOOL)arg7 ;
-(CGSize)sizeForMaxWidth:(double)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)drawRect:(CGRect)arg1 ;
-(void)didMoveToWindow;
-(void)setFrame:(CGRect)arg1 ;
-(void)setTransparent:(BOOL)arg1 ;
@end
