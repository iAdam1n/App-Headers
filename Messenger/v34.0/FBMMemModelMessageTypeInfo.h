/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:40:46 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/E282ADAB-AF96-4184-9890-B5E58B4BDDD0/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Messenger/FBValueObject.h>
#import <Messenger/NSCopying.h>

@class FBMStringWithRedactedDescription, NSDictionary;

@interface FBMMemModelMessageTypeInfo : FBValueObject <NSCopying> {

	FBMStringWithRedactedDescription* _text;
	unsigned long long _type;
	NSDictionary* _logMessage;

}

@property (nonatomic,copy,readonly) FBMStringWithRedactedDescription * text;              //@synthesize text=_text - In the implementation block
@property (nonatomic,readonly) unsigned long long type;                                   //@synthesize type=_type - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * logMessage;                            //@synthesize logMessage=_logMessage - In the implementation block
-(NSDictionary *)logMessage;
-(id)initWithText:(id)arg1 type:(unsigned long long)arg2 logMessage:(id)arg3 ;
-(unsigned long long)type;
-(FBMStringWithRedactedDescription *)text;
@end

