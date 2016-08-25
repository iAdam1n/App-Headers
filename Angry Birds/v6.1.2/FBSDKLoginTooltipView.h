/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 12:01:47 AM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/3822BE3B-29D4-4DEB-BFFF-FDA22D01C707/AngryBirdsClassic.app/AngryBirdsClassic
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AngryBirdsClassic/AngryBirdsClassic-Structs.h>
#import <AngryBirdsClassic/FBSDKTooltipView.h>

@protocol FBSDKLoginTooltipViewDelegate;
@interface FBSDKLoginTooltipView : FBSDKTooltipView {

	BOOL _forceDisplay;
	id<FBSDKLoginTooltipViewDelegate> _delegate;

}

@property (assign,nonatomic) id<FBSDKLoginTooltipViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) BOOL forceDisplay;                                       //@synthesize forceDisplay=_forceDisplay - In the implementation block
-(void)setForceDisplay:(BOOL)arg1 ;
-(BOOL)forceDisplay;
-(void)presentInView:(id)arg1 withArrowPosition:(CGPoint)arg2 direction:(unsigned long long)arg3 ;
-(void)setDelegate:(id<FBSDKLoginTooltipViewDelegate>)arg1 ;
-(id)init;
-(id<FBSDKLoginTooltipViewDelegate>)delegate;
@end

