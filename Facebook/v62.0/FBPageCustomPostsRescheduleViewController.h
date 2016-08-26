/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:39:31 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/C3C2BD9F-C9D4-4E48-9EC0-40E7F1350599/Facebook.app/Facebook
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
