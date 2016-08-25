/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:58:14 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/0CF72264-5488-4FD5-B700-EF786D177983/BubbleMania.app/BubbleMania
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary;

@interface JsonCachedMap : NSObject {

	NSMutableDictionary* cacheHandles;
	NSMutableDictionary* map;

}

@property (nonatomic,retain) NSMutableDictionary * cacheHandles; 
@property (nonatomic,retain) NSMutableDictionary * map; 
-(NSMutableDictionary *)cacheHandles;
-(void)setCacheHandle:(int)arg1 forKey:(id)arg2 ;
-(void)releaseObjectForKey:(id)arg1 ;
-(void)setCacheHandles:(NSMutableDictionary *)arg1 ;
-(void)dealloc;
-(unsigned long long)count;
-(id)init;
-(id)objectForKey:(id)arg1 ;
-(id)allKeys;
-(NSMutableDictionary *)map;
-(void)setMap:(NSMutableDictionary *)arg1 ;
@end

