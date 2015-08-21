/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:40:27 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/E282ADAB-AF96-4184-9890-B5E58B4BDDD0/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UIView.h>
#import <Messenger/FBFIGConfigurable.h>

@protocol FBInterstitialViewDelegate;
@class UILabel, UIButton, NSString;

@interface FBInterstitialView : UIView <FBFIGConfigurable> {

	UILabel* _titleLabel;
	UILabel* _subtitleLabel;
	UIButton* _primaryButton;
	UIButton* _secondaryButton;
	UIButton* _dismissButton;
	SCD_Struct_FB141 _delegateFlags;
	id<FBInterstitialViewDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<FBInterstitialViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)defaultFIGConfig;
+(id)newWithConfig:(id)arg1 ;
+(id)newWithTitle:(id)arg1 subtitle:(id)arg2 contentView:(id)arg3 primaryButtonTitle:(id)arg4 secondaryButtonTitle:(id)arg5 hasDismissButton:(BOOL)arg6 ;
-(void)oldConfig:(id)arg1 configDidChange:(id)arg2 ;
-(void)applyConfig:(id)arg1 ;
-(void)didTapDismissButton:(id)arg1 ;
-(void)didTapPrimaryButton:(id)arg1 ;
-(void)didTapSecondaryButton:(id)arg1 ;
-(void)setDelegate:(id<FBInterstitialViewDelegate>)arg1 ;
-(void)layoutSubviews;
-(id<FBInterstitialViewDelegate>)delegate;
-(id)_init;
-(CGRect)contentRectForBounds:(CGRect)arg1 ;
-(id)config;
@end

