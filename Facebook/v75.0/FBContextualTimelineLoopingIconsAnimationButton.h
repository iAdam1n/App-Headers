/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:01 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <UIKit/UIButton.h>
#import <Facebook/FBLoopableView.h>

@class UIImage, NSString, FBLoopingIconsController;

@interface FBContextualTimelineLoopingIconsAnimationButton : UIButton <FBLoopableView> {

	UIImage* _icon;
	NSString* _titleText;
	FBLoopingIconsController* _loopingController;

}
-(void)loopToImage:(id)arg1 highLightedImage:(id)arg2 completion:(/*^block*/id)arg3 ;
-(id)initWithIcon:(id)arg1 titleText:(id)arg2 titleFont:(id)arg3 titleColor:(id)arg4 ;
-(void)setLoopingConfig:(id)arg1 ;
-(void)setRoundedBackgroundWithSize:(CGSize)arg1 backgroundColor:(id)arg2 cornerRadius:(double)arg3 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)startAnimating;
-(CGRect)titleRectForContentRect:(CGRect)arg1 ;
-(CGRect)imageRectForContentRect:(CGRect)arg1 ;
@end
