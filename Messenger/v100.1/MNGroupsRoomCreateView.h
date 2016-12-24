/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:29:15 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/85513C16-EFBE-4673-84DA-B31CD22289F8/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UIView.h>
#import <Messenger/FBKeyboardObserverDelegate.h>
#import <Messenger/MNGrowingTextViewDelegate.h>
#import <UIKit/UIGestureRecognizerDelegate.h>

@protocol MNGroupsRoomCreateViewDelegate;
@class UIImage, UIButton, FBKeyboardObserver, UILabel, UIScrollView, UITapGestureRecognizer, UITableView, MNGrowingTextView, NSString;

@interface MNGroupsRoomCreateView : UIView <FBKeyboardObserverDelegate, MNGrowingTextViewDelegate, UIGestureRecognizerDelegate> {

	UIImage* _roomProfileImagePlaceholder;
	UIButton* _roomProfileImageDefaultButton;
	UIButton* _roomProfileImageButton;
	double _viewsTopOffset;
	FBKeyboardObserver* _keyboardObserver;
	UILabel* _roomDescriptionLabel;
	UIButton* _addEditDescriptionButton;
	UIScrollView* _containerScrollView;
	UITapGestureRecognizer* _tapGestureRecognizer;
	BOOL _showsCustomizationOptions;
	UITableView* _otherCustomizationOptionsTableView;
	MNGrowingTextView* _roomNameTextField;
	UIButton* _addCustomizationButton;
	id<MNGroupsRoomCreateViewDelegate> _delegate;

}

@property (nonatomic,readonly) UITableView * otherCustomizationOptionsTableView;              //@synthesize otherCustomizationOptionsTableView=_otherCustomizationOptionsTableView - In the implementation block
@property (nonatomic,readonly) MNGrowingTextView * roomNameTextField;                         //@synthesize roomNameTextField=_roomNameTextField - In the implementation block
@property (nonatomic,readonly) UIButton * addCustomizationButton;                             //@synthesize addCustomizationButton=_addCustomizationButton - In the implementation block
@property (assign,nonatomic,__weak) id<MNGroupsRoomCreateViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) BOOL showsCustomizationOptions;                                  //@synthesize showsCustomizationOptions=_showsCustomizationOptions - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)keyboardObserver:(id)arg1 keyboardWillShowWithBeginFrame:(CGRect)arg2 endFrame:(CGRect)arg3 duration:(double)arg4 curve:(long long)arg5 ;
-(void)keyboardObserver:(id)arg1 keyboardWillHideWithBeginFrame:(CGRect)arg2 endFrame:(CGRect)arg3 duration:(double)arg4 curve:(long long)arg5 ;
-(void)_setProfileImage:(id)arg1 ;
-(void)growingTextViewDidEndEditing:(id)arg1 ;
-(void)growingTextViewDidChange:(id)arg1 ;
-(void)growingTextView:(id)arg1 didChangeHeight:(double)arg2 ;
-(BOOL)growingTextViewShouldReturn:(id)arg1 ;
-(void)textFieldBecomeFirstResponder;
-(void)setShowsCustomizationOptions:(BOOL)arg1 ;
-(MNGrowingTextView *)roomNameTextField;
-(UIButton *)addCustomizationButton;
-(void)_didSelectRoomProfilePhoto:(id)arg1 ;
-(void)_showDefaultProfileImageButton:(BOOL)arg1 ;
-(void)_setDefaultPlaceholderImage;
-(void)_didTapCustomizeButton;
-(void)_didTapAddEditDescriptionBtn;
-(void)_didTapOutsideTextView:(id)arg1 ;
-(void)_layoutRoomSubviews;
-(void)_layoutProfileImage:(double)arg1 ;
-(void)_layoutLabelsRelativeToRect:(CGRect)arg1 ;
-(void)_layoutButtonsRelativeToRect:(CGRect)arg1 ;
-(void)_layoutOtherCustomizationOptionsWithSize:(CGSize)arg1 ;
-(void)_hideCustomizationOptions:(BOOL)arg1 ;
-(void)_animateSubviewsWithDuration:(double)arg1 ;
-(void)configureWithRoomName:(id)arg1 description:(id)arg2 profileImage:(id)arg3 ;
-(id)textFieldRoomName;
-(UITableView *)otherCustomizationOptionsTableView;
-(BOOL)showsCustomizationOptions;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)setDelegate:(id<MNGroupsRoomCreateViewDelegate>)arg1 ;
-(void)dealloc;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(id<MNGroupsRoomCreateViewDelegate>)delegate;
-(BOOL)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2 ;
-(void)willMoveToWindow:(id)arg1 ;
-(void)textFieldResignFirstResponder;
@end
