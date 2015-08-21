/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:40:15 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/E282ADAB-AF96-4184-9890-B5E58B4BDDD0/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


@class NSMutableDictionary, NSString;

@interface FBConsistentLookasideRecord : NSObject {

	NSMutableDictionary* _properties;
	BOOL _dirty;
	NSString* _primaryKey;
	NSString* _typeName;

}

@property (nonatomic,copy) NSString * primaryKey;                      //@synthesize primaryKey=_primaryKey - In the implementation block
@property (nonatomic,copy) NSString * typeName;                        //@synthesize typeName=_typeName - In the implementation block
@property (getter=isDirty,nonatomic,readonly) BOOL dirty;              //@synthesize dirty=_dirty - In the implementation block
+(id)recordWithData:(id)arg1 forPrimaryKey:(id)arg2 typeName:(id)arg3 ;
-(id)initWithPrimaryKey:(id)arg1 typeName:(id)arg2 ;
-(id)createPackedData;
-(id)_initWithPrimaryKey:(id)arg1 typeName:(id)arg2 data:(id)arg3 dirty:(BOOL)arg4 ;
-(void)markClean;
-(void)setPrimaryKey:(NSString *)arg1 ;
-(void)setTypeName:(NSString *)arg1 ;
-(NSString *)primaryKey;
-(id)valueForKey:(id)arg1 ;
-(void)setValue:(id)arg1 forKey:(id)arg2 ;
-(id)init;
-(id)description;
-(id)valueForUndefinedKey:(id)arg1 ;
-(NSString *)typeName;
-(BOOL)isDirty;
@end

