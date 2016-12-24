/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:17 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBPersonSyncTerribleNetworkerRequestOperation.h>

@protocol FBFullSyncOperationDelegate;
@class FBContactsFetchContext;

@interface FBGraphQLFullSyncOperation : FBPersonSyncTerribleNetworkerRequestOperation {

	FBContactsFetchContext* _previousContext;
	id<FBFullSyncOperationDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<FBFullSyncOperationDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id)_syncRequest;
-(id)initWithNetworker:(id)arg1 previousContext:(id)arg2 ;
-(void)requestSucceededWithResponse:(id)arg1 ;
-(void)requestFailedWithError:(id)arg1 ;
-(BOOL)_shouldMakeFavoritesRequest;
-(id)_favoritesRequest;
-(id)_parseResponse:(id)arg1 error:(id*)arg2 ;
-(void)setDelegate:(id<FBFullSyncOperationDelegate>)arg1 ;
-(id<FBFullSyncOperationDelegate>)delegate;
-(id)request;
@end
