/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:40:50 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/E282ADAB-AF96-4184-9890-B5E58B4BDDD0/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Messenger/MNMediaCollectionFetching.h>

@protocol MNMediaCollectionFetchingDelegate;
@class FBStickerSearchPerformer, NSString, NSArray;

@interface MNStickerFetcher : NSObject <MNMediaCollectionFetching> {

	FBStickerSearchPerformer* _stickerSearchPerformer;
	NSString* _query;
	NSArray* _mediaCollection;
	id<MNMediaCollectionFetchingDelegate> _delegate;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<MNMediaCollectionFetchingDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy,readonly) NSArray * mediaCollection;                                   //@synthesize mediaCollection=_mediaCollection - In the implementation block
@property (nonatomic,readonly) BOOL needsRefetch; 
@property (getter=isEmpty,nonatomic,readonly) BOOL empty; 
-(void)fetchCollection;
-(BOOL)needsRefetch;
-(id)initWithStickerSearchPerformer:(id)arg1 query:(id)arg2 ;
-(void)cancel;
-(void)setDelegate:(id<MNMediaCollectionFetchingDelegate>)arg1 ;
-(id<MNMediaCollectionFetchingDelegate>)delegate;
-(BOOL)isEmpty;
-(NSArray *)mediaCollection;
@end
