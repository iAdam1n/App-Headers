/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:18 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, FBTypedNSArrayOfNSString, NSNumber;

@interface FBPrivacyEntityBuilder : NSObject {

	NSString* _value;
	FBTypedNSArrayOfNSString* _allowedIDs;
	FBTypedNSArrayOfNSString* _deniedIDs;
	FBTypedNSArrayOfNSString* _objectIDs;
	NSString* _primaryAllowToken;
	unsigned long long _kind;
	NSString* _listType;
	NSString* _listGraphQLID;
	NSNumber* _noTagExpansion;
	BOOL _isMostRecent;
	long long _intrinsicTagExpansionStyle;
	NSString* _optionType;

}
+(id)privacyEntity;
+(id)privacyEntityFromExistingPrivacyEntity:(id)arg1 ;
-(id)withAllowedIDs:(id)arg1 ;
-(id)withDeniedIDs:(id)arg1 ;
-(id)withObjectIDs:(id)arg1 ;
-(id)withPrimaryAllowToken:(id)arg1 ;
-(id)withKind:(unsigned long long)arg1 ;
-(id)withListType:(id)arg1 ;
-(id)withListGraphQLID:(id)arg1 ;
-(id)withNoTagExpansion:(id)arg1 ;
-(id)withIsMostRecent:(BOOL)arg1 ;
-(id)withIntrinsicTagExpansionStyle:(long long)arg1 ;
-(id)withOptionType:(id)arg1 ;
-(id)withValue:(id)arg1 ;
-(id)build;
@end
