/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:53:38 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D5AA3D7F-F68B-43D8-8CC1-85DAFE886350/Telegram.app/Telegram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface TGUpdateMessage : NSObject {

	int _messageDate;
	id _message;

}

@property (nonatomic,retain) id message;                   //@synthesize message=_message - In the implementation block
@property (assign,nonatomic) int messageDate;              //@synthesize messageDate=_messageDate - In the implementation block
-(id)initWithMessage:(id)arg1 messageDate:(int)arg2 ;
-(id)message;
-(void)setMessage:(id)arg1 ;
-(int)messageDate;
-(void)setMessageDate:(int)arg1 ;
@end
