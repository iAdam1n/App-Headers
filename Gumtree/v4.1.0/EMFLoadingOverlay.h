/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 5:05:11 PM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /private/var/mobile/Containers/Bundle/Application/BE5DA1E5-E5C1-4952-A4BE-28BA22319130/Gumtree.app/Gumtree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Gumtree/Gumtree-Structs.h>
#import <UIKit/UIView.h>

@class UIView, UIActivityIndicatorView, UILabel, NSTimer;

@interface EMFLoadingOverlay : UIView {

	UIView* viewToOverlay;
	UIActivityIndicatorView* loadingActivityIndicator;
	UILabel* loadingLabel;
	int overlayLoadsInProgress;
	BOOL _displaysElapsedTime;
	NSTimer* _elapsedTimeCallbackTimer;
	UILabel* _elapsedTime;
	double _timerSlop;

}

@property (nonatomic,retain) UILabel * loadingLabel; 
@property (assign,nonatomic) BOOL displaysElapsedTime;                               //@synthesize displaysElapsedTime=_displaysElapsedTime - In the implementation block
@property (assign,nonatomic,__weak) NSTimer * elapsedTimeCallbackTimer;              //@synthesize elapsedTimeCallbackTimer=_elapsedTimeCallbackTimer - In the implementation block
@property (nonatomic,retain) UILabel * elapsedTime;                                  //@synthesize elapsedTime=_elapsedTime - In the implementation block
@property (assign) double timerSlop;                                                 //@synthesize timerSlop=_timerSlop - In the implementation block
+(id)overlayInParent:(id)arg1 withTitle:(id)arg2 ;
+(id)incrementOverlay:(id)arg1 inParent:(id)arg2 withTitle:(id)arg3 ;
-(void)incrementOverlay;
-(id)initWithView:(id)arg1 withTitle:(id)arg2 ;
-(void)centerInSuperview;
-(CGSize)sizeOfString:(id)arg1 font:(id)arg2 constrainedToSize:(CGSize)arg3 lineBreakMode:(long long)arg4 ;
-(BOOL)displaysElapsedTime;
-(NSTimer *)elapsedTimeCallbackTimer;
-(void)setElapsedTimeCallbackTimer:(NSTimer *)arg1 ;
-(double)timerSlop;
-(void)setTimerSlop:(double)arg1 ;
-(void)cancelOverlay;
-(void)decrementOverlay;
-(void)setDisplaysElapsedTime:(BOOL)arg1 ;
-(void)setElapsedTime:(UILabel *)arg1 ;
-(void)hide;
-(void)show;
-(void)layoutSubviews;
-(BOOL)isActive;
-(void)timerFired:(id)arg1 ;
-(BOOL)isVisible;
-(UILabel *)elapsedTime;
-(void)setLoadingLabel:(UILabel *)arg1 ;
-(UILabel *)loadingLabel;
@end

