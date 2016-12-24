/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:42:14 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/2E0DF6B4-8C57-4F66-9862-2B2C129D4027/SolitaireFree.app/SolitaireFree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol LPVarDelegate;
@class NSString, NSArray, NSNumber, NSMutableArray;

@interface LPVar : NSObject {

	BOOL _isInternal;
	BOOL _hadStarted;
	BOOL _fileIsPending;
	BOOL _hasChanged;
	NSString* _name;
	NSArray* _nameComponents;
	NSString* _stringValue;
	NSNumber* _numberValue;
	id _value;
	id _defaultValue;
	NSString* _kind;
	NSMutableArray* _fileReadyBlocks;
	NSMutableArray* _valueChangedBlocks;
	id<LPVarDelegate> _delegate;

}

@property (readonly) BOOL private_IsInternal;                                  //@synthesize isInternal=_isInternal - In the implementation block
@property (readonly) NSString * private_Name;                                  //@synthesize name=_name - In the implementation block
@property (readonly) NSArray * private_NameComponents;                         //@synthesize nameComponents=_nameComponents - In the implementation block
@property (readonly) NSString * private_StringValue;                           //@synthesize stringValue=_stringValue - In the implementation block
@property (readonly) NSNumber * private_NumberValue;                           //@synthesize numberValue=_numberValue - In the implementation block
@property (readonly) BOOL private_HadStarted;                                  //@synthesize hadStarted=_hadStarted - In the implementation block
@property (readonly) id private_Value;                                         //@synthesize value=_value - In the implementation block
@property (readonly) id private_DefaultValue;                                  //@synthesize defaultValue=_defaultValue - In the implementation block
@property (readonly) NSString * private_Kind;                                  //@synthesize kind=_kind - In the implementation block
@property (readonly) NSMutableArray * private_FileReadyBlocks;                 //@synthesize fileReadyBlocks=_fileReadyBlocks - In the implementation block
@property (readonly) NSMutableArray * private_valueChangedBlocks;              //@synthesize valueChangedBlocks=_valueChangedBlocks - In the implementation block
@property (readonly) BOOL private_FileIsPending;                               //@synthesize fileIsPending=_fileIsPending - In the implementation block
@property (assign,nonatomic) id<LPVarDelegate> private_Delegate;               //@synthesize delegate=_delegate - In the implementation block
@property (readonly) BOOL private_HasChanged;                                  //@synthesize hasChanged=_hasChanged - In the implementation block
+(id)define:(id)arg1 withDictionary:(id)arg2 ;
+(id)define:(id)arg1 withArray:(id)arg2 ;
+(id)define:(id)arg1 withFile:(id)arg2 ;
+(id)define:(id)arg1 withString:(id)arg2 ;
+(id)define:(id)arg1 withBool:(BOOL)arg2 ;
+(id)define:(id)arg1 withNumber:(id)arg2 ;
+(id)define:(id)arg1 ;
+(id)define:(id)arg1 withInt:(int)arg2 ;
+(id)define:(id)arg1 withFloat:(float)arg2 ;
+(id)define:(id)arg1 withDouble:(double)arg2 ;
+(id)define:(id)arg1 withCGFloat:(double)arg2 ;
+(id)define:(id)arg1 withShort:(short)arg2 ;
+(id)define:(id)arg1 withChar:(char)arg2 ;
+(id)define:(id)arg1 withInteger:(long long)arg2 ;
+(id)define:(id)arg1 withLong:(long long)arg2 ;
+(id)define:(id)arg1 withLongLong:(long long)arg2 ;
+(id)define:(id)arg1 withUnsignedChar:(unsigned char)arg2 ;
+(id)define:(id)arg1 withUnsignedInt:(unsigned)arg2 ;
+(id)define:(id)arg1 withUnsignedInteger:(unsigned long long)arg2 ;
+(id)define:(id)arg1 withUnsignedLong:(unsigned long long)arg2 ;
+(id)define:(id)arg1 withUnsignedLongLong:(unsigned long long)arg2 ;
+(id)define:(id)arg1 withUnsignedShort:(unsigned short)arg2 ;
+(id)define:(id)arg1 withColor:(id)arg2 ;
-(id)fileValue;
-(id)objectForKeyPath:(id)arg1 ;
-(id)objectForKeyPathComponents:(id)arg1 ;
-(void)cacheComputedValues;
-(void)triggerFileIsReady;
-(void)triggerValueChanged;
-(id<LPVarDelegate>)private_Delegate;
-(void)setPrivate_Delegate:(id<LPVarDelegate>)arg1 ;
-(void)warnIfNotStarted;
-(id)initWithName:(id)arg1 withComponents:(id)arg2 withDefaultValue:(id)arg3 withKind:(id)arg4 ;
-(void)onValueChanged:(/*^block*/id)arg1 ;
-(void)onFileReady:(/*^block*/id)arg1 ;
-(BOOL)hasChanged;
-(BOOL)private_IsInternal;
-(NSString *)private_Name;
-(NSArray *)private_NameComponents;
-(NSString *)private_StringValue;
-(NSNumber *)private_NumberValue;
-(BOOL)private_HadStarted;
-(id)private_Value;
-(id)private_DefaultValue;
-(NSString *)private_Kind;
-(NSMutableArray *)private_FileReadyBlocks;
-(NSMutableArray *)private_valueChangedBlocks;
-(BOOL)private_FileIsPending;
-(BOOL)private_HasChanged;
-(void)setDelegate:(id)arg1 ;
-(unsigned long long)count;
-(id)objectAtIndex:(unsigned long long)arg1 ;
-(long long)integerValue;
-(double)doubleValue;
-(id)objectForKey:(id)arg1 ;
-(id)name;
-(BOOL)boolValue;
-(int)intValue;
-(float)floatValue;
-(unsigned long long)unsignedIntegerValue;
-(unsigned)unsignedIntValue;
-(id)stringValue;
-(long long)longLongValue;
-(void)update;
-(unsigned long long)unsignedLongLongValue;
-(id)defaultValue;
-(id)kind;
-(unsigned long long)unsignedLongValue;
-(id)imageValue;
-(double)cgFloatValue;
-(long long)longValue;
-(id)numberValue;
-(short)shortValue;
-(id)nameComponents;
-(id)colorValue;
-(char)charValue;
-(unsigned char)unsignedCharValue;
-(unsigned short)unsignedShortValue;
@end
