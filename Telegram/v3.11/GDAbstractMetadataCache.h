/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:53:37 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D5AA3D7F-F68B-43D8-8CC1-85DAFE886350/Telegram.app/Telegram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Telegram/GDMetadataCache.h>

@protocol OS_dispatch_queue;
@class NSObject, NSString;

@interface GDAbstractMetadataCache : NSObject <GDMetadataCache> {

	NSObject*<OS_dispatch_queue> _isolationQueue;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> isolationQueue;              //@synthesize isolationQueue=_isolationQueue - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)treeNodeForURL:(id)arg1 ;
-(void)setTreeNode:(id)arg1 forURL:(id)arg2 ;
-(void)removeTreeNodeForURL:(id)arg1 ;
-(id)metadataForURL:(id)arg1 directoryContents:(id*)arg2 ;
-(void)setMetadata:(id)arg1 forURL:(id)arg2 addToParent:(id)arg3 ;
-(void)setMetadata:(id)arg1 directoryContents:(id)arg2 forURL:(id)arg3 addToParent:(id)arg4 ;
-(id)directoryContentsForURL:(id)arg1 ;
-(id)metadataForURL:(id)arg1 ;
-(void)setMetadata:(id)arg1 forURL:(id)arg2 ;
-(void)removeMetadataForURL:(id)arg1 removeFromParent:(id)arg2 ;
-(void)setDirectoryContents:(id)arg1 forURL:(id)arg2 ;
-(id)directoryContentsMetadataArrayForURL:(id)arg1 ;
-(id)init;
-(void)reset;
-(void)setIsolationQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_dispatch_queue>)isolationQueue;
@end
