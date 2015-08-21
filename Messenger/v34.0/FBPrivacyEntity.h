/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:40:43 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/E282ADAB-AF96-4184-9890-B5E58B4BDDD0/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Messenger/FBValueObject.h>
#import <Messenger/NSCopying.h>
#import <Messenger/NSCoding.h>

@class NSString, FBTypedNSArrayOfNSString, NSNumber;

@interface FBPrivacyEntity : FBValueObject <NSCopying, NSCoding> {

	BOOL _isMostRecent;
	NSString* _value;
	FBTypedNSArrayOfNSString* _allowedIDs;
	FBTypedNSArrayOfNSString* _deniedIDs;
	FBTypedNSArrayOfNSString* _objectIDs;
	NSString* _primaryAllowToken;
	unsigned long long _kind;
	NSString* _listType;
	NSString* _listGraphQLID;
	NSNumber* _noTagExpansion;
	long long _intrinsicTagExpansionStyle;
	NSString* _optionType;

}

@property (nonatomic,copy,readonly) NSString * value;                                   //@synthesize value=_value - In the implementation block
@property (nonatomic,copy,readonly) FBTypedNSArrayOfNSString * allowedIDs;              //@synthesize allowedIDs=_allowedIDs - In the implementation block
@property (nonatomic,copy,readonly) FBTypedNSArrayOfNSString * deniedIDs;               //@synthesize deniedIDs=_deniedIDs - In the implementation block
@property (nonatomic,copy,readonly) FBTypedNSArrayOfNSString * objectIDs;               //@synthesize objectIDs=_objectIDs - In the implementation block
@property (nonatomic,copy,readonly) NSString * primaryAllowToken;                       //@synthesize primaryAllowToken=_primaryAllowToken - In the implementation block
@property (nonatomic,readonly) unsigned long long kind;                                 //@synthesize kind=_kind - In the implementation block
@property (nonatomic,copy,readonly) NSString * listType;                                //@synthesize listType=_listType - In the implementation block
@property (nonatomic,copy,readonly) NSString * listGraphQLID;                           //@synthesize listGraphQLID=_listGraphQLID - In the implementation block
@property (nonatomic,copy,readonly) NSNumber * noTagExpansion;                          //@synthesize noTagExpansion=_noTagExpansion - In the implementation block
@property (nonatomic,readonly) BOOL isMostRecent;                                       //@synthesize isMostRecent=_isMostRecent - In the implementation block
@property (nonatomic,readonly) long long intrinsicTagExpansionStyle;                    //@synthesize intrinsicTagExpansionStyle=_intrinsicTagExpansionStyle - In the implementation block
@property (nonatomic,copy,readonly) NSString * optionType;                              //@synthesize optionType=_optionType - In the implementation block
-(NSNumber *)noTagExpansion;
-(NSString *)optionType;
-(NSString *)primaryAllowToken;
-(NSString *)listGraphQLID;
-(FBTypedNSArrayOfNSString *)allowedIDs;
-(FBTypedNSArrayOfNSString *)deniedIDs;
-(BOOL)isMostRecent;
-(long long)intrinsicTagExpansionStyle;
-(id)initWithValue:(id)arg1 allowedIDs:(id)arg2 deniedIDs:(id)arg3 objectIDs:(id)arg4 primaryAllowToken:(id)arg5 kind:(unsigned long long)arg6 listType:(id)arg7 listGraphQLID:(id)arg8 noTagExpansion:(id)arg9 isMostRecent:(BOOL)arg10 intrinsicTagExpansionStyle:(long long)arg11 optionType:(id)arg12 ;
-(NSString *)value;
-(unsigned long long)kind;
-(NSString *)listType;
-(FBTypedNSArrayOfNSString *)objectIDs;
@end

