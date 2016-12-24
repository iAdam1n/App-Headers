/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:29:23 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/85513C16-EFBE-4673-84DA-B31CD22289F8/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBNetworkerRequestDelegate.h>

@protocol FBNetworkDispatch, FBServerPagesFetcherDelegate;
@class FBSimpleNetworkerRequest, NSString;

@interface FBServerPagesSearchFetcher : NSObject <FBNetworkerRequestDelegate> {

	id<FBNetworkDispatch> _networkDispatcher;
	FBSimpleNetworkerRequest* _networkRequest;
	unsigned long long _resultsLimit;
	unsigned long long _vcEndpointResultsLimit;
	BOOL _includeGames;
	NSString* _searchText;
	id<FBServerPagesFetcherDelegate> _delegate;

}

@property (nonatomic,copy) NSString * searchText;                                           //@synthesize searchText=_searchText - In the implementation block
@property (assign,nonatomic,__weak) id<FBServerPagesFetcherDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)networkerRequest:(id)arg1 didSucceed:(id)arg2 status:(id)arg3 ;
-(void)networkerRequest:(id)arg1 didFail:(id)arg2 status:(id)arg3 ;
-(id)initWithNetworkDispatcher:(id)arg1 searchText:(id)arg2 resultsLimit:(unsigned long long)arg3 vcEndpointResultsLimit:(unsigned long long)arg4 includeGames:(BOOL)arg5 ;
-(id)_createRequestParameters;
-(void)parseResponse:(id)arg1 ;
-(void)cancel;
-(void)setDelegate:(id<FBServerPagesFetcherDelegate>)arg1 ;
-(id<FBServerPagesFetcherDelegate>)delegate;
-(NSString *)searchText;
-(void)setSearchText:(NSString *)arg1 ;
-(void)fetch;
@end
