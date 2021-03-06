/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:18:25 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/6F5201FD-3D2F-4BE1-80E5-E1251C7564E3/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue, FBServiceTransactionMutating, MNInboxFetcherDelegate, MNInboxFetcherDataSource;
@class FBUserSession, NSObject;

@interface MNInboxFetcher : NSObject {

	FBUserSession* _session;
	NSObject*<OS_dispatch_queue> _queue;
	id<FBServiceTransactionMutating> _token;
	id<MNInboxFetcherDelegate> _delegate;
	id<MNInboxFetcherDataSource> _dataSource;

}

@property (assign,nonatomic,__weak) id<MNInboxFetcherDelegate> delegate;                  //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic,__weak) id<MNInboxFetcherDataSource> dataSource;              //@synthesize dataSource=_dataSource - In the implementation block
-(void)fetchWithFetchConfig:(id)arg1 ;
-(void)_handleFetchedViewer:(id)arg1 ;
-(id)initWithSession:(id)arg1 queue:(id)arg2 ;
-(void)setDataSource:(id<MNInboxFetcherDataSource>)arg1 ;
-(void)setDelegate:(id<MNInboxFetcherDelegate>)arg1 ;
-(void)dealloc;
-(id<MNInboxFetcherDataSource>)dataSource;
-(id<MNInboxFetcherDelegate>)delegate;
@end

