/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:50:47 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/F01A5503-B253-4A30-B0BC-B7B5406FD725/WhatsApp.app/WhatsApp
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WhatsApp/XMPPStanza.h>

@class NSString;

@interface XMPPAckStanza : XMPPStanza

@property (assign,nonatomic) unsigned long long ackClass; 
@property (assign,nonatomic) unsigned long long receiptType; 
@property (assign,nonatomic) unsigned long long messageType; 
@property (assign,nonatomic) unsigned long long notificationType; 
@property (assign,nonatomic) unsigned long long callType; 
@property (nonatomic,readonly) BOOL negative; 
@property (nonatomic,readonly) long long count; 
@property (nonatomic,copy,readonly) NSString * phash; 
+(id)stringsForTypes;
+(id)stringForType:(unsigned long long)arg1 ;
+(unsigned long long)typeForString:(id)arg1 ;
-(NSString *)phash;
-(void)setReceiptType:(unsigned long long)arg1 ;
-(unsigned long long)ackClass;
-(unsigned long long)receiptType;
-(void)setAckClass:(unsigned long long)arg1 ;
-(long long)count;
-(id)log;
-(BOOL)negative;
-(id)initWithClass:(unsigned long long)arg1 ;
-(void)setCallType:(unsigned long long)arg1 ;
-(unsigned long long)callType;
-(unsigned long long)messageType;
-(void)setMessageType:(unsigned long long)arg1 ;
-(unsigned long long)notificationType;
-(void)setNotificationType:(unsigned long long)arg1 ;
@end
