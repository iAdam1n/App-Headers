/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:34:06 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/3DFA7E95-0979-4D86-B373-C986386EF259/Reddit.app/Reddit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSData, NSDate;

@interface TWTRGenericKeychainItem : NSObject {

	NSString* _service;
	NSString* _account;
	NSData* _secret;
	NSString* _genericValue;
	NSDate* _lastSavedDate;
	NSString* _accessGroup;

}

@property (nonatomic,copy,readonly) NSString * service;                   //@synthesize service=_service - In the implementation block
@property (nonatomic,copy,readonly) NSString * account;                   //@synthesize account=_account - In the implementation block
@property (nonatomic,copy,readonly) NSData * secret;                      //@synthesize secret=_secret - In the implementation block
@property (nonatomic,copy,readonly) NSString * genericValue;              //@synthesize genericValue=_genericValue - In the implementation block
@property (nonatomic,copy,readonly) NSDate * lastSavedDate;               //@synthesize lastSavedDate=_lastSavedDate - In the implementation block
@property (nonatomic,copy,readonly) NSString * accessGroup;               //@synthesize accessGroup=_accessGroup - In the implementation block
+(id)errorWithStatus:(int)arg1 ;
+(void)synchronouslyAccessKeychain:(/*^block*/id)arg1 ;
+(id)unsynchronizedStoredItemsMatchingQuery:(id)arg1 error:(id*)arg2 ;
+(id)storedItemsMatchingQueryDictionary:(id)arg1 error:(id*)arg2 ;
+(id)keychainItemFromRawObject:(id)arg1 ;
+(id)errorDescriptionForKeychainOsCode:(int)arg1 ;
+(BOOL)removeAllItemsForQuery:(id)arg1 error:(id*)arg2 ;
+(id)storedItemsMatchingQuery:(id)arg1 error:(id*)arg2 ;
-(NSString *)genericValue;
-(id)initWithService:(id)arg1 account:(id)arg2 secret:(id)arg3 genericValue:(id)arg4 ;
-(id)initWithService:(id)arg1 account:(id)arg2 secret:(id)arg3 genericValue:(id)arg4 accessGroup:(id)arg5 ;
-(BOOL)isEqualToKeychainItem:(id)arg1 ;
-(BOOL)storeInKeychainReplacingExisting:(BOOL)arg1 error:(id*)arg2 ;
-(BOOL)unsynchronizedRemoveFromKeychain:(id*)arg1 ;
-(id)fullRawRepresentation;
-(id)existingKeychainItem;
-(NSDate *)lastSavedDate;
-(id)simpleRawRepresentation;
-(id)initWithService:(id)arg1 account:(id)arg2 secret:(id)arg3 ;
-(BOOL)storeInKeychain:(id*)arg1 ;
-(BOOL)removeFromKeychain:(id*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)account;
-(NSString *)accessGroup;
-(NSData *)secret;
-(NSString *)service;
@end
