/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:50:47 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/F01A5503-B253-4A30-B0BC-B7B5406FD725/WhatsApp.app/WhatsApp
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WhatsApp/WAContactInfoUnit.h>

@class NSString, NSManagedObjectID;

@interface WAContactInfoPhoneUnit : WAContactInfoUnit {

	NSString* _jid;
	NSManagedObjectID* _waStatusID;

}

@property (nonatomic,retain) NSManagedObjectID * waStatusID;              //@synthesize waStatusID=_waStatusID - In the implementation block
@property (nonatomic,copy) NSString * jid;                                //@synthesize jid=_jid - In the implementation block
+(id)contactInfoPhoneUnitForWAPhone:(id)arg1 ;
-(NSString *)jid;
-(void)setJid:(NSString *)arg1 ;
-(id)initWithWAPhone:(id)arg1 ;
-(NSManagedObjectID *)waStatusID;
-(id)waStatus;
-(void)setWaStatusID:(NSManagedObjectID *)arg1 ;
-(id)initWithContactProperty:(id)arg1 ;
-(id)valueText;
@end
