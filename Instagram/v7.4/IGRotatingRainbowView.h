/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 12:10:18 PM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/EECA69E8-8DA6-473D-BDCA-9D4EFB22C6CE/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Instagram/Instagram-Structs.h>
#import <UIKit/UIView.h>

@class UIImageView;

@interface IGRotatingRainbowView : UIView {

	UIImageView* _rotatingBackgroundView;

}

@property (nonatomic,retain) UIImageView * rotatingBackgroundView;              //@synthesize rotatingBackgroundView=_rotatingBackgroundView - In the implementation block
-(void)rotateForTransitionWithClockwise:(BOOL)arg1 ;
-(void)setRotatingBackgroundView:(UIImageView *)arg1 ;
-(UIImageView *)rotatingBackgroundView;
-(void)rotateBackgroundView;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)applicationDidBecomeActive;
-(void)applicationWillResignActive;
@end

