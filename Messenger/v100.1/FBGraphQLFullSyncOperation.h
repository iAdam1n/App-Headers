/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:29:26 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/85513C16-EFBE-4673-84DA-B31CD22289F8/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBPersonSyncTerribleNetworkerRequestOperation.h>

@protocol FBFullSyncOperationDelegate;
@class FBContactsFetchContext;

@interface FBGraphQLFullSyncOperation : FBPersonSyncTerribleNetworkerRequestOperation {

	FBContactsFetchContext* _previousContext;
	id<FBFullSyncOperationDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<FBFullSyncOperationDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id)initWithNetworker:(id)arg1 previousContext:(id)arg2 ;
-(void)requestSucceededWithResponse:(id)arg1 ;
-(void)requestFailedWithError:(id)arg1 ;
-(BOOL)_shouldMakeFavoritesRequest;
-(id)_syncRequest;
-(id)_favoritesRequest;
-(id)_parseResponse:(id)arg1 error:(id*)arg2 ;
-(void)setDelegate:(id<FBFullSyncOperationDelegate>)arg1 ;
-(id<FBFullSyncOperationDelegate>)delegate;
-(id)request;
@end

