/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:58:13 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/0CF72264-5488-4FD5-B700-EF786D177983/BubbleMania.app/BubbleMania
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <BubbleMania/BubbleMania-Structs.h>
#import <UIKit/UIView.h>

@class UIView, NSString, GLView;

@interface XibView : UIView {

	UIView* loadedView;
	NSString* portraitNibName;
	NSString* landscapeNibName;
	long long _currentOrientation;
	GLView* _glView;

}

@property (nonatomic,retain) NSString * portraitNibName; 
@property (nonatomic,retain) NSString * landscapeNibName; 
@property (assign,nonatomic) long long currentOrientation;              //@synthesize currentOrientation=_currentOrientation - In the implementation block
@property (nonatomic,retain) GLView * glView;                           //@synthesize glView=_glView - In the implementation block
+(id)cachedLandscapeNibNames;
+(id)cachedPortraitNibNames;
-(void)backPressed;
-(void)playTapSound;
-(BOOL)allowIPadScaling;
-(BOOL)supportsAutorotate;
-(void)setupView;
-(void)setLandscapeNibName:(NSString *)arg1 ;
-(NSString *)landscapeNibName;
-(void)setPortraitNibName:(NSString *)arg1 ;
-(NSString *)portraitNibName;
-(void)setupUIKitView;
-(void)setupS8UIView;
-(void)loadNibObjects:(id)arg1 ;
-(void)initNibNames;
-(id)nibNameForInterfaceOrientation:(long long)arg1 ;
-(void)setCurrentOrientation:(long long)arg1 ;
-(CGRect)loadedFrameRect;
-(void)transitionToInterfaceOrientation:(long long)arg1 ;
-(void)setFrameSuper:(CGRect)arg1 ;
-(void)addSubviewSuper:(id)arg1 ;
-(void)playTapConfirmSound;
-(GLView *)glView;
-(void)setGlView:(GLView *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(void)setFrame:(CGRect)arg1 ;
-(void)addSubview:(id)arg1 ;
-(id)nibName;
-(id)layoutName;
-(void)setValue:(id)arg1 forUndefinedKey:(id)arg2 ;
-(long long)currentOrientation;
-(void)orientationChanged:(id)arg1 ;
@end

