/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:39:28 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/C3C2BD9F-C9D4-4E48-9EC0-40E7F1350599/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FBServiceTransactionMutating;
@class FBUserSession, NSString;

@interface FBFNSearchDataController : NSObject {

	FBUserSession* _session;
	BOOL _hasMore;
	id<FBServiceTransactionMutating> _serviceToken;
	NSString* _searchText;
	NSString* _endCursor;

}

@property (nonatomic,retain) id<FBServiceTransactionMutating> serviceToken;              //@synthesize serviceToken=_serviceToken - In the implementation block
@property (nonatomic,copy) NSString * searchText;                                        //@synthesize searchText=_searchText - In the implementation block
@property (assign,nonatomic) BOOL hasMore;                                               //@synthesize hasMore=_hasMore - In the implementation block
@property (nonatomic,copy) NSString * endCursor;                                         //@synthesize endCursor=_endCursor - In the implementation block
-(void)setEndCursor:(NSString *)arg1 ;
-(NSString *)endCursor;
-(void)loadWithSearchText:(id)arg1 count:(unsigned long long)arg2 onDone:(/*^block*/id)arg3 ;
-(void)_loadWithSearchText:(id)arg1 cursor:(id)arg2 count:(unsigned long long)arg3 onDone:(/*^block*/id)arg4 ;
-(void)loadMoreWithCount:(unsigned long long)arg1 onDone:(/*^block*/id)arg2 ;
-(void)setHasMore:(BOOL)arg1 ;
-(void)_handleResponse:(id)arg1 onDone:(/*^block*/id)arg2 ;
-(void)_handleFailure:(id)arg1 status:(id)arg2 onDone:(/*^block*/id)arg3 ;
-(void)loadWithSearchText:(id)arg1 onDone:(/*^block*/id)arg2 ;
-(BOOL)hasMore;
-(void)loadMoreOnDone:(/*^block*/id)arg1 ;
-(NSString *)searchText;
-(id<FBServiceTransactionMutating>)serviceToken;
-(void)setServiceToken:(id<FBServiceTransactionMutating>)arg1 ;
-(id)initWithSession:(id)arg1 ;
-(void)setSearchText:(NSString *)arg1 ;
@end
