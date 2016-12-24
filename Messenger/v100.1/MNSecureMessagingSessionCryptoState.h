/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:29:22 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/85513C16-EFBE-4673-84DA-B31CD22289F8/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBValueObject.h>
#import <libobjc.A.dylib/NSCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class FBDataWithRedactedDescription, NSString;

@interface MNSecureMessagingSessionCryptoState : FBValueObject <NSCoding, NSCopying> {

	FBDataWithRedactedDescription* _libSignalSessionRecord;
	NSString* _otherUserFbId;
	NSString* _deviceId;

}

@property (nonatomic,copy,readonly) FBDataWithRedactedDescription * libSignalSessionRecord;              //@synthesize libSignalSessionRecord=_libSignalSessionRecord - In the implementation block
@property (nonatomic,copy,readonly) NSString * otherUserFbId;                                            //@synthesize otherUserFbId=_otherUserFbId - In the implementation block
@property (nonatomic,copy,readonly) NSString * deviceId;                                                 //@synthesize deviceId=_deviceId - In the implementation block
-(NSString *)otherUserFbId;
-(FBDataWithRedactedDescription *)libSignalSessionRecord;
-(id)initWithLibSignalSessionRecord:(id)arg1 otherUserFbId:(id)arg2 deviceId:(id)arg3 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)deviceId;
@end
