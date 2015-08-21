/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:40:34 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/E282ADAB-AF96-4184-9890-B5E58B4BDDD0/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/SPTopBar.h>

@protocol FBMediaTopNavigationBarDelegation;
@class UILabel, UIButton, NSString, UIColor;

@interface FBMediaTopNavigationBar : SPTopBar {

	UILabel* _titleLabel;
	BOOL _fbNavigationBarStyle;
	unsigned long long _mediaPickerStyle;
	id<FBMediaTopNavigationBarDelegation> _delegate;
	UIButton* _leftButton;
	UIButton* _rightButton;

}

@property (nonatomic,copy) NSString * leftButtonTitle; 
@property (nonatomic,copy) NSString * rightButtonTitle; 
@property (nonatomic,copy) NSString * title; 
@property (nonatomic,retain) UIColor * titleColor; 
@property (assign,nonatomic,__weak) id<FBMediaTopNavigationBarDelegation> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) UIButton * leftButton;                                            //@synthesize leftButton=_leftButton - In the implementation block
@property (nonatomic,readonly) UIButton * rightButton;                                           //@synthesize rightButton=_rightButton - In the implementation block
+(id)createTopNavigationBarForMediaKitWithMediaPickerStyle:(unsigned long long)arg1 withFBNavigationBarStyle:(BOOL)arg2 ;
-(id)initWithLeftButtonStyle:(int)arg1 rightButtonStyle:(int)arg2 mediaPickerStyle:(unsigned long long)arg3 WithFBNavigationBarStyle:(BOOL)arg4 ;
-(void)didTapLeftButton:(id)arg1 ;
-(void)didTapRightButton:(id)arg1 ;
-(NSString *)leftButtonTitle;
-(NSString *)rightButtonTitle;
-(void)setLeftButtonTitle:(NSString *)arg1 ;
-(void)setRightButtonTitle:(NSString *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setDelegate:(id<FBMediaTopNavigationBarDelegation>)arg1 ;
-(void)layoutSubviews;
-(void)setTitle:(NSString *)arg1 ;
-(id<FBMediaTopNavigationBarDelegation>)delegate;
-(NSString *)title;
-(UIColor *)titleColor;
-(void)setTitleColor:(UIColor *)arg1 ;
-(UIButton *)leftButton;
-(UIButton *)rightButton;
@end

