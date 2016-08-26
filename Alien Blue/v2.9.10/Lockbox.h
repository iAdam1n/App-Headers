/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:41:47 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/91D74E3C-0E85-4CEF-8E44-3072C9AFF7E4/AlienBlue.app/AlienBlue
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface Lockbox : NSObject {

	NSString* _keyPrefix;

}

@property (nonatomic,retain) NSString * keyPrefix;              //@synthesize keyPrefix=_keyPrefix - In the implementation block
+(BOOL)setDictionary:(id)arg1 forKey:(id)arg2 accessibility:(void*)arg3 ;
+(BOOL)setString:(id)arg1 forKey:(id)arg2 accessibility:(void*)arg3 ;
+(BOOL)setArray:(id)arg1 forKey:(id)arg2 accessibility:(void*)arg3 ;
+(BOOL)setSet:(id)arg1 forKey:(id)arg2 accessibility:(void*)arg3 ;
+(BOOL)setDate:(id)arg1 forKey:(id)arg2 accessibility:(void*)arg3 ;
+(BOOL)setSet:(id)arg1 forKey:(id)arg2 ;
+(id)stringForKey:(id)arg1 ;
+(void)initialize;
+(id)dictionaryForKey:(id)arg1 ;
+(BOOL)setString:(id)arg1 forKey:(id)arg2 ;
+(id)arrayForKey:(id)arg1 ;
+(id)dateForKey:(id)arg1 ;
+(BOOL)setDate:(id)arg1 forKey:(id)arg2 ;
+(BOOL)setDictionary:(id)arg1 forKey:(id)arg2 ;
+(BOOL)setArray:(id)arg1 forKey:(id)arg2 ;
+(id)setForKey:(id)arg1 ;
-(BOOL)setDictionary:(id)arg1 forKey:(id)arg2 accessibility:(void*)arg3 ;
-(BOOL)setString:(id)arg1 forKey:(id)arg2 accessibility:(void*)arg3 ;
-(void)setKeyPrefix:(NSString *)arg1 ;
-(id)_hierarchicalKey:(id)arg1 ;
-(id)_query;
-(BOOL)setObject:(id)arg1 forKey:(id)arg2 accessibility:(void*)arg3 ;
-(BOOL)setArray:(id)arg1 forKey:(id)arg2 accessibility:(void*)arg3 ;
-(BOOL)setSet:(id)arg1 forKey:(id)arg2 accessibility:(void*)arg3 ;
-(BOOL)setDate:(id)arg1 forKey:(id)arg2 accessibility:(void*)arg3 ;
-(BOOL)setSet:(id)arg1 forKey:(id)arg2 ;
-(id)init;
-(id)objectForKey:(id)arg1 ;
-(id)stringForKey:(id)arg1 ;
-(id)dictionaryForKey:(id)arg1 ;
-(BOOL)setString:(id)arg1 forKey:(id)arg2 ;
-(NSString *)keyPrefix;
-(id)initWithKeyPrefix:(id)arg1 ;
-(id)_service;
-(id)arrayForKey:(id)arg1 ;
-(id)dateForKey:(id)arg1 ;
-(BOOL)setDate:(id)arg1 forKey:(id)arg2 ;
-(BOOL)setDictionary:(id)arg1 forKey:(id)arg2 ;
-(BOOL)setArray:(id)arg1 forKey:(id)arg2 ;
-(id)setForKey:(id)arg1 ;
@end
