/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:46:32 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/D20B482D-7A4B-420E-BEFA-D4B2B5C94752/Telegram.app/Telegram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Telegram/GDAbstractMetadataCache.h>

@protocol OS_dispatch_queue;
@class NSMutableDictionary, NSObject;

@interface GDRetainingMetadataCache : GDAbstractMetadataCache {

	NSMutableDictionary* _dictionary;
	NSObject*<OS_dispatch_queue> _accessQueue;

}

@property (nonatomic,retain) NSMutableDictionary * dictionary;                      //@synthesize dictionary=_dictionary - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> accessQueue;              //@synthesize accessQueue=_accessQueue - In the implementation block
-(id)treeNodeForURL:(id)arg1 ;
-(void)setTreeNode:(id)arg1 forURL:(id)arg2 ;
-(void)removeTreeNodeForURL:(id)arg1 ;
-(id)init;
-(NSMutableDictionary *)dictionary;
-(void)reset;
-(void)setDictionary:(NSMutableDictionary *)arg1 ;
-(NSObject*<OS_dispatch_queue>)accessQueue;
-(void)setAccessQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
@end

