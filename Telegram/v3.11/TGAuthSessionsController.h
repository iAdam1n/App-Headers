/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:53:39 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D5AA3D7F-F68B-43D8-8CC1-85DAFE886350/Telegram.app/Telegram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Telegram/TGCollectionMenuController.h>
#import <Telegram/ASWatcher.h>

@class NSArray, UIActivityIndicatorView, TGAuthSessionsEmptyView, SMetaDisposable, ASHandle, NSString;

@interface TGAuthSessionsController : TGCollectionMenuController <ASWatcher> {

	NSArray* _authSessions;
	UIActivityIndicatorView* _activityIndicatorView;
	TGAuthSessionsEmptyView* _emptyView;
	SMetaDisposable* _authSessionListDisposable;
	SMetaDisposable* _removeSessionDisposable;
	BOOL _editing;
	ASHandle* _actionHandle;

}

@property (nonatomic,retain) ASHandle * actionHandle;               //@synthesize actionHandle=_actionHandle - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)actionStageResourceDispatched:(id)arg1 resource:(id)arg2 arguments:(id)arg3 ;
-(ASHandle *)actionHandle;
-(void)setActionHandle:(ASHandle *)arg1 ;
-(void)editPressed;
-(void)didEnterEditingMode:(BOOL)arg1 ;
-(void)didLeaveEditingMode:(BOOL)arg1 ;
-(void)updateSessionList;
-(void)setAuthSessions:(id)arg1 ;
-(void)resetSessionsPressed;
-(void)dealloc;
-(id)init;
-(void)loadView;
-(void)removeSession:(id)arg1 ;
-(void)donePressed;
@end
