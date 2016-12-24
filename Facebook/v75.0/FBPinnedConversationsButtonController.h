/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:12 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBPinnedConversationsButtonViewDelegate.h>
#import <Facebook/FBPinnedConversationsCommentSubscriberListener.h>
#import <Facebook/FBPinnedConversationsViewerMostRecentPostTrackerListener.h>
#import <Facebook/FBNavigationBarButtonProviding.h>

@protocol FBIntentHandler;
@class FBUserSession, FBPinnedConversationsButtonView, FBPinnedConversationsViewerMostRecentPostTracker, FBPinnedConversationsCommentSubscriber, NSString;

@interface FBPinnedConversationsButtonController : NSObject <FBPinnedConversationsButtonViewDelegate, FBPinnedConversationsCommentSubscriberListener, FBPinnedConversationsViewerMostRecentPostTrackerListener, FBNavigationBarButtonProviding> {

	FBUserSession* _session;
	FBPinnedConversationsButtonView* _buttonView;
	FBPinnedConversationsViewerMostRecentPostTracker* _postTracker;
	FBPinnedConversationsCommentSubscriber* _commentSubscriber;
	id<FBIntentHandler> _intentHandler;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithNavigationBarDecorator:(id)arg1 intentHandler:(id)arg2 session:(id)arg3 ;
-(void)subscriber:(id)arg1 didUpdateUnreadCommentCount:(unsigned long long)arg2 forFeedback:(id)arg3 ;
-(void)didTapPinnedConversationsButtonView:(id)arg1 ;
-(void)tracker:(id)arg1 didUpdateViewerMostRecentPost:(id)arg2 ;
-(id)buttonView;
@end
