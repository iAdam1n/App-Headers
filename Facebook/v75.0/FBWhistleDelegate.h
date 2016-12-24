/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:22 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FBWhistleDelegate <NSObject>
@required
-(void)onConnectSent;
-(void)onConnSuccess:(id)arg1;
-(void)onConnFailure:(id)arg1;
-(void)onPingResponseTimeout;
-(void)onPublishWithTopic:(id)arg1 messageId:(id)arg2 qos:(int)arg3 payload:(id)arg4 receiveTime:(double)arg5;
-(void)onPublishSentWithMessageId:(id)arg1 context:(id)arg2;
-(void)onPublishFailedWithContext:(id)arg1 error:(id)arg2;
-(void)onPubAckWithMessageId:(id)arg1;
-(void)onSubAckWithMessageId:(id)arg1;
-(void)onPingRequestSent;
-(void)onPingResponse;
-(void)onError:(id)arg1;

@end
