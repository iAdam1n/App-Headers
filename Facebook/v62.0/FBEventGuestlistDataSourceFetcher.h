/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:39:30 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/C3C2BD9F-C9D4-4E48-9EC0-40E7F1350599/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class FBGraphQLMemPaginatedConnectionController, NSOrderedSet;

@interface FBEventGuestlistDataSourceFetcher : NSObject {

	BOOL _hasDownloadedData;
	BOOL _isLocalRequest;
	long long _queryType;
	long long _sectionType;
	FBGraphQLMemPaginatedConnectionController* _paginatedController;
	NSOrderedSet* _data;

}

@property (nonatomic,readonly) long long queryType;                                                          //@synthesize queryType=_queryType - In the implementation block
@property (nonatomic,readonly) long long sectionType;                                                        //@synthesize sectionType=_sectionType - In the implementation block
@property (nonatomic,readonly) FBGraphQLMemPaginatedConnectionController * paginatedController;              //@synthesize paginatedController=_paginatedController - In the implementation block
@property (nonatomic,retain) NSOrderedSet * data;                                                            //@synthesize data=_data - In the implementation block
@property (assign,nonatomic) BOOL hasDownloadedData;                                                         //@synthesize hasDownloadedData=_hasDownloadedData - In the implementation block
@property (assign,nonatomic) BOOL isLocalRequest;                                                            //@synthesize isLocalRequest=_isLocalRequest - In the implementation block
+(id)dataSourceFetcherWithEvent:(id)arg1 session:(id)arg2 keyPath:(id)arg3 queryType:(long long)arg4 sectionType:(long long)arg5 ;
+(id)localDataSourceFetcherWithEvent:(id)arg1 session:(id)arg2 sectionType:(long long)arg3 ;
-(id)initWithEvent:(id)arg1 session:(id)arg2 keyPath:(id)arg3 queryType:(long long)arg4 sectionType:(long long)arg5 ;
-(id)initWithEvent:(id)arg1 session:(id)arg2 sectionType:(long long)arg3 ;
-(void)setIsLocalRequest:(BOOL)arg1 ;
-(BOOL)isLocalRequest;
-(FBGraphQLMemPaginatedConnectionController *)paginatedController;
-(long long)queryType;
-(void)setHasDownloadedData:(BOOL)arg1 ;
-(BOOL)hasDownloadedData;
-(NSOrderedSet *)data;
-(void)setData:(NSOrderedSet *)arg1 ;
-(long long)sectionType;
@end
