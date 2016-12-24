/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:46:32 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/D20B482D-7A4B-420E-BEFA-D4B2B5C94752/Telegram.app/Telegram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSCoding.h>

@class NSDictionary;

@interface TGBridgeUserChange : NSObject <NSCoding> {

	int _userIdentifier;
	NSDictionary* _fields;

}

@property (nonatomic,readonly) int userIdentifier;                 //@synthesize userIdentifier=_userIdentifier - In the implementation block
@property (nonatomic,readonly) NSDictionary * fields;              //@synthesize fields=_fields - In the implementation block
-(id)initWithUserIdentifier:(int)arg1 fields:(id)arg2 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(int)userIdentifier;
-(NSDictionary *)fields;
@end
