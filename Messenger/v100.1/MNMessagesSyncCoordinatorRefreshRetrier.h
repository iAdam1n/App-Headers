/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:29:23 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/85513C16-EFBE-4673-84DA-B31CD22289F8/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MNMessagesSyncCoordinatorRefreshRetrierDelegate;
@class FBExponentialBackoffTimer;

@interface MNMessagesSyncCoordinatorRefreshRetrier : NSObject {

	FBExponentialBackoffTimer* _retryCoordinatorRefreshTimer;
	id<MNMessagesSyncCoordinatorRefreshRetrierDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<MNMessagesSyncCoordinatorRefreshRetrierDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)retryCoordinatorRefresh;
-(void)resetCoordinatorRefresh;
-(void)_retryCoordinatorRefreshWithExponentialBackoff;
-(void)_retryCoordinatorRefreshNow;
-(id)init;
-(void)setDelegate:(id<MNMessagesSyncCoordinatorRefreshRetrierDelegate>)arg1 ;
-(void)dealloc;
-(id<MNMessagesSyncCoordinatorRefreshRetrierDelegate>)delegate;
@end
