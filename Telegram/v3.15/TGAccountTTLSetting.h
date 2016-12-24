/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:46:33 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/D20B482D-7A4B-420E-BEFA-D4B2B5C94752/Telegram.app/Telegram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Telegram/TGAccountSetting.h>

@class NSNumber, NSString;

@interface TGAccountTTLSetting : NSObject <TGAccountSetting> {

	NSNumber* _accountTTL;

}

@property (nonatomic,readonly) NSNumber * accountTTL;               //@synthesize accountTTL=_accountTTL - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSNumber *)accountTTL;
-(id)initWithAccountTTL:(id)arg1 ;
-(id)initWithDefaultValues;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end
