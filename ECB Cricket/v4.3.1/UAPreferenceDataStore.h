/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 1:44:05 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/DE3331E2-1165-4E9B-8894-BDF4D69820B5/ECBCricketApp.app/ECBCricketApp
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


@class NSUserDefaults, NSString;

@interface UAPreferenceDataStore : NSObject {

	NSUserDefaults* _defaults;
	NSString* _keyPrefix;

}

@property (nonatomic,retain) NSUserDefaults * defaults;              //@synthesize defaults=_defaults - In the implementation block
@property (nonatomic,copy) NSString * keyPrefix;                     //@synthesize keyPrefix=_keyPrefix - In the implementation block
+(id)preferenceDataStoreWithKeyPrefix:(id)arg1 ;
-(void)migrateUnprefixedKeys:(id)arg1 ;
-(void)setKeyPrefix:(NSString *)arg1 ;
-(NSString *)keyPrefix;
-(id)prefixKey:(id)arg1 ;
-(id)URLForKey:(id)arg1 ;
-(void)setFloat:(float)arg1 forKey:(id)arg2 ;
-(void)setInteger:(long long)arg1 forKey:(id)arg2 ;
-(void)setDefaults:(NSUserDefaults *)arg1 ;
-(BOOL)boolForKey:(id)arg1 ;
-(id)valueForKey:(id)arg1 ;
-(void)setValue:(id)arg1 forKey:(id)arg2 ;
-(void)removeObjectForKey:(id)arg1 ;
-(float)floatForKey:(id)arg1 ;
-(id)stringForKey:(id)arg1 ;
-(void)setBool:(BOOL)arg1 forKey:(id)arg2 ;
-(double)doubleForKey:(id)arg1 ;
-(long long)integerForKey:(id)arg1 ;
-(id)dictionaryForKey:(id)arg1 ;
-(void)removeAll;
-(NSUserDefaults *)defaults;
-(id)dataForKey:(id)arg1 ;
-(void)setURL:(id)arg1 forKey:(id)arg2 ;
-(void)setDouble:(double)arg1 forKey:(id)arg2 ;
-(id)objectForKey:(id)arg1 ;
-(void)setObject:(id)arg1 forKey:(id)arg2 ;
-(id)stringArrayForKey:(id)arg1 ;
-(id)arrayForKey:(id)arg1 ;
@end
