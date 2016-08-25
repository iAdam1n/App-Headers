/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 12:03:42 AM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FE008365-307B-4CDF-8948-1B974F28A799/SolitaireFree.app/SolitaireFree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface CBCommonCache : NSObject {

	NSString* _defaultCache;

}

@property (nonatomic,retain) NSString * defaultCache;              //@synthesize defaultCache=_defaultCache - In the implementation block
-(void)setDefaultCache:(NSString *)arg1 ;
-(id)initWithDefaultCache:(id)arg1 ;
-(void)createNewCacheWith:(id)arg1 cacheDictionary:(id)arg2 ;
-(id)loadMostRecentCacheForName:(id)arg1 ;
-(id)commonCachePathWithFileName:(id)arg1 ;
-(id)loadCacheFromJsonFilePath:(id)arg1 ;
-(void)fetchContentFor:(id)arg1 withFetcher:(/*^block*/id)arg2 fetchedCallback:(/*^block*/id)arg3 ;
-(void)dealloc;
-(id)init;
-(NSString *)defaultCache;
@end

