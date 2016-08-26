/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:39:38 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/C3C2BD9F-C9D4-4E48-9EC0-40E7F1350599/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <UIKit/UIViewController.h>
#import <UIKit/UITextViewDelegate.h>
#import <UIKit/UIGestureRecognizerDelegate.h>
#import <UIKit/UIScrollViewDelegate.h>
#import <Facebook/FBKeyboardObserverDelegate.h>
#import <Facebook/FBAggregatedPostsUploadBarViewDelegate.h>

@protocol FBNavigationCoordinator, FBServiceHelperProtocol;
@class FBMemFeedStory, FBUserSession, UITapGestureRecognizer, FBKeyboardObserver, UITextView, UIButton, UIView, FBAggregatedPostsUploadBarView, UIScrollView, NSString;

@interface FBExternalShareComposerViewController : UIViewController <UITextViewDelegate, UIGestureRecognizerDelegate, UIScrollViewDelegate, FBKeyboardObserverDelegate, FBAggregatedPostsUploadBarViewDelegate> {

	FBMemFeedStory* _story;
	FBUserSession* _session;
	id<FBNavigationCoordinator> _navigationCoordinator;
	UITapGestureRecognizer* _textFieldTapGestureRecognizer;
	UITapGestureRecognizer* _scrollViewTapGestureRecognizer;
	FBKeyboardObserver* _keyboardObserver;
	double _maxY;
	CGPoint _scrollOffset;
	UITextView* _countView;
	long long _characterCount;
	UIButton* _usernameView;
	UIView* _bottomBar;
	BOOL _updateAfterDelete;
	id<FBServiceHelperProtocol> _serviceHelper;
	FBAggregatedPostsUploadBarView* _uploadBar;
	UIView* _uploadOverlayView;
	UITextView* _textView;
	UIScrollView* _scrollView;
	long long _attachmentCharacterLength;

}

@property (nonatomic,readonly) UITextView * textView;                          //@synthesize textView=_textView - In the implementation block
@property (nonatomic,readonly) UIScrollView * scrollView;                      //@synthesize scrollView=_scrollView - In the implementation block
@property (assign,nonatomic) long long attachmentCharacterLength;              //@synthesize attachmentCharacterLength=_attachmentCharacterLength - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)fb_showNavBarSearchField;
-(id)analyticsModule;
-(void)keyboardObserver:(id)arg1 keyboardWillShowWithBeginFrame:(CGRect)arg2 endFrame:(CGRect)arg3 duration:(double)arg4 curve:(long long)arg5 ;
-(void)keyboardObserver:(id)arg1 keyboardWillHideWithBeginFrame:(CGRect)arg2 endFrame:(CGRect)arg3 duration:(double)arg4 curve:(long long)arg5 ;
-(void)_didTapCancel;
-(void)_didTapNext;
-(id)storyGraphQLID;
-(void)uploadBarDidRetryUpload:(id)arg1 ;
-(void)uploadBarDidCancelUpload:(id)arg1 withReason:(id)arg2 ;
-(void)_scrollViewTapped:(id)arg1 ;
-(id)_getStoryURL;
-(void)_textFieldTapped:(id)arg1 ;
-(void)_usernameTapped:(id)arg1 ;
-(void)_updateScreenName;
-(void)_updateTextViewHeight;
-(void)_updateCharacterCount:(id)arg1 ;
-(void)_hideUploadBar;
-(id)_truncateText:(id)arg1 ;
-(void)_showUploadBar;
-(void)_postStoryWithText:(id)arg1 ;
-(id)_getAttachmentsView;
-(long long)attachmentCharacterLength;
-(long long)_getCutLocation:(id)arg1 ;
-(void)_updateKeyboardWithAnimationDuration:(double)arg1 endFrame:(CGRect)arg2 ;
-(id)initWithStory:(id)arg1 session:(id)arg2 navigationCoordinator:(id)arg3 serviceHelper:(id)arg4 ;
-(void)handleSuccessWithPostURL:(id)arg1 ;
-(void)handleFailureWithError:(id)arg1 requireReauthentication:(BOOL)arg2 ;
-(void)disableCancelButton;
-(void)setAttachmentCharacterLength:(long long)arg1 ;
-(void)dealloc;
-(void)scrollViewWillBeginDragging:(id)arg1 ;
-(void)scrollViewWillBeginDecelerating:(id)arg1 ;
-(unsigned long long)supportedInterfaceOrientations;
-(UIScrollView *)scrollView;
-(void)loadView;
-(void)viewWillLayoutSubviews;
-(long long)preferredInterfaceOrientationForPresentation;
-(BOOL)textView:(id)arg1 shouldChangeTextInRange:(NSRange)arg2 replacementText:(id)arg3 ;
-(void)textViewDidChange:(id)arg1 ;
-(UITextView *)textView;
@end
