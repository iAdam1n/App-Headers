/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:40:56 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/E282ADAB-AF96-4184-9890-B5E58B4BDDD0/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Messenger/FBImageDownload.h>

@interface FBStreamingImageDownload : FBImageDownload {

	unsigned long long _nextFlagToNotify;
	unsigned long long _nextFlagToDecode;
	unsigned long long _desiredImageFlag;
	unsigned long long _imageFlagsToBeNotified;
	/*^block*/id _streamingBlock;

}

@property (nonatomic,readonly) unsigned long long desiredImageFlag;                    //@synthesize desiredImageFlag=_desiredImageFlag - In the implementation block
@property (nonatomic,readonly) unsigned long long imageFlagsToBeNotified;              //@synthesize imageFlagsToBeNotified=_imageFlagsToBeNotified - In the implementation block
@property (nonatomic,copy,readonly) id streamingBlock;                                 //@synthesize streamingBlock=_streamingBlock - In the implementation block
-(unsigned long long)desiredImageFlag;
-(void)cleanUpAfterCompletionOrCancelation;
-(BOOL)decodeCachedImageIfNeeded:(id)arg1 ;
-(void)completeAndCleanupWithImage:(id)arg1 type:(unsigned long long)arg2 error:(id)arg3 delegate:(id)arg4 ;
-(id)finalCachedImageToBeUsedFromCachedImage:(id)arg1 ;
-(unsigned long long)imageFlagsToBeNotified;
-(BOOL)_shouldNotifyAboutImage:(id)arg1 ;
-(void)_updateNextFlagToNotify:(unsigned long long)arg1 ;
-(unsigned long long)_nextImageFlagInImageFlagsToBeNotifiedLargerThan:(unsigned long long)arg1 ;
-(id)initWithURL:(id)arg1 scenePath:(id)arg2 priority:(long long)arg3 options:(unsigned long long)arg4 desiredImageFlag:(unsigned long long)arg5 imageFlagsToBeNotified:(unsigned long long)arg6 callPath:(id)arg7 callbackQueue:(id)arg8 streamingBlock:(/*^block*/id)arg9 ;
-(id)streamingBlock;
@end
