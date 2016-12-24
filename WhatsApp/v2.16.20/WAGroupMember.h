/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:50:46 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/F01A5503-B253-4A30-B0BC-B7B5406FD725/WhatsApp.app/WhatsApp
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreData/NSManagedObject.h>

@class NSString, WAChatSession, NSNumber;

@interface WAGroupMember : NSManagedObject {

	BOOL _blocked;
	NSString* _statusMessage;

}

@property (nonatomic,copy) NSString * memberJID; 
@property (assign,nonatomic) int contactABID; 
@property (nonatomic,copy) NSString * contactIdentifier; 
@property (nonatomic,copy) NSString * contactName; 
@property (nonatomic,copy) NSString * firstName; 
@property (assign,nonatomic) BOOL isActive; 
@property (nonatomic,retain) WAChatSession * chatSession; 
@property (assign,nonatomic) BOOL isAdmin; 
@property (nonatomic,retain) NSNumber * senderKeySent; 
@property (nonatomic,copy) NSString * statusMessage;                                     //@synthesize statusMessage=_statusMessage - In the implementation block
@property (assign,nonatomic) BOOL blocked;                                               //@synthesize blocked=_blocked - In the implementation block
@property (getter=isUnknownContact,nonatomic,readonly) BOOL unknownContact; 
-(BOOL)isUnknownContact;
-(void)setBlocked:(BOOL)arg1 ;
-(BOOL)blocked;
-(void)setStatusMessage:(NSString *)arg1 ;
-(NSString *)statusMessage;
@end
