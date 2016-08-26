/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:18:31 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/6F5201FD-3D2F-4BE1-80E5-E1251C7564E3/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface FBDBLStoredUser : FBValueObject <NSCopying> {

	NSString* _accountID;
	NSString* _shortName;
	unsigned long long _accountType;

}

@property (nonatomic,copy,readonly) NSString * accountID;                   //@synthesize accountID=_accountID - In the implementation block
@property (nonatomic,copy,readonly) NSString * shortName;                   //@synthesize shortName=_shortName - In the implementation block
@property (nonatomic,readonly) unsigned long long accountType;              //@synthesize accountType=_accountType - In the implementation block
-(id)initWithAccountID:(id)arg1 shortName:(id)arg2 accountType:(unsigned long long)arg3 ;
-(unsigned long long)accountType;
-(NSString *)shortName;
-(NSString *)accountID;
@end
