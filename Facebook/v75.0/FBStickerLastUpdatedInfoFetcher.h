/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:17 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FBServiceTransactionMutating;
@class FBGraphQLService;

@interface FBStickerLastUpdatedInfoFetcher : NSObject {

	id<FBServiceTransactionMutating> _fetchRequest;
	FBGraphQLService* _graphQLService;
	unsigned long long _layoutIdiom;

}
-(void)_applyServiceConfiguration:(id)arg1 ;
-(void)_handleDownloadError:(id)arg1 ;
-(id)_handleDownloadResponse:(id)arg1 ;
-(id)initWithGraphQLService:(id)arg1 layoutIdiom:(unsigned long long)arg2 ;
-(void)fetchUpdatedStickerPacksSince:(id)arg1 successBlock:(/*^block*/id)arg2 failureBlock:(/*^block*/id)arg3 ;
-(void)dealloc;
-(void)cancelRequest;
@end
