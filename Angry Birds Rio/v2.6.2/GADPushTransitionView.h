/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:59:40 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/2A9FB5F5-F793-4429-94C0-AF0877EC9D65/AngryBirdsRio.app/AngryBirdsRio
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AngryBirdsRio/AngryBirdsRio-Structs.h>
#import <UIKit/UIView.h>

@class NSArray, UIView;

@interface GADPushTransitionView : UIView {

	NSArray* _views;
	UIView* _clippingView;
	UIView* _currentView;
	unsigned long long _currentViewIndex;
	double _presentationDuration;
	double _animationDuration;
	long long _animationGroupIdentifier;

}

@property (nonatomic,readonly) long long animationGroupIdentifier;              //@synthesize animationGroupIdentifier=_animationGroupIdentifier - In the implementation block
-(void)setCurrentView:(id)arg1 ;
-(void)dispatchAnimation;
-(long long)animationGroupIdentifier;
-(void)setPresentationDuration:(double)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setAnimationDuration:(double)arg1 ;
-(void)animate;
-(void)commonInit;
-(void)setViews:(id)arg1 ;
@end

