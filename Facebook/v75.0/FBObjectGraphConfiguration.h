/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:28 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSArray, NSMutableDictionary;

@interface FBObjectGraphConfiguration : NSObject {

	BOOL _shouldInspectTimers;
	BOOL _shouldCacheLayouts;
	NSArray* _filterBlocks;
	NSMutableDictionary* _layoutCache;

}

@property (nonatomic,copy,readonly) NSArray * filterBlocks;                    //@synthesize filterBlocks=_filterBlocks - In the implementation block
@property (nonatomic,readonly) BOOL shouldInspectTimers;                       //@synthesize shouldInspectTimers=_shouldInspectTimers - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * layoutCache;              //@synthesize layoutCache=_layoutCache - In the implementation block
@property (nonatomic,readonly) BOOL shouldCacheLayouts;                        //@synthesize shouldCacheLayouts=_shouldCacheLayouts - In the implementation block
-(id)initWithFilterBlocks:(id)arg1 shouldInspectTimers:(BOOL)arg2 ;
-(NSArray *)filterBlocks;
-(BOOL)shouldInspectTimers;
-(BOOL)shouldCacheLayouts;
-(id)init;
-(NSMutableDictionary *)layoutCache;
@end
