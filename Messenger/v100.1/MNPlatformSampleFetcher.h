/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:29:20 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/85513C16-EFBE-4673-84DA-B31CD22289F8/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/MNPlatformSampleProviderListener.h>
#import <Messenger/MNMediaCollectionFetching.h>

@protocol MNMediaCollectionFetchingDelegate;
@class NSString, MNPlatformSampleProvider, NSArray, NSDictionary;

@interface MNPlatformSampleFetcher : NSObject <MNPlatformSampleProviderListener, MNMediaCollectionFetching> {

	NSString* _appID;
	MNPlatformSampleProvider* _platformSampleProvider;
	BOOL _fetchCancelled;
	id<MNMediaCollectionFetchingDelegate> _delegate;
	NSArray* _mediaCollection;
	NSDictionary* _stickerSizeByFbId;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<MNMediaCollectionFetchingDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy,readonly) NSArray * mediaCollection;                                   //@synthesize mediaCollection=_mediaCollection - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * stickerSizeByFbId;                            //@synthesize stickerSizeByFbId=_stickerSizeByFbId - In the implementation block
@property (nonatomic,readonly) BOOL needsRefetch; 
@property (getter=isEmpty,nonatomic,readonly) BOOL empty; 
-(NSDictionary *)stickerSizeByFbId;
-(void)fetchCollection;
-(void)_updateMediaCollection;
-(void)didUpdatePlatformSamples;
-(id)initWithAppID:(id)arg1 platformSampleProvider:(id)arg2 ;
-(void)cancel;
-(void)setDelegate:(id<MNMediaCollectionFetchingDelegate>)arg1 ;
-(void)dealloc;
-(id<MNMediaCollectionFetchingDelegate>)delegate;
-(BOOL)isEmpty;
-(NSArray *)mediaCollection;
-(BOOL)needsRefetch;
@end
