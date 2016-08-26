/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:39:35 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/C3C2BD9F-C9D4-4E48-9EC0-40E7F1350599/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <UIKit/UIView.h>

@protocol THAdminsEmptyStateViewDelegate;
@class UILabel, FBButton, UIActivityIndicatorView, UIColor;

@interface FBGroupsAdminsEmptyStateView : UIView {

	UILabel* _noAdminsLabel;
	FBButton* _becomeAdminButton;
	FBButton* _suggestAdminButton;
	UIActivityIndicatorView* _claimingAdminshipLoadingView;
	id<THAdminsEmptyStateViewDelegate> _delegate;
	UIColor* _enabledButtonColor;
	UIColor* _disabledButtonColor;
	UIColor* _labelTextColor;

}

@property (assign,nonatomic,__weak) id<THAdminsEmptyStateViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) UIColor * enabledButtonColor;                                    //@synthesize enabledButtonColor=_enabledButtonColor - In the implementation block
@property (nonatomic,retain) UIColor * disabledButtonColor;                                   //@synthesize disabledButtonColor=_disabledButtonColor - In the implementation block
@property (nonatomic,retain) UIColor * labelTextColor;                                        //@synthesize labelTextColor=_labelTextColor - In the implementation block
-(void)_tappedMakeAdminButton:(id)arg1 ;
-(void)_tappedSuggestAdminButton:(id)arg1 ;
-(void)_updateButtonsTitleColor;
-(void)_updateButtonTitleColor:(id)arg1 ;
-(void)setEnabledButtonColor:(UIColor *)arg1 ;
-(void)adminRequestDidEnd;
-(void)showAdminButtons:(BOOL)arg1 ;
-(UIColor *)enabledButtonColor;
-(UIColor *)disabledButtonColor;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setDelegate:(id<THAdminsEmptyStateViewDelegate>)arg1 ;
-(id<THAdminsEmptyStateViewDelegate>)delegate;
-(void)setDisabledButtonColor:(UIColor *)arg1 ;
-(void)setLabelTextColor:(UIColor *)arg1 ;
-(UIColor *)labelTextColor;
@end
