/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:04 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSArray, NSDictionary, FBAdInterfacesAudienceDescription, NSSet, NSNumber;

@interface FBAdInterfacesAudienceOptionBuilder : NSObject {

	NSString* _code;
	NSString* _identifier;
	NSString* _title;
	NSArray* _tags;
	NSDictionary* _targetingSpec;
	FBAdInterfacesAudienceDescription* _audienceDescription;
	NSSet* _editableFields;
	BOOL _isDefault;
	BOOL _isEditable;
	NSNumber* _associatedCampaignsCount;
	NSArray* _whitelistedTargetingTypes;

}
+(id)adInterfacesAudienceOptionFromExistingAdInterfacesAudienceOption:(id)arg1 ;
+(id)adInterfacesAudienceOption;
-(id)withIsEditable:(BOOL)arg1 ;
-(id)withTags:(id)arg1 ;
-(id)withCode:(id)arg1 ;
-(id)withIdentifier:(id)arg1 ;
-(id)withTargetingSpec:(id)arg1 ;
-(id)withAudienceDescription:(id)arg1 ;
-(id)withEditableFields:(id)arg1 ;
-(id)withIsDefault:(BOOL)arg1 ;
-(id)withAssociatedCampaignsCount:(id)arg1 ;
-(id)withWhitelistedTargetingTypes:(id)arg1 ;
-(id)withTitle:(id)arg1 ;
-(id)build;
@end
