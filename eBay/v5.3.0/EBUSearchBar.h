/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:54:33 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/EDDCC4DC-B551-47FD-8F2D-ADD28D2EEB77/eBay.app/eBay
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <eBay/eBay-Structs.h>
#import <UIKit/UIView.h>
#import <UIKit/UITextFieldDelegate.h>

@protocol EBUSearchBarDelegate;
@class UIView, UITextField, UIButton, NSString;

@interface EBUSearchBar : UIView <UITextFieldDelegate> {

	BOOL _isActive;
	BOOL _hideLeftAccessoryViewWhenActive;
	BOOL _hideRightAccessoryViewWhenActive;
	BOOL _isEditing;
	BOOL _hideCancelBtn;
	unsigned long long _maxTextLength;
	UIView* _leftAccessoryView;
	UIView* _rightAccessoryView;
	double _animationDuration;
	id<EBUSearchBarDelegate> _delegate;
	UIView* _barContainer;
	UITextField* _textField;
	UIButton* _cancelButton;
	UIEdgeInsets _barEdgeInsets;
	UIEdgeInsets _barEdgeInsetsWhenActive;

}

@property (nonatomic,retain) UIView * barContainer;                                 //@synthesize barContainer=_barContainer - In the implementation block
@property (nonatomic,retain) UITextField * textField;                               //@synthesize textField=_textField - In the implementation block
@property (nonatomic,retain) UIButton * cancelButton;                               //@synthesize cancelButton=_cancelButton - In the implementation block
@property (assign,nonatomic) BOOL isEditing;                                        //@synthesize isEditing=_isEditing - In the implementation block
@property (assign,nonatomic) UIEdgeInsets barEdgeInsets;                            //@synthesize barEdgeInsets=_barEdgeInsets - In the implementation block
@property (assign,nonatomic) UIEdgeInsets barEdgeInsetsWhenActive;                  //@synthesize barEdgeInsetsWhenActive=_barEdgeInsetsWhenActive - In the implementation block
@property (nonatomic,copy) NSString * text; 
@property (nonatomic,retain) NSString * placeholder; 
@property (assign,nonatomic) unsigned long long maxTextLength;                      //@synthesize maxTextLength=_maxTextLength - In the implementation block
@property (assign,nonatomic) BOOL isActive;                                         //@synthesize isActive=_isActive - In the implementation block
@property (nonatomic,retain) UIView * leftAccessoryView;                            //@synthesize leftAccessoryView=_leftAccessoryView - In the implementation block
@property (nonatomic,retain) UIView * rightAccessoryView;                           //@synthesize rightAccessoryView=_rightAccessoryView - In the implementation block
@property (assign,nonatomic) BOOL hideLeftAccessoryViewWhenActive;                  //@synthesize hideLeftAccessoryViewWhenActive=_hideLeftAccessoryViewWhenActive - In the implementation block
@property (assign,nonatomic) BOOL hideRightAccessoryViewWhenActive;                 //@synthesize hideRightAccessoryViewWhenActive=_hideRightAccessoryViewWhenActive - In the implementation block
@property (assign,nonatomic) double animationDuration;                              //@synthesize animationDuration=_animationDuration - In the implementation block
@property (assign,nonatomic,__weak) id<EBUSearchBarDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) UITextField * searchField; 
@property (nonatomic,readonly) UIView * barView; 
@property (nonatomic,readonly) NSString * camelcaseText; 
@property (assign,nonatomic) BOOL hideCancelBtn;                                    //@synthesize hideCancelBtn=_hideCancelBtn - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)cancelButtonAction:(id)arg1 ;
-(void)setIsActive:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)setBarEdgeInsets:(UIEdgeInsets)arg1 ;
-(UIEdgeInsets)barEdgeInsets;
-(void)setBarEdgeInsetsWhenActive:(UIEdgeInsets)arg1 ;
-(void)setMaxTextLength:(unsigned long long)arg1 ;
-(void)setHideCancelBtn:(BOOL)arg1 ;
-(void)searchStringChangingTo:(id)arg1 ;
-(BOOL)hideCancelBtn;
-(NSString *)camelcaseText;
-(void)setRightAccessoryView:(UIView *)arg1 ;
-(UIEdgeInsets)barEdgeInsetsWhenActive;
-(unsigned long long)maxTextLength;
-(UIView *)rightAccessoryView;
-(BOOL)hideLeftAccessoryViewWhenActive;
-(void)setHideLeftAccessoryViewWhenActive:(BOOL)arg1 ;
-(BOOL)hideRightAccessoryViewWhenActive;
-(void)setHideRightAccessoryViewWhenActive:(BOOL)arg1 ;
-(UIView *)barContainer;
-(void)setBarContainer:(UIView *)arg1 ;
-(void)setIsEditing:(BOOL)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setDelegate:(id<EBUSearchBarDelegate>)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(id<EBUSearchBarDelegate>)delegate;
-(BOOL)isActive;
-(void)setAnimationDuration:(double)arg1 ;
-(NSString *)text;
-(void)setText:(NSString *)arg1 ;
-(BOOL)isEditing;
-(void)setPlaceholder:(NSString *)arg1 ;
-(BOOL)textFieldShouldBeginEditing:(id)arg1 ;
-(void)textFieldDidBeginEditing:(id)arg1 ;
-(BOOL)textFieldShouldEndEditing:(id)arg1 ;
-(void)textFieldDidEndEditing:(id)arg1 ;
-(BOOL)textField:(id)arg1 shouldChangeCharactersInRange:(NSRange)arg2 replacementString:(id)arg3 ;
-(BOOL)textFieldShouldClear:(id)arg1 ;
-(BOOL)textFieldShouldReturn:(id)arg1 ;
-(UIButton *)cancelButton;
-(void)setCancelButton:(UIButton *)arg1 ;
-(double)animationDuration;
-(void)updateLayout;
-(void)setIsActive:(BOOL)arg1 ;
-(void)dismissKeyboard;
-(UITextField *)searchField;
-(UITextField *)textField;
-(NSString *)placeholder;
-(void)commonInit;
-(void)setLeftAccessoryView:(UIView *)arg1 ;
-(UIView *)leftAccessoryView;
-(void)setTextField:(UITextField *)arg1 ;
-(UIView *)barView;
@end

