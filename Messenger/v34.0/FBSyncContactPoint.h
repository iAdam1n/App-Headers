/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:40:37 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/E282ADAB-AF96-4184-9890-B5E58B4BDDD0/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Messenger/FBValueObject.h>
#import <Messenger/NSCopying.h>

@class NSString;

@interface FBSyncContactPoint : FBValueObject <NSCopying> {

	BOOL _isVerified;
	int _type;
	NSString* _contactPointID;
	NSString* _label;
	NSString* _localizedLabel;
	NSString* _value;
	NSString* _countryCode;
	NSString* _nationalNumber;
	NSString* _normalizedValue;

}

@property (nonatomic,copy,readonly) NSString * contactPointID;               //@synthesize contactPointID=_contactPointID - In the implementation block
@property (nonatomic,copy,readonly) NSString * label;                        //@synthesize label=_label - In the implementation block
@property (nonatomic,copy,readonly) NSString * localizedLabel;               //@synthesize localizedLabel=_localizedLabel - In the implementation block
@property (nonatomic,copy,readonly) NSString * value;                        //@synthesize value=_value - In the implementation block
@property (nonatomic,copy,readonly) NSString * countryCode;                  //@synthesize countryCode=_countryCode - In the implementation block
@property (nonatomic,copy,readonly) NSString * nationalNumber;               //@synthesize nationalNumber=_nationalNumber - In the implementation block
@property (nonatomic,copy,readonly) NSString * normalizedValue;              //@synthesize normalizedValue=_normalizedValue - In the implementation block
@property (nonatomic,readonly) BOOL isVerified;                              //@synthesize isVerified=_isVerified - In the implementation block
@property (nonatomic,readonly) int type;                                     //@synthesize type=_type - In the implementation block
-(BOOL)isVerified;
-(NSString *)nationalNumber;
-(NSString *)contactPointID;
-(id)initWithContactPointID:(id)arg1 label:(id)arg2 localizedLabel:(id)arg3 value:(id)arg4 countryCode:(id)arg5 nationalNumber:(id)arg6 normalizedValue:(id)arg7 isVerified:(BOOL)arg8 type:(int)arg9 ;
-(NSString *)normalizedValue;
-(NSString *)localizedLabel;
-(int)type;
-(NSString *)value;
-(NSString *)label;
-(NSString *)countryCode;
@end

