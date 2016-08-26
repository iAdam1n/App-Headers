/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:39:33 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/C3C2BD9F-C9D4-4E48-9EC0-40E7F1350599/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBEntityCardsCollectionPageDownloading.h>

@protocol FBEntityCardsPageDownloadQueryProvider, FBServiceTransactionMutating;
@class FBUserSession, FBMemPageInfo, NSString;

@interface FBEntityCardsCollectionPageDownloader : NSObject <FBEntityCardsCollectionPageDownloading> {

	FBUserSession* _session;
	id<FBEntityCardsPageDownloadQueryProvider> _requestProvider;
	FBMemPageInfo* _tailPageInfo;
	id<FBServiceTransactionMutating> _token;
	int _networkRequestThresholdForDownloadRequest;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)loadEntitiesForIDs:(id)arg1 contextItemCount:(unsigned long long)arg2 displaySurface:(id)arg3 displaySurfaceSourceId:(id)arg4 location:(id)arg5 enableBatching:(BOOL)arg6 initialEntityIndex:(unsigned long long)arg7 batchLoadBlock:(/*^block*/id)arg8 ;
-(BOOL)canLoadEntitiesInScrollDirection:(unsigned long long)arg1 pageSize:(unsigned long long*)arg2 ;
-(void)loadEntitiesInScrollDirection:(unsigned long long)arg1 pageSize:(unsigned long long)arg2 contextItemCount:(unsigned long long)arg3 displaySurface:(id)arg4 displaySurfaceSourceId:(id)arg5 location:(id)arg6 loadBlock:(/*^block*/id)arg7 ;
-(void)setInitialTailPageInfo:(id)arg1 ;
-(id)initWithSession:(id)arg1 requestProvider:(id)arg2 tailPageInfo:(id)arg3 ;
-(id)_entitiesFromPaginationQueryResponse:(id)arg1 ;
-(id)_pageInfoPaginationQueryResponse:(id)arg1 ;
@end
