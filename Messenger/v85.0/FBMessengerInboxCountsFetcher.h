/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:18:28 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/6F5201FD-3D2F-4BE1-80E5-E1251C7564E3/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FBServiceTransactionMutating, FBMessengerInboxCountsFetcherDelegate;
@class FBGraphQLService;

@interface FBMessengerInboxCountsFetcher : NSObject {

	FBGraphQLService* _graphQLService;
	id<FBServiceTransactionMutating> _graphQLRequestToken;
	id<FBMessengerInboxCountsFetcherDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<FBMessengerInboxCountsFetcherDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)cancelFetch;
-(void)_graphqlFetchSucceededWithResponse:(id)arg1 ;
-(void)_graphqlFetchFailedWithError:(id)arg1 ;
-(void)setDelegate:(id<FBMessengerInboxCountsFetcherDelegate>)arg1 ;
-(id<FBMessengerInboxCountsFetcherDelegate>)delegate;
-(void)fetch;
-(id)initWithSession:(id)arg1 ;
@end
