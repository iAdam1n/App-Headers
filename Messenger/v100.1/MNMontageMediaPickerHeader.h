/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:29:18 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/85513C16-EFBE-4673-84DA-B31CD22289F8/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UIView.h>

@protocol MNMontageMediaPickerHeaderDelegate;
@class MNMontageChevronHeaderButton, UIButton, FBGradientView, UIView, NSString;

@interface MNMontageMediaPickerHeader : UIView {

	MNMontageChevronHeaderButton* _titleButton;
	UIButton* _multiSelectButton;
	FBGradientView* _scrimBackgroundView;
	UIView* _darkBackgroundView;
	long long _viewState;
	id<MNMontageMediaPickerHeaderDelegate> _delegate;

}

@property (nonatomic,copy) NSString * headerTitle; 
@property (assign,nonatomic) double backgroundAlpha; 
@property (assign,nonatomic,__weak) id<MNMontageMediaPickerHeaderDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id)initWithMultiSelectEnabled:(BOOL)arg1 ;
-(void)_didTapTitleButton;
-(void)_didTapMultiSelectButton;
-(BOOL)_point:(CGPoint)arg1 insideButton:(id)arg2 withEvent:(id)arg3 ;
-(void)_updateSelectionButtonTitle:(id)arg1 ;
-(void)setTitleSelected:(BOOL)arg1 ;
-(void)layoutSubviews;
-(void)setDelegate:(id<MNMontageMediaPickerHeaderDelegate>)arg1 ;
-(void)dealloc;
-(BOOL)pointInside:(CGPoint)arg1 withEvent:(id)arg2 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(id<MNMontageMediaPickerHeaderDelegate>)delegate;
-(void)setBackgroundAlpha:(double)arg1 ;
-(NSString *)headerTitle;
-(void)setHeaderTitle:(NSString *)arg1 ;
-(double)backgroundAlpha;
-(void)setViewState:(long long)arg1 ;
@end
