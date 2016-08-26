/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:18:19 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/6F5201FD-3D2F-4BE1-80E5-E1251C7564E3/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UIView.h>
#import <Messenger/FBToastContainerViewDelegate.h>

@class UIView, MNPeoplePickerView, FBToastContainerView, NSString;

@interface MNNewThreadView : UIView <FBToastContainerViewDelegate> {

	UIView* _composeView;
	MNPeoplePickerView* _peoplePickerView;
	UIView* _messagesView;
	CGRect _keyboardFrame;
	BOOL _showsMessagesView;
	BOOL _showsComposeView;
	FBToastContainerView* _toastContainerView;

}

@property (assign,nonatomic) CGRect keyboardFrame;                                     //@synthesize keyboardFrame=_keyboardFrame - In the implementation block
@property (assign,nonatomic) BOOL showsComposeView;                                    //@synthesize showsComposeView=_showsComposeView - In the implementation block
@property (nonatomic,readonly) double visibleContentHeight; 
@property (nonatomic,readonly) FBToastContainerView * toastContainerView;              //@synthesize toastContainerView=_toastContainerView - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(double)mn_topContentInset;
-(FBToastContainerView *)toastContainerView;
-(void)_toastContainerViewWillChangeWithDuration:(double)arg1 ;
-(void)toastContainerViewToastWillAppear:(id)arg1 withAnimationDuration:(double)arg2 ;
-(void)toastContainerViewToastWillDisappear:(id)arg1 withAnimationDuration:(double)arg2 ;
-(CGRect)_toastViewFrame;
-(double)_keyboardTopY;
-(void)_layoutToastView;
-(void)_layoutMainContent;
-(void)_layoutPeoplePickerView;
-(void)_layoutMessagesView;
-(double)_peoplePickerTokenFieldHeight;
-(double)_topToastOriginY;
-(double)_visibleToastHeight;
-(void)showsComposeView:(BOOL)arg1 animated:(BOOL)arg2 ;
-(id)initWithPeoplePickerView:(id)arg1 composeView:(id)arg2 ;
-(double)visibleContentHeight;
-(void)setMessagesView:(id)arg1 ;
-(void)setShowsMessagesView:(BOOL)arg1 ;
-(void)updateComposeViewHeightWithDuration:(double)arg1 animationOptions:(unsigned long long)arg2 ;
-(void)setShowsComposeView:(BOOL)arg1 ;
-(BOOL)showsComposeView;
-(void)dealloc;
-(void)layoutSubviews;
-(void)_layoutComposeView;
-(CGRect)keyboardFrame;
-(void)setKeyboardFrame:(CGRect)arg1 ;
@end
