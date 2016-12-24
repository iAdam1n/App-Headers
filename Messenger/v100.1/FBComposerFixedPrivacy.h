/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:29:20 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/85513C16-EFBE-4673-84DA-B31CD22289F8/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <libobjc.A.dylib/NSCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSArray, FBComposerFixedPrivacyTokenizedExplanation, FBComposerFixedPrivacyExplanation, FBComposerPrivacySetting;

@interface FBComposerFixedPrivacy : NSObject <NSCoding, NSCopying> {

	unsigned long long _subtype;
	BOOL _fixedExplanations_isExplanationOverridden;
	NSArray* _fixedExplanations_explanations;
	FBComposerFixedPrivacyTokenizedExplanation* _tokenizedExplanation_tokenizedExplanation;
	FBComposerFixedPrivacyExplanation* _privacySetting_explanation;
	FBComposerPrivacySetting* _privacySetting_privacySetting;

}
+(id)fixedExplanationsWithIsExplanationOverridden:(BOOL)arg1 explanations:(id)arg2 ;
+(id)privacySettingWithExplanation:(id)arg1 privacySetting:(id)arg2 ;
+(id)tokenizedExplanationWithTokenizedExplanation:(id)arg1 ;
-(void)matchFixedExplanations:(/*^block*/id)arg1 tokenizedExplanation:(/*^block*/id)arg2 privacySetting:(/*^block*/id)arg3 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
@end
