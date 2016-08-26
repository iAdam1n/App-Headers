/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:47:05 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/342EE397-EC3B-4D13-968C-80EF1D13592D/WhatsApp.app/WhatsApp
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSArray;

@interface WAListRepresentation : NSObject {

	NSString* _listJID;
	NSString* _name;
	NSArray* _recipientJIDs;

}

@property (nonatomic,copy) NSString * listJID;                   //@synthesize listJID=_listJID - In the implementation block
@property (nonatomic,copy) NSString * name;                      //@synthesize name=_name - In the implementation block
@property (nonatomic,copy) NSArray * recipientJIDs;              //@synthesize recipientJIDs=_recipientJIDs - In the implementation block
-(NSString *)listJID;
-(NSArray *)recipientJIDs;
-(void)setListJID:(NSString *)arg1 ;
-(void)setRecipientJIDs:(NSArray *)arg1 ;
-(id)description;
-(void)setName:(NSString *)arg1 ;
-(NSString *)name;
@end
