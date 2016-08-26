/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:39:36 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/C3C2BD9F-C9D4-4E48-9EC0-40E7F1350599/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBViewerContextClassProvidable.h>
#import <Facebook/MNThreadMessageSubscribing.h>

@protocol MNAuthenticationManager, OS_dispatch_queue;
@class FBMThreadSharedMediaModelCacheListeningAnnouncer, FBMThreadBasedCacheManager, MNAppMessageAttachmentUtils, NSObject, NSString;

@interface FBMThreadSharedMediaModelCache : NSObject <FBViewerContextClassProvidable, MNThreadMessageSubscribing> {

	FBMThreadSharedMediaModelCacheListeningAnnouncer* _mediaModelsChangedAnnouncer;
	FBMThreadBasedCacheManager* _cacheManager;
	MNAppMessageAttachmentUtils* _appMessageAttachmentUtils;
	id<MNAuthenticationManager> _authManager;
	NSObject*<OS_dispatch_queue> _queue;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithProviderMapData:(id)arg1 ;
-(void)startWithQueue:(id)arg1 ;
-(void)didApplyUpdates:(id)arg1 toMessageSet:(id)arg2 forOriginalMessageSet:(id)arg3 threadKey:(id)arg4 ;
-(void)didReplaceMessageSet:(id)arg1 withMessageSet:(id)arg2 forThreadKey:(id)arg3 ;
-(id)initWithThreadSummarySubscribingAnnouncer:(id)arg1 urlFormatter:(id)arg2 authManager:(id)arg3 ;
-(id)sharedMediaModelsForThreadWithKey:(id)arg1 ;
-(void)_updateSharedMediaModelsAndAnnounceIfNecessaryForThreadKey:(id)arg1 newSharedMediaModels:(id)arg2 oldSharedMediaModels:(id)arg3 ;
-(void)_deletePhotoViewModelWithKeys:(id)arg1 threadKey:(id)arg2 ;
-(void)setSharedMediaModels:(id)arg1 forThreadWithKey:(id)arg2 ;
-(void)prependSharedMediaModels:(id)arg1 forThreadWithKey:(id)arg2 ;
-(void)appendSharedMediaModels:(id)arg1 forThreadWithKey:(id)arg2 ;
-(void)addThreadSharedMediaModelCacheListener:(id)arg1 ;
-(void)removeThreadSharedMediaModelCacheListener:(id)arg1 ;
-(void)stop;
@end
