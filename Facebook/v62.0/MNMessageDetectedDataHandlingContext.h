/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:39:38 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/C3C2BD9F-C9D4-4E48-9EC0-40E7F1350599/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSDecimalNumber, NSArray, FBMGroupThreadKey;

@interface MNMessageDetectedDataHandlingContext : NSObject <NSCopying> {

	unsigned long long _subtype;
	NSString* _currencyAmountWithThreadUsers_currencyCode;
	NSDecimalNumber* _currencyAmountWithThreadUsers_amount;
	NSArray* _currencyAmountWithThreadUsers_threadUsers;
	FBMGroupThreadKey* _currencyAmountWithThreadUsers_groupThreadKey;
	NSString* _triggerTextWithThreadUsers_trigger;
	NSArray* _triggerTextWithThreadUsers_threadUsers;
	FBMGroupThreadKey* _triggerTextWithThreadUsers_groupThreadKey;

}
+(id)currencyAmountWithThreadUsersWithCurrencyCode:(id)arg1 amount:(id)arg2 threadUsers:(id)arg3 groupThreadKey:(id)arg4 ;
+(id)triggerTextWithThreadUsersWithTrigger:(id)arg1 threadUsers:(id)arg2 groupThreadKey:(id)arg3 ;
-(void)matchCurrencyAmountWithThreadUsers:(/*^block*/id)arg1 triggerTextWithThreadUsers:(/*^block*/id)arg2 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

