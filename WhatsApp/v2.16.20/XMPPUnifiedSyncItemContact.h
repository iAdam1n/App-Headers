/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:50:46 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/F01A5503-B253-4A30-B0BC-B7B5406FD725/WhatsApp.app/WhatsApp
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WhatsApp/XMPPUnifiedSyncItemBase.h>

@class NSString;

@interface XMPPUnifiedSyncItemContact : XMPPUnifiedSyncItemBase {

	BOOL _deleted;
	NSString* _phoneNumber;

}

@property (nonatomic,readonly) NSString * phoneNumber;              //@synthesize phoneNumber=_phoneNumber - In the implementation block
@property (nonatomic,readonly) BOOL deleted;                        //@synthesize deleted=_deleted - In the implementation block
-(id)initWithPhoneNumber:(id)arg1 deleted:(BOOL)arg2 ;
-(NSString *)phoneNumber;
-(BOOL)deleted;
-(id)serialize;
@end
