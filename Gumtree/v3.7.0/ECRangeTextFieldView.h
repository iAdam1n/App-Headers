/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 1:27:53 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/21F2B006-1C28-48A8-85CE-538D78391B66/Gumtree.app/Gumtree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Gumtree/Gumtree-Structs.h>
#import <UIKit/UIView.h>

@class ECTextField, UIImageView, UIButton;

@interface ECRangeTextFieldView : UIView {

	BOOL _enabled;
	ECTextField* _minValueTextField;
	ECTextField* _maxValueTextField;
	UIImageView* _backgroundImageView;
	UIButton* _resetButton;
	id _target;
	SEL _action;
	UIEdgeInsets _textFieldInsets;

}

@property (nonatomic,retain) ECTextField * minValueTextField;                //@synthesize minValueTextField=_minValueTextField - In the implementation block
@property (nonatomic,retain) ECTextField * maxValueTextField;                //@synthesize maxValueTextField=_maxValueTextField - In the implementation block
@property (assign,nonatomic) UIEdgeInsets textFieldInsets;                   //@synthesize textFieldInsets=_textFieldInsets - In the implementation block
@property (assign,nonatomic) BOOL enabled;                                   //@synthesize enabled=_enabled - In the implementation block
@property (nonatomic,retain) UIImageView * backgroundImageView;              //@synthesize backgroundImageView=_backgroundImageView - In the implementation block
@property (nonatomic,retain) UIButton * resetButton;                         //@synthesize resetButton=_resetButton - In the implementation block
@property (nonatomic,retain) id target;                                      //@synthesize target=_target - In the implementation block
@property (assign,nonatomic) SEL action;                                     //@synthesize action=_action - In the implementation block
+(id)textField;
-(void)setResetButton:(UIButton *)arg1 ;
-(UIButton *)resetButton;
-(void)textChangeNotification:(id)arg1 ;
-(ECTextField *)minValueTextField;
-(ECTextField *)maxValueTextField;
-(void)setTextFieldInsets:(UIEdgeInsets)arg1 ;
-(void)reset:(id)arg1 ;
-(void)addResetTarget:(id)arg1 withAction:(SEL)arg2 ;
-(void)setValueLabelForTextField:(id)arg1 withString:(id)arg2 ;
-(void)setMinValueTextField:(ECTextField *)arg1 ;
-(void)setMaxValueTextField:(ECTextField *)arg1 ;
-(void)updateResetButton;
-(UIEdgeInsets)textFieldInsets;
-(void)emf_applyStyle:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(void)setTarget:(id)arg1 ;
-(SEL)action;
-(void)setEnabled:(BOOL)arg1 ;
-(id)target;
-(UIImageView *)backgroundImageView;
-(void)setAction:(SEL)arg1 ;
-(BOOL)enabled;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)setBackgroundImageView:(UIImageView *)arg1 ;
@end

