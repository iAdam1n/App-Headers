/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:40:34 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/E282ADAB-AF96-4184-9890-B5E58B4BDDD0/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


@protocol FBServiceTransactionMutating;
@class FBGraphQLService;

@interface FBStickerLastUpdatedInfoFetcher : NSObject {

	id<FBServiceTransactionMutating> _fetchRequest;
	FBGraphQLService* _graphQLService;
	unsigned long long _layoutIdiom;

}
-(void)_handleDownloadError:(id)arg1 ;
-(id)_handleDownloadResponse:(id)arg1 ;
-(void)fetchUpdatedStickerPacksSince:(id)arg1 successBlock:(/*^block*/id)arg2 failureBlock:(/*^block*/id)arg3 ;
-(id)initWithGraphQLService:(id)arg1 layoutIdiom:(unsigned long long)arg2 ;
-(void)dealloc;
-(void)cancelRequest;
@end

