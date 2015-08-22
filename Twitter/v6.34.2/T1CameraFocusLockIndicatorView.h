/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:30:27 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/16C752D5-8F70-4E83-B0AB-94FF56CA8C26/Twitter.app/Twitter
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Twitter/Twitter-Structs.h>
#import <UIKit/UIView.h>

@class UIImageView;

@interface T1CameraFocusLockIndicatorView : UIView {

	UIImageView* _iconView;
	BOOL _autoFocusLocked;
	BOOL _autoExposureLocked;

}

@property (assign,getter=isAutoFocusLocked,nonatomic) BOOL autoFocusLocked;                    //@synthesize autoFocusLocked=_autoFocusLocked - In the implementation block
@property (assign,getter=isAutoExposureLocked,nonatomic) BOOL autoExposureLocked;              //@synthesize autoExposureLocked=_autoExposureLocked - In the implementation block
-(void)setFrame:(CGRect)arg1 transform:(CGAffineTransform)arg2 animated:(BOOL)arg3 ;
-(void)setAutoFocusLocked:(BOOL)arg1 ;
-(void)setAutoExposureLocked:(BOOL)arg1 ;
-(void)_animateIn;
-(void)_animateOut;
-(void)_updateIconImage;
-(BOOL)isAutoFocusLocked;
-(BOOL)isAutoExposureLocked;
-(id)initWithFrame:(CGRect)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(CGSize)intrinsicContentSize;
-(void)setHidden:(BOOL)arg1 animated:(BOOL)arg2 ;
@end
