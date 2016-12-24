/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:29:22 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/85513C16-EFBE-4673-84DA-B31CD22289F8/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBMessageAttachmentPhotoQualityFetching.h>

@protocol FBPersistentKeyValueStoreProtocol, OS_dispatch_queue, FBMessageAttachmentPhotoQualityFetching;
@class NSObject, NSString;

@interface FBMessageAttachmentPhotoQualityDiskFetcher : NSObject <FBMessageAttachmentPhotoQualityFetching> {

	id<FBPersistentKeyValueStoreProtocol> _persistentKeyValueStore;
	NSObject*<OS_dispatch_queue> _pkvsDispatchQueue;
	id<FBMessageAttachmentPhotoQualityFetching> _photoQualityFetcher;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_refetchPhotoQualityForFbId:(id)arg1 queue:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)_persistentStoreForFetchResult:(id)arg1 fbId:(id)arg2 completionBlock:(/*^block*/id)arg3 ;
-(void)fetchPhotoQualityForFbId:(id)arg1 queue:(id)arg2 completion:(/*^block*/id)arg3 ;
-(id)initWithSession:(id)arg1 photoQualityFetcher:(id)arg2 ;
@end
