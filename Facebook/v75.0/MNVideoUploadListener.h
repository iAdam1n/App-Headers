/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:14 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MNVideoUploadListener <NSObject>
@required
-(void)willBeginVideoUploadWithInfo:(id)arg1;
-(void)videoInfo:(id)arg1 didProgressUploadTo:(double)arg2;
-(void)videoInfo:(id)arg1 didCompleteUploadWithFbId:(id)arg2 metrics:(id)arg3;
-(void)videoInfo:(id)arg1 didFailToUploadWithError:(id)arg2 metrics:(id)arg3;
-(void)videoInfo:(id)arg1 didCancelUploadWithMetrics:(id)arg2;
-(void)videoInfo:(id)arg1 didDedupeWithFbId:(id)arg2;

@end
