/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:06 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>

@protocol FBPageCustomPostsRescheduleViewControllerDelegate;
@class FBMemFeedStory, FBPageCustomPostsContext, UIDatePicker, FBAggregatedPostsUploadBarView, UIView;

@interface FBPageCustomPostsRescheduleViewController : UIViewController {

	FBMemFeedStory* _story;
	FBPageCustomPostsContext* _context;
	UIDatePicker* _datePicker;
	FBAggregatedPostsUploadBarView* _loadingView;
	UIView* _loadingOverlayView;
	id<FBPageCustomPostsRescheduleViewControllerDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<FBPageCustomPostsRescheduleViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(BOOL)fb_showNavBarSearchField;
-(void)_didTapCancel;
-(void)_didTapDone;
-(void)_dateDidChange;
-(void)didSucceedRescheduleRequest;
-(void)didFailRescheduleRequestWithError:(id)arg1 ;
-(void)_updateLoadingViewToFull;
-(void)_clearLoadingView;
-(id)initWithStory:(id)arg1 context:(id)arg2 ;
-(void)setDelegate:(id<FBPageCustomPostsRescheduleViewControllerDelegate>)arg1 ;
-(id<FBPageCustomPostsRescheduleViewControllerDelegate>)delegate;
-(unsigned long long)supportedInterfaceOrientations;
-(void)viewDidLayoutSubviews;
-(long long)preferredInterfaceOrientationForPresentation;
-(void)viewDidLoad;
-(void)_showLoadingView;
@end
