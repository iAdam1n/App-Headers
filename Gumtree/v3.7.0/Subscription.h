/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 1:28:04 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/21F2B006-1C28-48A8-85CE-538D78391B66/Gumtree.app/Gumtree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


@class MessageAddress, NSString, SecondarySubscriber, EventGroup;

@interface Subscription : NSObject {

	BOOL m_State;
	MessageAddress* m_MessageAddress;
	NSString* m_SubscriberApp;
	SecondarySubscriber* m_SecondarySubscriber;
	NSString* m_Description;
	NSString* m_Language;
	EventGroup* m_EventGroup;
	NSString* m_LastModifiedBy;
	NSString* m_CreationDate;
	NSString* m_LastModifiedDate;

}

@property (nonatomic,retain) MessageAddress * m_MessageAddress; 
@property (nonatomic,retain) NSString * m_SubscriberApp; 
@property (assign) BOOL m_State; 
@property (nonatomic,retain) SecondarySubscriber * m_SecondarySubscriber; 
@property (nonatomic,retain) NSString * m_Description; 
@property (nonatomic,retain) NSString * m_Language; 
@property (nonatomic,retain) EventGroup * m_EventGroup; 
@property (nonatomic,retain) NSString * m_LastModifiedBy; 
@property (nonatomic,retain) NSString * m_CreationDate; 
@property (nonatomic,retain) NSString * m_LastModifiedDate; 
-(void)setM_State:(BOOL)arg1 ;
-(BOOL)m_State;
-(MessageAddress *)m_MessageAddress;
-(void)setM_MessageAddress:(MessageAddress *)arg1 ;
-(NSString *)m_SubscriberApp;
-(void)setM_SubscriberApp:(NSString *)arg1 ;
-(SecondarySubscriber *)m_SecondarySubscriber;
-(void)setM_SecondarySubscriber:(SecondarySubscriber *)arg1 ;
-(NSString *)m_Description;
-(void)setM_Description:(NSString *)arg1 ;
-(NSString *)m_Language;
-(void)setM_Language:(NSString *)arg1 ;
-(EventGroup *)m_EventGroup;
-(void)setM_EventGroup:(EventGroup *)arg1 ;
-(NSString *)m_LastModifiedBy;
-(void)setM_LastModifiedBy:(NSString *)arg1 ;
-(NSString *)m_CreationDate;
-(void)setM_CreationDate:(NSString *)arg1 ;
-(NSString *)m_LastModifiedDate;
-(void)setM_LastModifiedDate:(NSString *)arg1 ;
@end

