/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:18:34 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/6F5201FD-3D2F-4BE1-80E5-E1251C7564E3/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIView.h>
#import <UIKit/UIGestureRecognizerDelegate.h>
#import <Messenger/FBDirectionalPanGestureRecognizerDelegate.h>
#import <Messenger/FBMinimizableModalsContainerViewDelegate.h>
#import <UIKit/UIScrollViewDelegate.h>

@protocol FBMinimizableModalsHostViewDelegate;
@class UIView, UIScrollView, FBMinimizableModalsContainerView, NSMutableSet, NSHashTable, UITapGestureRecognizer, NSString;

@interface FBMinimizableModalsHostView : UIView <UIGestureRecognizerDelegate, FBDirectionalPanGestureRecognizerDelegate, FBMinimizableModalsContainerViewDelegate, UIScrollViewDelegate> {

	UIView* _containerView;
	UIScrollView* _scrollView;
	FBMinimizableModalsContainerView* _baseView;
	UIView* _overlayView;
	NSMutableSet* _modalViews;
	FBMinimizableModalsContainerView* _modalViewHorizontalTransition;
	FBMinimizableModalsContainerView* _modalViewBeingDismissed;
	NSHashTable* _modalViewTapGestureRecognizers;
	NSHashTable* _modalViewMinimizeGestureRecognizers;
	NSHashTable* _modalViewPickerDismissGestureRecognizers;
	NSHashTable* _modalViewMaximizedDismissGestureRecognizers;
	BOOL _showPickerView;
	UITapGestureRecognizer* _baseViewTapGestureRecognizer;
	BOOL _enableSnapshotForBaseView;
	id<FBMinimizableModalsHostViewDelegate> _delegate;

}

@property (assign,nonatomic) BOOL enableSnapshotForBaseView;                                       //@synthesize enableSnapshotForBaseView=_enableSnapshotForBaseView - In the implementation block
@property (assign,nonatomic,__weak) id<FBMinimizableModalsHostViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)minimizeAllViews;
-(void)_beginRealViewsAppearanceTransition;
-(void)_endRealViewsAppearanceTransition;
-(void)_handleMinimizeGesture:(id)arg1 ;
-(void)_handlePickerDismissGesture:(id)arg1 ;
-(void)_handleMaximizedDismissGesture:(id)arg1 ;
-(void)_layoutAllChildViews;
-(id)_modalViewContainingView:(id)arg1 ;
-(id)_modalViewsInOrder;
-(void)_showPickerView:(BOOL)arg1 ;
-(void)_setTransformsAndOverlayAlphasForModalViews;
-(void)_maximizeView:(id)arg1 ;
-(void)dismissButtonTappedInMinimizableModalContainerView:(id)arg1 ;
-(id)initWithBaseView:(id)arg1 ;
-(void)presentView:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(void)dismissView:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(void)minimizeAllViewsAndShowSwitcherView;
-(void)setTitle:(id)arg1 forModalView:(id)arg2 ;
-(void)setEnableSnapshotForBaseView:(BOOL)arg1 ;
-(void)realViewWillAppearInMinimizableModalContainerView:(id)arg1 ;
-(void)realViewDidAppearInMinimizableModalContainerView:(id)arg1 ;
-(void)realViewWillDisappearInMinimizableModalContainerView:(id)arg1 ;
-(void)realViewDidDisappearInMinimizableModalContainerView:(id)arg1 ;
-(BOOL)enableSnapshotForBaseView;
-(void)setDelegate:(id<FBMinimizableModalsHostViewDelegate>)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(void)scrollViewDidScroll:(id)arg1 ;
-(id<FBMinimizableModalsHostViewDelegate>)delegate;
-(BOOL)gestureRecognizerShouldBegin:(id)arg1 ;
-(BOOL)gestureRecognizer:(id)arg1 shouldBeRequiredToFailByGestureRecognizer:(id)arg2 ;
-(void)_handleTapGesture:(id)arg1 ;
@end
