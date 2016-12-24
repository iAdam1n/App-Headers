/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:50:47 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/F01A5503-B253-4A30-B0BC-B7B5406FD725/WhatsApp.app/WhatsApp
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WhatsApp/WATask.h>

@class NSString;

@interface _WAOrderedMessageTask : WATask {

	NSString* _lastStanzaID;
	long long _messagesCount;

}

@property (nonatomic,copy) NSString * lastStanzaID;                //@synthesize lastStanzaID=_lastStanzaID - In the implementation block
@property (assign,nonatomic) long long messagesCount;              //@synthesize messagesCount=_messagesCount - In the implementation block
-(NSString *)lastStanzaID;
-(void)setLastStanzaID:(NSString *)arg1 ;
-(void)setMessagesCount:(long long)arg1 ;
-(long long)messagesCount;
@end
