/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:12 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <UIKit/UIButton.h>

@protocol FBPaymentsLoadingIndicatorControlling;
@class FBPaymentsLoadingStatusButtonStyleModel, UIImageView, NSString;

@interface FBPaymentsLoadingStatusButton : UIButton {

	FBPaymentsLoadingStatusButtonStyleModel* _style;
	BOOL _shouldShowCheckmarkAnimation;
	id<FBPaymentsLoadingIndicatorControlling> _loadingIndicatorController;
	UIImageView* _checkmarkImageView;
	long long _loadingStatusButtonState;
	NSString* _loadingStatusButtonTitle;
	NSString* _actionIdentifier;

}

@property (assign,nonatomic) long long loadingStatusButtonState;              //@synthesize loadingStatusButtonState=_loadingStatusButtonState - In the implementation block
@property (nonatomic,copy) NSString * loadingStatusButtonTitle;               //@synthesize loadingStatusButtonTitle=_loadingStatusButtonTitle - In the implementation block
@property (nonatomic,copy) NSString * actionIdentifier;                       //@synthesize actionIdentifier=_actionIdentifier - In the implementation block
+(CGSize)sizeWithButtonTitle:(id)arg1 buttonStyle:(long long)arg2 constrainedSize:(CGSize)arg3 ;
-(void)_configButton;
-(void)setLoadingStatusButtonState:(long long)arg1 ;
-(id)initWithButtonTitleForNormalState:(id)arg1 buttonStyle:(long long)arg2 loadingIndicatorFactory:(id)arg3 ;
-(void)setLoadingStatusButtonTitle:(NSString *)arg1 ;
-(NSString *)loadingStatusButtonTitle;
-(long long)loadingStatusButtonState;
-(void)_configLoadingStatusButton;
-(void)_updateLoadingStatusButtonState:(long long)arg1 ;
-(void)_updateStatusAndShowCompletionAnimationIfNeeded:(long long)arg1 ;
-(void)_animateCheckmark;
-(void)_animateLoadingIndicator;
-(void)_handleLoadingIndicatorAnimationCompletion;
-(void)_configLoadingIndicator;
-(void)_configCheckMarkImageView;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(NSString *)actionIdentifier;
-(id)_checkmarkImageView;
-(void)setActionIdentifier:(NSString *)arg1 ;
@end
