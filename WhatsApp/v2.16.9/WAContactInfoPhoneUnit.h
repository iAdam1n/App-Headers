/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:47:05 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/342EE397-EC3B-4D13-968C-80EF1D13592D/WhatsApp.app/WhatsApp
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

