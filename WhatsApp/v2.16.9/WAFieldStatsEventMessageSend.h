/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:47:04 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/342EE397-EC3B-4D13-968C-80EF1D13592D/WhatsApp.app/WhatsApp
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WhatsApp/WAFieldStatsEvent.h>

@interface WAFieldStatsEventMessageSend : WAFieldStatsEvent {

	double _message_send_result;
	double _message_type;
	double _message_media_type;
	double _message_is_forward;
	double _message_is_fanout;
	double _retry_count;
	double _message_is_international;
	double _media_caption_present;
	double _e2e_ciphertext_version;
	double _e2e_ciphertext_type;
	double _message_send_t;

}

@property (assign,nonatomic) double message_send_result;                   //@synthesize message_send_result=_message_send_result - In the implementation block
@property (assign,nonatomic) double message_type;                          //@synthesize message_type=_message_type - In the implementation block
@property (assign,nonatomic) double message_media_type;                    //@synthesize message_media_type=_message_media_type - In the implementation block
@property (assign,nonatomic) double message_is_forward;                    //@synthesize message_is_forward=_message_is_forward - In the implementation block
@property (assign,nonatomic) double message_is_fanout;                     //@synthesize message_is_fanout=_message_is_fanout - In the implementation block
@property (assign,nonatomic) double retry_count;                           //@synthesize retry_count=_retry_count - In the implementation block
@property (assign,nonatomic) double message_is_international;              //@synthesize message_is_international=_message_is_international - In the implementation block
@property (assign,nonatomic) double media_caption_present;                 //@synthesize media_caption_present=_media_caption_present - In the implementation block
@property (assign,nonatomic) double e2e_ciphertext_version;                //@synthesize e2e_ciphertext_version=_e2e_ciphertext_version - In the implementation block
@property (assign,nonatomic) double e2e_ciphertext_type;                   //@synthesize e2e_ciphertext_type=_e2e_ciphertext_type - In the implementation block
@property (assign,nonatomic) double message_send_t;                        //@synthesize message_send_t=_message_send_t - In the implementation block
-(void)setMessage_media_type:(double)arg1 ;
-(void)setMessage_send_result:(double)arg1 ;
-(void)setMessage_type:(double)arg1 ;
-(void)setMedia_caption_present:(double)arg1 ;
-(void)setRetry_count:(double)arg1 ;
-(void)setMessage_send_t:(double)arg1 ;
-(double)retry_count;
-(double)e2e_ciphertext_type;
-(void)setE2e_ciphertext_type:(double)arg1 ;
-(double)e2e_ciphertext_version;
-(void)setE2e_ciphertext_version:(double)arg1 ;
-(double)message_media_type;
-(double)message_is_forward;
-(void)setMessage_is_forward:(double)arg1 ;
-(double)message_type;
-(double)message_is_international;
-(void)setMessage_is_international:(double)arg1 ;
-(double)message_send_result;
-(double)message_is_fanout;
-(void)setMessage_is_fanout:(double)arg1 ;
-(double)media_caption_present;
-(double)message_send_t;
-(void)submit;
-(id)init;
@end

