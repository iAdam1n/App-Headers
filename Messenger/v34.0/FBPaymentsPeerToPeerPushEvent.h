/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:40:48 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/E282ADAB-AF96-4184-9890-B5E58B4BDDD0/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Messenger/FBValueObject.h>
#import <Messenger/NSCopying.h>

@class NSString;

@interface FBPaymentsPeerToPeerPushEvent : FBValueObject <NSCopying> {

	long long _type;
	NSString* _objectID;

}

@property (nonatomic,readonly) long long type;                        //@synthesize type=_type - In the implementation block
@property (nonatomic,copy,readonly) NSString * objectID;              //@synthesize objectID=_objectID - In the implementation block
-(id)initWithType:(long long)arg1 objectID:(id)arg2 ;
-(long long)type;
-(NSString *)objectID;
@end

