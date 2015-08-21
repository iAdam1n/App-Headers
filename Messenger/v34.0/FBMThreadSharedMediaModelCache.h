/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:40:47 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/E282ADAB-AF96-4184-9890-B5E58B4BDDD0/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Messenger/FBSessionClassProvidable.h>

@class FBMThreadPhotoViewModelListeningAnnouncer, FBMThreadBasedCacheManager, NSString;

@interface FBMThreadSharedMediaModelCache : NSObject <FBSessionClassProvidable> {

	FBMThreadPhotoViewModelListeningAnnouncer* _photosChangedAnnouncer;
	FBMThreadBasedCacheManager* _cacheManager;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithProviderMapData:(id)arg1 ;
-(void)startWithQueue:(id)arg1 ;
-(id)sharedMediaModelsForThreadWithKey:(id)arg1 ;
-(void)setSharedMediaModels:(id)arg1 forThreadWithKey:(id)arg2 ;
-(void)appendSharedMediaModels:(id)arg1 forThreadWithKey:(id)arg2 ;
-(void)prependSharedMediaModels:(id)arg1 forThreadWithKey:(id)arg2 ;
-(id)initWithThreadSet:(id)arg1 ;
-(void)_updateSharedMediaModelsAndAnnounceIfNecessaryForThreadKey:(id)arg1 newSharedMediaModels:(id)arg2 oldSharedMediaModels:(id)arg3 ;
-(void)addThreadPhotoViewModelListener:(id)arg1 ;
-(void)removeThreadPhotoViewModelsListener:(id)arg1 ;
-(void)stop;
@end

