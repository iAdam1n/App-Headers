/*
* This header is generated by classdump-dyld 0.7
* on Monday, November 2, 2015 at 10:04:57 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /private/var/mobile/Containers/Bundle/Application/6EA2C334-4708-4A2A-9290-87A765CA9E42/WhatsApp.app/WhatsApp
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <WhatsApp/XMPPRequest.h>

@class NSString;

@interface XMPPRequestReportSpamMessages : XMPPRequest

@property (nonatomic,copy) NSString * creatorJID; 
@property (nonatomic,copy) NSString * sourceJID; 
+(id)stanzaFromMessage:(id)arg1 ;
-(NSString *)creatorJID;
-(void)setCreatorJID:(NSString *)arg1 ;
-(id)initWithMessages:(id)arg1 completion:(/*^block*/id)arg2 ;
-(NSString *)sourceJID;
-(void)setSourceJID:(NSString *)arg1 ;
@end
