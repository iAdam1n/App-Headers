/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:29:28 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/85513C16-EFBE-4673-84DA-B31CD22289F8/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FBVideoUploadSessionDelegate <NSObject>
@required
-(void)videoUploadSessionDidStart:(id)arg1;
-(void)videoUploadSessionDidFinish:(id)arg1 fbid:(id)arg2 uploadSessionID:(id)arg3;
-(void)videoUploadSessionDidCancel:(id)arg1;
-(void)videoUploadSession:(id)arg1 didFailWithError:(id)arg2;
-(void)videoUploadSession:(id)arg1 didUpdateProgressTo:(double)arg2;

@end
