/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:40:39 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/E282ADAB-AF96-4184-9890-B5E58B4BDDD0/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


@protocol FBWhistleDelegate <NSObject>
@required
-(void)onPublishFailedWithContext:(id)arg1 error:(id)arg2;
-(void)onPublishSentWithMessageId:(id)arg1 context:(id)arg2;
-(void)onConnFailure:(id)arg1;
-(void)onError:(id)arg1;
-(void)onPublishWithTopic:(id)arg1 messageId:(id)arg2 payload:(id)arg3;
-(void)onPubAckWithMessageId:(id)arg1;
-(void)onSubAckWithMessageId:(id)arg1;
-(void)onPingResponse;
-(void)onConnSuccess;

@end
