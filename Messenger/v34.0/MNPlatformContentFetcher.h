/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:40:50 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/E282ADAB-AF96-4184-9890-B5E58B4BDDD0/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Messenger/MNMediaCollectionFetching.h>

@protocol FBServiceTransactionMutating, MNMediaCollectionFetchingDelegate;
@class FBUserSession, MNPhotoImageRequester, NSArray, NSString;

@interface MNPlatformContentFetcher : NSObject <MNMediaCollectionFetching> {

	FBUserSession* _session;
	MNPhotoImageRequester* _imageRequester;
	NSArray* _appIDs;
	unsigned long long _limit;
	NSString* _query;
	unsigned long long _queryType;
	unsigned long long _groupByType;
	double _previewHeight;
	double _maxCacheAge;
	BOOL _cachedResponse;
	long long _fetchState;
	id<FBServiceTransactionMutating> _graphQLServiceMutator;
	long long _contentFetcherType;
	id<MNMediaCollectionFetchingDelegate> _delegate;
	NSArray* _mediaCollection;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<MNMediaCollectionFetchingDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy,readonly) NSArray * mediaCollection;                                   //@synthesize mediaCollection=_mediaCollection - In the implementation block
@property (nonatomic,readonly) BOOL needsRefetch; 
@property (getter=isEmpty,nonatomic,readonly) BOOL empty; 
-(void)_handleDownloadResponse:(id)arg1 ;
-(void)fetchCollection;
-(BOOL)needsRefetch;
-(BOOL)_needsRenderAsStickerContentsOnly;
-(void)_handleCachedResponse:(id)arg1 ;
-(void)_handleFailureResponseWithError:(id)arg1 ;
-(void)_updateMNTextAndAttachmentForwardContentArray:(id)arg1 ;
-(id)initWithSession:(id)arg1 imageRequester:(id)arg2 limit:(unsigned long long)arg3 appIDs:(id)arg4 query:(id)arg5 queryType:(unsigned long long)arg6 groupByType:(unsigned long long)arg7 previewHeight:(double)arg8 maxCacheAge:(unsigned long long)arg9 contentFetcherType:(long long)arg10 ;
-(void)cancel;
-(void)setDelegate:(id<MNMediaCollectionFetchingDelegate>)arg1 ;
-(id<MNMediaCollectionFetchingDelegate>)delegate;
-(BOOL)isEmpty;
-(NSArray *)mediaCollection;
@end

