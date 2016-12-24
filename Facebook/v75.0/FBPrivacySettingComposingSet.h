/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:12 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSCoding.h>

@class FBComposerPrivacySetting, NSArray;

@interface FBPrivacySettingComposingSet : FBValueObject <NSCopying, NSCoding> {

	FBComposerPrivacySetting* _selectedPrivacySetting;
	NSArray* _availablePrivacySettings;

}

@property (nonatomic,copy,readonly) FBComposerPrivacySetting * selectedPrivacySetting;              //@synthesize selectedPrivacySetting=_selectedPrivacySetting - In the implementation block
@property (nonatomic,copy,readonly) NSArray * availablePrivacySettings;                             //@synthesize availablePrivacySettings=_availablePrivacySettings - In the implementation block
-(NSArray *)availablePrivacySettings;
-(FBComposerPrivacySetting *)selectedPrivacySetting;
-(id)initWithSelectedPrivacySetting:(id)arg1 availablePrivacySettings:(id)arg2 ;
@end
