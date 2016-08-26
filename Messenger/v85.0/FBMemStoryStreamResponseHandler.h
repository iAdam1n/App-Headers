/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:18:22 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/6F5201FD-3D2F-4BE1-80E5-E1251C7564E3/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBStreamResponseHandler.h>

@protocol FBGraphQLConnectionInterface;
@class FBGraphQLConsistentLookasideCache, FBGraphQLConnectionInsertionLocation;

@interface FBMemStoryStreamResponseHandler : FBStreamResponseHandler {

	FBGraphQLConsistentLookasideCache* _consistentLookasideCache;
	FBGraphQLConnectionInsertionLocation* _locationForNextInsertion;
	long long _feedType;
	id<FBGraphQLConnectionInterface> _connection;

}

@property (nonatomic,readonly) long long feedType;                                       //@synthesize feedType=_feedType - In the implementation block
@property (nonatomic,readonly) id<FBGraphQLConnectionInterface> connection;              //@synthesize connection=_connection - In the implementation block
-(long long)feedType;
-(id)processResponse:(id)arg1 forQuery:(id)arg2 responseIsAlreadyParsed:(BOOL)arg3 status:(id)arg4 ;
-(void)_addEdgesToStoreForLoadResult:(id)arg1 responseUUID:(id)arg2 userInfo:(id)arg3 ;
-(id)initWithTargetID:(id)arg1 feedType:(long long)arg2 loadType:(unsigned long long)arg3 connection:(id)arg4 insertionLocation:(id)arg5 consistentLookasideCache:(id)arg6 analytics:(id)arg7 experimentManager:(id)arg8 ;
-(void)processResponse:(id)arg1 forRequest:(id)arg2 inDownloadRequest:(id)arg3 isLastResponse:(BOOL)arg4 responseUUID:(id)arg5 status:(id)arg6 ;
-(void)processCancelledRequest:(id)arg1 status:(id)arg2 ;
-(void)processFailedRequest:(id)arg1 error:(id)arg2 status:(id)arg3 ;
-(void)handleRequestRetryWithError:(id)arg1 status:(id)arg2 ;
-(id)processResponse:(id)arg1 forQuery:(id)arg2 status:(id)arg3 ;
-(id<FBGraphQLConnectionInterface>)connection;
@end
