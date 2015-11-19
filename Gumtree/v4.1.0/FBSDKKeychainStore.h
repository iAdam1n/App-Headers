/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 5:05:11 PM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /private/var/mobile/Containers/Bundle/Application/BE5DA1E5-E5C1-4952-A4BE-28BA22319130/Gumtree.app/Gumtree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


@class NSString;

@interface FBSDKKeychainStore : NSObject {

	NSString* _service;
	NSString* _accessGroup;

}

@property (nonatomic,copy,readonly) NSString * service;                  //@synthesize service=_service - In the implementation block
@property (nonatomic,copy,readonly) NSString * accessGroup;              //@synthesize accessGroup=_accessGroup - In the implementation block
-(BOOL)setDictionary:(id)arg1 forKey:(id)arg2 accessibility:(void*)arg3 ;
-(id)initWithService:(id)arg1 accessGroup:(id)arg2 ;
-(BOOL)setData:(id)arg1 forKey:(id)arg2 accessibility:(void*)arg3 ;
-(id)queryForKey:(id)arg1 ;
-(BOOL)setString:(id)arg1 forKey:(id)arg2 accessibility:(void*)arg3 ;
-(NSString *)accessGroup;
-(id)init;
-(id)stringForKey:(id)arg1 ;
-(id)dictionaryForKey:(id)arg1 ;
-(NSString *)service;
-(id)dataForKey:(id)arg1 ;
@end

