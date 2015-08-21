/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 12:10:15 PM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/EECA69E8-8DA6-473D-BDCA-9D4EFB22C6CE/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Instagram/Instagram-Structs.h>
#import <UIKit/UITextField.h>

@class UIImage, UIColor, UIView;

@interface IGTextField : UITextField {

	BOOL _isValid;
	BOOL _isVerifying;
	BOOL _hideCursor;
	UIImage* _icon;
	UIImage* _validIcon;
	UIImage* _invalidIcon;
	long long _validity;
	long long _iconSpacing;
	long long _leftViewVerticalLayoutType;
	UIColor* _caretOverlayTintColor;
	UIView* _caretOverlayView;
	UIEdgeInsets _insets;

}

@property (nonatomic,retain) UIImage * icon;                                    //@synthesize icon=_icon - In the implementation block
@property (nonatomic,retain) UIImage * validIcon;                               //@synthesize validIcon=_validIcon - In the implementation block
@property (nonatomic,retain) UIImage * invalidIcon;                             //@synthesize invalidIcon=_invalidIcon - In the implementation block
@property (assign,nonatomic) long long validity;                                //@synthesize validity=_validity - In the implementation block
@property (assign,nonatomic) BOOL isVerifying;                                  //@synthesize isVerifying=_isVerifying - In the implementation block
@property (assign,nonatomic) BOOL hideCursor;                                   //@synthesize hideCursor=_hideCursor - In the implementation block
@property (assign,nonatomic) long long iconSpacing;                             //@synthesize iconSpacing=_iconSpacing - In the implementation block
@property (assign,nonatomic) UIEdgeInsets insets;                               //@synthesize insets=_insets - In the implementation block
@property (assign,nonatomic) long long leftViewVerticalLayoutType;              //@synthesize leftViewVerticalLayoutType=_leftViewVerticalLayoutType - In the implementation block
@property (nonatomic,retain) UIColor * caretOverlayTintColor;                   //@synthesize caretOverlayTintColor=_caretOverlayTintColor - In the implementation block
@property (nonatomic,retain) UIView * caretOverlayView;                         //@synthesize caretOverlayView=_caretOverlayView - In the implementation block
-(void)setIconSpacing:(long long)arg1 ;
-(void)wiggleAnimationWithCompletion:(/*^block*/id)arg1 ;
-(id)initWithPlaceholder:(id)arg1 ;
-(void)setLeftViewVerticalLayoutType:(long long)arg1 ;
-(void)didChange;
-(UIImage *)validIcon;
-(UIImage *)invalidIcon;
-(UIView *)caretOverlayView;
-(long long)leftViewVerticalLayoutType;
-(long long)iconSpacing;
-(void)setValidIcon:(UIImage *)arg1 ;
-(void)setInvalidIcon:(UIImage *)arg1 ;
-(void)setIsVerifying:(BOOL)arg1 ;
-(void)setCaretOverlayTintColor:(UIColor *)arg1 ;
-(void)setHideCursor:(BOOL)arg1 ;
-(UIColor *)caretOverlayTintColor;
-(void)setCaretOverlayView:(UIView *)arg1 ;
-(void)setValidity:(long long)arg1 ;
-(BOOL)isVerifying;
-(UIImage *)icon;
-(id)initWithFrame:(CGRect)arg1 ;
-(id)init;
-(CGRect)editingRectForBounds:(CGRect)arg1 ;
-(CGRect)caretRectForPosition:(id)arg1 ;
-(void)deleteBackward;
-(CGRect)textRectForBounds:(CGRect)arg1 ;
-(void)setIcon:(UIImage *)arg1 ;
-(CGRect)rightViewRectForBounds:(CGRect)arg1 ;
-(CGRect)leftViewRectForBounds:(CGRect)arg1 ;
-(CGRect)clearButtonRectForBounds:(CGRect)arg1 ;
-(BOOL)hideCursor;
-(UIEdgeInsets)insets;
-(void)setInsets:(UIEdgeInsets)arg1 ;
-(long long)validity;
@end

