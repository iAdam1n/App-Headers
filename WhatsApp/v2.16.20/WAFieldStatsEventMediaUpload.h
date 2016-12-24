/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:50:46 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/F01A5503-B253-4A30-B0BC-B7B5406FD725/WhatsApp.app/WhatsApp
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WhatsApp/WAFieldStatsEvent.h>

@interface WAFieldStatsEventMediaUpload : WAFieldStatsEvent {

	double _media_type;
	double _media_upload_result;
	double _message_is_forward;
	double _retry_count;
	double _transcoded;
	double _e2e_media_encryption;
	double _optimistic_flag;
	double _media_upload_t;
	double _media_size;

}

@property (assign,nonatomic) double media_type;                        //@synthesize media_type=_media_type - In the implementation block
@property (assign,nonatomic) double media_upload_result;               //@synthesize media_upload_result=_media_upload_result - In the implementation block
@property (assign,nonatomic) double message_is_forward;                //@synthesize message_is_forward=_message_is_forward - In the implementation block
@property (assign,nonatomic) double retry_count;                       //@synthesize retry_count=_retry_count - In the implementation block
@property (assign,nonatomic) double transcoded;                        //@synthesize transcoded=_transcoded - In the implementation block
@property (assign,nonatomic) double e2e_media_encryption;              //@synthesize e2e_media_encryption=_e2e_media_encryption - In the implementation block
@property (assign,nonatomic) double optimistic_flag;                   //@synthesize optimistic_flag=_optimistic_flag - In the implementation block
@property (assign,nonatomic) double media_upload_t;                    //@synthesize media_upload_t=_media_upload_t - In the implementation block
@property (assign,nonatomic) double media_size;                        //@synthesize media_size=_media_size - In the implementation block
-(void)setRetry_count:(double)arg1 ;
-(double)retry_count;
-(double)media_type;
-(void)setMedia_type:(double)arg1 ;
-(double)e2e_media_encryption;
-(void)setE2e_media_encryption:(double)arg1 ;
-(double)media_size;
-(void)setMedia_size:(double)arg1 ;
-(double)media_upload_result;
-(void)setMedia_upload_result:(double)arg1 ;
-(double)message_is_forward;
-(void)setMessage_is_forward:(double)arg1 ;
-(double)transcoded;
-(void)setTranscoded:(double)arg1 ;
-(double)optimistic_flag;
-(void)setOptimistic_flag:(double)arg1 ;
-(double)media_upload_t;
-(void)setMedia_upload_t:(double)arg1 ;
-(void)submit;
-(id)init;
@end
