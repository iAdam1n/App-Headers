/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:39:38 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/C3C2BD9F-C9D4-4E48-9EC0-40E7F1350599/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>
#import <UIKit/UIViewControllerTransitioningDelegate.h>
#import <UIKit/UIViewControllerAnimatedTransitioning.h>
#import <Facebook/CKComponentHostingViewDelegate.h>
#import <Facebook/FBFeedAwesomizerProfileListCarSortSheetViewControllerProtocol.h>

@protocol FBFeedAwesomizerProfileListCartSortSheetViewControllerDelegate;
@class UIView, CKComponentHostingView, NSString;

@interface FBFeedAwesomizerProfileListCardSortSheetViewController : UIViewController <UIViewControllerTransitioningDelegate, UIViewControllerAnimatedTransitioning, CKComponentHostingViewDelegate, FBFeedAwesomizerProfileListCarSortSheetViewControllerProtocol> {

	UIView* _dimmingView;
	CKComponentHostingView* _sortSheetView;
	BOOL _isPresenting;
	id<FBFeedAwesomizerProfileListCartSortSheetViewControllerDelegate> _delegate;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)componentHostingViewDidInvalidateSize:(id)arg1 ;
-(void)sortTapAction:(id)arg1 sortMode:(id)arg2 ;
-(void)filterTapAction:(id)arg1 filterMode:(id)arg2 ;
-(void)dismissSortSheet;
-(id)initWithModel:(id)arg1 componentProvider:(Class)arg2 delegate:(id)arg3 ;
-(double)transitionDuration:(id)arg1 ;
-(void)animateTransition:(id)arg1 ;
-(id)animationControllerForPresentedController:(id)arg1 presentingController:(id)arg2 sourceController:(id)arg3 ;
-(id)animationControllerForDismissedController:(id)arg1 ;
-(BOOL)accessibilityPerformEscape;
-(void)updateModel:(id)arg1 ;
@end
