/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:47:04 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/342EE397-EC3B-4D13-968C-80EF1D13592D/WhatsApp.app/WhatsApp
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSManagedObjectID, NSArray;

@interface WAContactsSectionInfo : NSObject {

	NSString* _title;
	NSManagedObjectID* _waSectionObjectID;
	long long _contactsCount;
	NSArray* _contacts;

}

@property (nonatomic,copy) NSString * title;                                     //@synthesize title=_title - In the implementation block
@property (nonatomic,retain) NSManagedObjectID * waSectionObjectID;              //@synthesize waSectionObjectID=_waSectionObjectID - In the implementation block
@property (assign,nonatomic) long long contactsCount;                            //@synthesize contactsCount=_contactsCount - In the implementation block
@property (nonatomic,copy) NSArray * contacts;                                   //@synthesize contacts=_contacts - In the implementation block
-(long long)contactsCount;
-(NSManagedObjectID *)waSectionObjectID;
-(void)setWaSectionObjectID:(NSManagedObjectID *)arg1 ;
-(void)setContactsCount:(long long)arg1 ;
-(void)setTitle:(NSString *)arg1 ;
-(NSString *)title;
-(id)initWithTitle:(id)arg1 ;
-(NSArray *)contacts;
-(void)setContacts:(NSArray *)arg1 ;
@end
