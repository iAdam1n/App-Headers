/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 1:06:47 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/ECBB6493-3CD3-4031-8AE5-B625F29152BF/Tweetbot.app/Tweetbot
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


@class NSDictionary;

@interface PTHConfiguration : NSObject {

	NSDictionary* _dictionary;

}

@property (retain) NSDictionary * dictionary;              //@synthesize dictionary=_dictionary - In the implementation block
+(id)sharedConfiguration;
-(void)updateConfigurationIfNeeded;
-(id)URLForKey:(id)arg1 ;
-(BOOL)boolForKey:(id)arg1 ;
-(id)init;
-(id)objectForKeyedSubscript:(id)arg1 ;
-(NSDictionary *)dictionary;
-(float)floatForKey:(id)arg1 ;
-(id)stringForKey:(id)arg1 ;
-(double)doubleForKey:(id)arg1 ;
-(long long)integerForKey:(id)arg1 ;
-(id)dictionaryForKey:(id)arg1 ;
-(id)numberForKey:(id)arg1 ;
-(void)resetConfiguration;
-(id)dataForKey:(id)arg1 ;
-(void)setDictionary:(NSDictionary *)arg1 ;
-(id)objectForKey:(id)arg1 ;
-(id)arrayForKey:(id)arg1 ;
@end

