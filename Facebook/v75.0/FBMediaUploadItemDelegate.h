/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:07 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FBMediaUploadItemDelegate <NSObject>
@required
-(void)mediaUploadItemDidStart:(id)arg1;
-(void)mediaUploadItemDidStartProcessingStep:(id)arg1;
-(void)mediaUploadItemDidFinishProcessingStep:(id)arg1;
-(void)mediaUploadItemDidFinish:(id)arg1;
-(void)mediaUploadItem:(id)arg1 didFailWithError:(id)arg2 allowBackgroundTask:(BOOL)arg3;
-(void)mediaUploadItemDidSendCancelRequest:(id)arg1;
-(void)mediaUploadItemDidCancel:(id)arg1;
-(void)mediaUploadItemRestart:(id)arg1;
-(void)mediaUploadItem:(id)arg1 didUpdateToProgress:(double)arg2 fromProgress:(double)arg3;

@end
