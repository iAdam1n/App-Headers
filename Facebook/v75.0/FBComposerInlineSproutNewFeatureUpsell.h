/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:05 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface FBComposerInlineSproutNewFeatureUpsell : FBValueObject <NSCopying> {

	BOOL _isEligible;
	NSString* _identifier;
	unsigned long long _maxUpsells;
	NSString* _subtitle;

}

@property (nonatomic,copy,readonly) NSString * identifier;                 //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,readonly) BOOL isEligible;                            //@synthesize isEligible=_isEligible - In the implementation block
@property (nonatomic,readonly) unsigned long long maxUpsells;              //@synthesize maxUpsells=_maxUpsells - In the implementation block
@property (nonatomic,copy,readonly) NSString * subtitle;                   //@synthesize subtitle=_subtitle - In the implementation block
-(id)initWithIdentifier:(id)arg1 isEligible:(BOOL)arg2 maxUpsells:(unsigned long long)arg3 subtitle:(id)arg4 ;
-(BOOL)isEligible;
-(unsigned long long)maxUpsells;
-(NSString *)identifier;
-(NSString *)subtitle;
@end
