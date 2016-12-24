/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:29:33 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/85513C16-EFBE-4673-84DA-B31CD22289F8/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class FBStalePruningConfigBuilder, FBEvictionConfigBuilder, NSArray;

@interface FBManagedConfigBuilder : NSObject {

	BOOL _inlineData;
	FBStalePruningConfigBuilder* _stalePruning;
	FBEvictionConfigBuilder* _eviction;
	NSArray* _eventListenerPairs;

}

@property (assign,nonatomic) BOOL inlineData;                                         //@synthesize inlineData=_inlineData - In the implementation block
@property (nonatomic,retain) FBStalePruningConfigBuilder * stalePruning;              //@synthesize stalePruning=_stalePruning - In the implementation block
@property (nonatomic,retain) FBEvictionConfigBuilder * eviction;                      //@synthesize eviction=_eviction - In the implementation block
@property (nonatomic,copy) NSArray * eventListenerPairs;                              //@synthesize eventListenerPairs=_eventListenerPairs - In the implementation block
-(void)setStalePruning:(FBStalePruningConfigBuilder *)arg1 ;
-(FBStalePruningConfigBuilder *)stalePruning;
-(void)setEviction:(FBEvictionConfigBuilder *)arg1 ;
-(FBEvictionConfigBuilder *)eviction;
-(NSArray *)eventListenerPairs;
-(void)setEventListenerPairs:(NSArray *)arg1 ;
-(id)init;
-(id)build;
-(BOOL)inlineData;
-(void)setInlineData:(BOOL)arg1 ;
@end
