/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:50:46 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/F01A5503-B253-4A30-B0BC-B7B5406FD725/WhatsApp.app/WhatsApp
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WhatsApp/WAFieldStatsEvent.h>

@interface WAFieldStatsEventMessageReceive : WAFieldStatsEvent {

	double _message_type;
	double _message_media_type;
	double _num_of_web_urls_in_text_message;
	double _message_is_international;
	double _message_is_offline;
	double _message_receive_t0;
	double _message_receive_t1;

}

@property (assign,nonatomic) double message_type;                                 //@synthesize message_type=_message_type - In the implementation block
@property (assign,nonatomic) double message_media_type;                           //@synthesize message_media_type=_message_media_type - In the implementation block
@property (assign,nonatomic) double num_of_web_urls_in_text_message;              //@synthesize num_of_web_urls_in_text_message=_num_of_web_urls_in_text_message - In the implementation block
@property (assign,nonatomic) double message_is_international;                     //@synthesize message_is_international=_message_is_international - In the implementation block
@property (assign,nonatomic) double message_is_offline;                           //@synthesize message_is_offline=_message_is_offline - In the implementation block
@property (assign,nonatomic) double message_receive_t0;                           //@synthesize message_receive_t0=_message_receive_t0 - In the implementation block
@property (assign,nonatomic) double message_receive_t1;                           //@synthesize message_receive_t1=_message_receive_t1 - In the implementation block
-(void)setMessage_media_type:(double)arg1 ;
-(void)setMessage_type:(double)arg1 ;
-(double)message_media_type;
-(double)message_type;
-(double)num_of_web_urls_in_text_message;
-(void)setNum_of_web_urls_in_text_message:(double)arg1 ;
-(double)message_is_international;
-(void)setMessage_is_international:(double)arg1 ;
-(double)message_is_offline;
-(void)setMessage_is_offline:(double)arg1 ;
-(double)message_receive_t0;
-(void)setMessage_receive_t0:(double)arg1 ;
-(double)message_receive_t1;
-(void)setMessage_receive_t1:(double)arg1 ;
-(void)submit;
-(id)init;
@end
